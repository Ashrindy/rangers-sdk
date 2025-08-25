#pragma once

namespace app::player{
    class StatePluginEffect : public PlayerStatePlugin{
    public:
        static constexpr const char* name = "StatePluginEffect";

        struct Effect {
            unsigned int nameHash;
            hh::eff::EffectHandle handle;
        };

        csl::ut::MoveArray<Effect> effects;

        virtual unsigned int GetNameHash() const override;
        virtual void RemoveCallback() override;
        virtual void Update(hh::fnd::UpdatingPhase phase, const float deltaTime) override;

        void PlayEffect(unsigned int nameHash, const hh::eff::EffectCreateInfo& createInfo);
        void PlayEffect(unsigned int nameHash, const char* effectName);
        void PlayEffect(unsigned int nameHash, const char* effectName, hh::fnd::HFrame* frame);
        void PlayEffect(unsigned int nameHash, const char* effectName, hh::fnd::HFrame* frame, hh::fnd::WorldPosition& offset);
        void PlayEffect(unsigned int nameHash, const char* effectName, int nodeIdx);
        void PlayEffect(unsigned int nameHash, const char* effectName, int nodeIdx, hh::fnd::WorldPosition& offset);
        bool HasEffect(unsigned int nameHash);
        void StopEffectHandle(unsigned int nameHash);
        void StopEffect(unsigned int nameHash);

        StatePluginEffect(csl::fnd::IAllocator* allocator);
    };  
}
