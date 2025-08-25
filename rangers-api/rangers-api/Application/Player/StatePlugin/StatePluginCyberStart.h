#pragma once

namespace app::player {
    class StatePluginCyberStart : public PlayerStatePlugin {
    public:
        static constexpr const char* name = "StatePluginCyberStart";

        bool enabled;
        bool hasPlayedEffects;
        float playEffectCounter;

        virtual unsigned int GetNameHash() const override;
        virtual void AddCallback() override;
        virtual void Update(hh::fnd::UpdatingPhase phase, const float deltaTime) override;

        void Setup();

        StatePluginCyberStart(csl::fnd::IAllocator* allocator);
    };
}
