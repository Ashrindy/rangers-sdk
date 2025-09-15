#pragma once

namespace hh::needle {
    class World : public NeedleRefcountObject {
    public:
        virtual void UnkFunc0() {}
        virtual void* UnkFunc1() {}
        virtual void AddModelInstance(ModelInstance* instance, void* unk0, bool unk1, int unk2, int64_t resourceId) {}
        virtual void UnkFunc3() {}
        virtual void UnkFunc4() {}
        virtual void UnkFunc5() {}
    };

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
