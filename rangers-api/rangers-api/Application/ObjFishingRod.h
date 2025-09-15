#pragma once

namespace app{
    class ObjFishingRod : public hh::game::GameObject {
    public:
        enum class State : unsigned int {
            IDLE,
            GET,
            FINISH
        };

        struct Description {
            char spotId;
            State state;
            hh::fnd::HFrame* hFrame;
        };

        char spotId;
        State state;
        hh::fnd::HFrame* hFrame;
        hh::fnd::Reference<gfx::ModelNodeContainer> modelNodeContainer;

        virtual void AddCallback(hh::game::GameManager* gameManager) override;
		virtual void Update(hh::fnd::UpdatingPhase phase, const hh::fnd::SUpdateInfo& updateInfo) override;

        void Setup(Description& desc);

        GAMEOBJECT_CLASS_DECLARATION(ObjFishingRod);
    };
}
