#pragma once

namespace hh::needle {
    class World;

    class EntryWorldLink {
    public:
        EntryTreeLink treeLink;
        EntryLink link;
        int flags;
        int unk0;
        unsigned long long resourceId;
        ModelInstance* modelInstance;
        World* world;

        inline void Initialize() {
            treeLink.Initialize();
            link.Initialize();
        }
        inline void Unlink() {
            treeLink.Unlink();
            link.Unlink();
        }
    };

    class World : public NeedleRefcountObject {
    public:
        EntryWorldLink worldLink;
        int nodeCount;
        EntryLink entryLink1;

        virtual EntryWorldLink* GetReferWorld() = 0;
        virtual EntryWorldLink* GetReferWorld1() = 0;
        virtual void AddModelInstanceNode(ModelInstance* instance, EntryWorldLink* worldLink, bool unk1, unsigned int unk2, uint64_t resourceId) = 0;
        virtual bool Remove(ModelInstance* instance) = 0;
        virtual void DestroyEntry(EntryWorldLink* link) = 0;
        virtual void UnkFunc5() = 0;

        void ClearChild(EntryWorldLink* link);
        inline void ClearAll() { ClearChild(&worldLink); }
    };

    class DefaultWorld : public World {
    public:
        virtual EntryWorldLink* GetReferWorld() override;
        virtual EntryWorldLink* GetReferWorld1() override;
        virtual void AddModelInstanceNode(ModelInstance* instance,  EntryWorldLink* worldLink, bool unk1, unsigned int unk2, uint64_t resourceId) override;
        virtual bool Remove(ModelInstance* instance) override;
        virtual void DestroyEntry(EntryWorldLink* link) override;
        virtual void UnkFunc5() override;
    };

    DefaultWorld* CreateDefaultWorld(unsigned int count);

    class SCWorld : public SceneContext {
    public:
        class Impl : public NeedleRefcountObject {
            World* worlds[9];
        public:

            Impl(SCWorld& sceneContext);
        };

        intrusive_ptr<Impl> implementation;

        SCENECONTEXT_CLASS_DECLARATION(SCWorld);

        virtual void Initialize(const InitializeInfo& initializeInfo);
        virtual void UnkFunc1();
        virtual unsigned int GetNameHash();
        virtual const char* GetName();

        World* GetWorldByIdx(unsigned int idx) const;
    };
}
