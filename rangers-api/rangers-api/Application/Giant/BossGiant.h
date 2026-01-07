#pragma once

namespace app{
    class BossGiantInfo : public hh::game::ObjInfo {
    public:
        struct PhaseResources {
            const char* phaseName;
            csl::ut::MoveArray<hh::fnd::ManagedResource*> resources;
        };

        hh::gfx::ResModel* model;
        hh::anim::ResSkeletonPxd* skeleton;
        hh::anim::ResSkeletonPxd* skeletonCypos;
        hh::fnd::ManagedResource* skinnedMeshCol;
        hh::fnd::ManagedResource* skinnedMeshColLow;
        csl::ut::MoveArray<PhaseResources> phaseResources;
        hh::fnd::Reference<hh::anim::AsmResourceManager> animator;
        hh::animeff::ResParticleLocation* effdb;
        hh::fnd::Reference<hh::fnd::ResReflectionT<heur::rfl::BossGiantConfig>> parameters;
        app::game::ResAIStateMachine* aism;
        int64_t qwordA0;

        virtual void Load() override;
        virtual void Initialize(hh::game::GameManager* gameManager) override;
        virtual const char* GetInfoName() override;
        virtual void RegistCallback(hh::game::ObjInfoContainer* container) override;

        OBJINFO_CLASS_DECLARATION(BossGiantInfo)
    };

    class BossGiant : public hh::game::GameObject, public game::ReactiveListener {
    public:
        hh::fnd::Reference<BossGiantContext> context;
        short unk0;
        char unk1;
        int unk2;
        hh::fnd::Reference<hh::physics::ResPhysicsMesh> resPhysicsMesh;
        app_cmn::rfl::GOCRflParameter* rflParam;
        hh::physics::GOCCollider* skinnedMeshCollider;

        virtual void* GetRuntimeTypeInfo() const override;
		virtual bool ProcessMessage(hh::fnd::Message& message) override;
        virtual void AddCallback(hh::game::GameManager* gameManager) override;
		virtual void RemoveCallback(hh::game::GameManager* gameManager) override;
		virtual void Update(hh::fnd::UpdatingPhase phase, const hh::fnd::SUpdateInfo& updateInfo) override;
        virtual void UpdateAsync(hh::fnd::UpdatingPhase phase, const hh::fnd::SUpdateInfo& updateInfo, void* unkParam) override;

        virtual int64_t RL_UnkFunc0() override;

        GAMEOBJECT_CLASS_DECLARATION_INLINE_GET_CLASS(BossGiant)
    };
}
