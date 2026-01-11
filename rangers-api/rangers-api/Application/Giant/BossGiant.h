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

    class BossGiantState {
    public:
        class Idling : public app_cmn::fsm::GOCStateBase<BossGiantContext> {
        public:
            virtual bool StateStep(BossGiantContext& context, float deltaTime) override;
            virtual bool StateUpdateAsync(BossGiantContext& context, hh::fnd::UpdatingPhase phase, float deltaTime) override;
            virtual void StateEnter(BossGiantContext& context, int previousStateId) override;
            virtual void StateLeave(BossGiantContext& context, int nextStateId) override;

            DEFAULT_CREATE_FUNC(Idling);
        };

        class WalkingBase : public app_cmn::fsm::GOCStateBase<BossGiantContext> {
        public:
            hh::path::PathEvaluator path;
            bool relatedToPath;
            float animationTimer;
            bool playShake;
            bool isRightArm;
            char unk4;

            virtual bool ProcessMessage(BossGiantContext& context, const hh::fnd::Message& message) override;
            virtual bool StateStep(BossGiantContext& context, float deltaTime) override;
            virtual bool StateUpdateAsync(BossGiantContext& context, hh::fnd::UpdatingPhase phase, float deltaTime) override;
            virtual void StateEnter(BossGiantContext& context, int previousStateId) override;
            virtual void StateLeave(BossGiantContext& context, int nextStateId) override;

            DEFAULT_CREATE_FUNC(WalkingBase);
        };

        class WalkingStart : public app_cmn::fsm::GOCStateBase<BossGiantContext> {
        public:
            char unk0;
            bool isMoveRight;

            virtual bool ProcessMessage(BossGiantContext& context, const hh::fnd::Message& message) override;
            virtual bool StateStep(BossGiantContext& context, float deltaTime) override;
            virtual bool StateUpdateAsync(BossGiantContext& context, hh::fnd::UpdatingPhase phase, float deltaTime) override;
            virtual void StateEnter(BossGiantContext& context, int previousStateId) override;
            virtual void StateLeave(BossGiantContext& context, int nextStateId) override;

            DEFAULT_CREATE_FUNC(WalkingStart);
        };
        
        class WalkingIdleRight : public app_cmn::fsm::GOCStateBase<BossGiantContext> {
        public:
            float turnTimer;

            virtual bool StateStep(BossGiantContext& context, float deltaTime) override;
            virtual bool StateUpdateAsync(BossGiantContext& context, hh::fnd::UpdatingPhase phase, float deltaTime) override;
            virtual void StateEnter(BossGiantContext& context, int previousStateId) override;
            virtual void StateLeave(BossGiantContext& context, int nextStateId) override;

            DEFAULT_CREATE_FUNC(WalkingIdleRight);
        };

        class WalkingMoveLeft : public app_cmn::fsm::GOCStateBase<BossGiantContext> {
        public:
            char unk0;
            bool isMoveRight;

            virtual bool ProcessMessage(BossGiantContext& context, const hh::fnd::Message& message) override;
            virtual bool StateStep(BossGiantContext& context, float deltaTime) override;
            virtual bool StateUpdateAsync(BossGiantContext& context, hh::fnd::UpdatingPhase phase, float deltaTime) override;
            virtual void StateEnter(BossGiantContext& context, int previousStateId) override;
            virtual void StateLeave(BossGiantContext& context, int nextStateId) override;

            DEFAULT_CREATE_FUNC(WalkingMoveLeft);
        };

        class WalkingIdleLeft : public app_cmn::fsm::GOCStateBase<BossGiantContext> {
        public:
            float turnTimer;

            virtual bool StateStep(BossGiantContext& context, float deltaTime) override;
            virtual bool StateUpdateAsync(BossGiantContext& context, hh::fnd::UpdatingPhase phase, float deltaTime) override;
            virtual void StateEnter(BossGiantContext& context, int previousStateId) override;
            virtual void StateLeave(BossGiantContext& context, int nextStateId) override;

            DEFAULT_CREATE_FUNC(WalkingIdleLeft);
        };

        class WalkingMoveRight : public app_cmn::fsm::GOCStateBase<BossGiantContext> {
        public:
            char unk0;
            bool isMoveRight;

            virtual bool ProcessMessage(BossGiantContext& context, const hh::fnd::Message& message) override;
            virtual bool StateStep(BossGiantContext& context, float deltaTime) override;
            virtual bool StateUpdateAsync(BossGiantContext& context, hh::fnd::UpdatingPhase phase, float deltaTime) override;
            virtual void StateEnter(BossGiantContext& context, int previousStateId) override;
            virtual void StateLeave(BossGiantContext& context, int nextStateId) override;

            DEFAULT_CREATE_FUNC(WalkingMoveRight);
        };

        class WalkingEnd : public app_cmn::fsm::GOCStateBase<BossGiantContext> {
        public:
            float endTimer;

            virtual bool StateStep(BossGiantContext& context, float deltaTime) override;
            virtual bool StateUpdateAsync(BossGiantContext& context, hh::fnd::UpdatingPhase phase, float deltaTime) override;
            virtual void StateEnter(BossGiantContext& context, int previousStateId) override;

            DEFAULT_CREATE_FUNC(WalkingEnd);
        };

        class BattlePhaseParentBase : public app_cmn::fsm::GOCStateBase<BossGiantContext> {
        public:
            virtual int64_t BPPB_UnkFunc0() = 0;
            virtual void BPPB_UnkFunc1() {}
        };

        class BattlePhaseParent : public BattlePhaseParentBase, public game::BossActionSelectListener, public BossEventListener {
        public:
            int64_t unk0;
            int64_t unk1;
            int unk2;
            float unk2b;
            int64_t unk3;
            int unk4;
            csl::math::Vector4 unk5;
            int64_t unk6;
            short flags;
            int64_t unk8;
            hh::fnd::Reference<hh::fnd::HFrame> unk9;
            int unk10;
            csl::ut::VariableString unk11;
            int64_t unk12;

            virtual bool ProcessMessage(BossGiantContext& context, const hh::fnd::Message& message) override;
            virtual bool StateStep(BossGiantContext& context, float deltaTime) override;
            virtual bool StateInit(BossGiantContext& context) override;
            virtual void StateEnter(BossGiantContext& context, int previousStateId) override;
            virtual void StateLeave(BossGiantContext& context, int nextStateId) override;

            virtual int64_t BPPB_UnkFunc0() override;
            virtual void BPPB_UnkFunc1() override;

            virtual void BEL_UnkFunc0(int64_t a2) override;
            virtual bool BEL_UnkFunc2(int64_t a2) override;

            DEFAULT_CREATE_FUNC(BattlePhaseParent);
        };
    };

    namespace game{
        class BossActionPluginGiant01 : public BossActionPlugin<BossActionPluginGiant01> {
        public:
            GOCBossActionSelect* bossActionSelect;
            int unk1;
            csl::ut::MoveArray<int64_t> unk2;
            float unk3Timer;
            float unk3bTimer;
            float unk4Timer;
            float attackWaitTimer;
            float unk5;
            int64_t unk6;
            short unk7;

            virtual int GetNameHash() const override;
            virtual void OnAdded() override;
            virtual void UnkFunc2() override;
            virtual void UnkFunc3() override;
            virtual bool UpdateState(int a2, float deltaTime) override;
            virtual bool UnkFunc9(int64_t a2) override;
            virtual bool UnkFunc10(csl::ut::MoveArray<int64_t>& a2) override;
            virtual bool UnkFunc11(int64_t a2) override;
            virtual bool UnkFunc12(int64_t a2, csl::ut::String& a3) override;
            virtual void UnkFunc13(int64_t a2, int64_t a3) override;
            virtual void ExecuteState0(int stateIdx) override;
            virtual void ExecuteState1(StateInfo& stateInfo) override;
        };
    }
}
