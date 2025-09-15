#pragma once

namespace app::game{
    class GameModeHsmExtension : public GameModeExtension{
    public:
        void* context;
        hh::ut::HsmBase hsm;
        hh::ut::StateManager* stateManager;
        int initialState;
        int newState;
        int unk3;

        virtual unsigned int GetNameHash() override;
        virtual void Initialize() override;
        virtual void Destroy() override;
        virtual void Update(hh::fnd::UpdatingPhase phase, const hh::fnd::SUpdateInfo& updateInfo) override;

        void SetMaxLeafNodeObjects(int count);

        GameModeHsmExtension(csl::fnd::IAllocator* allocator);
    };
}
