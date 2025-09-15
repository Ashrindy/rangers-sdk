#pragma once

namespace app{
    class ObjFishingTimingMarker : public hh::game::GameObject{
    public:
        struct Description {
            hh::fnd::Handle<hh::game::GameObject> fishingSequence;
            float baseWaveThickness;
            float baseWaveSuccessRatioNormal;
            float baseWaveSuccessRatioHold;
            float inputValidTime;
            float baseWaveEdgeThickness;
            float timingEdgeThickness;
        };

        hh::fnd::Handle<hh::game::GameObject> fishingSequence;
        hh::gfx::GOCVisualUserModel* visualUserModel;
        csl::ut::MoveArray<hh::gfx::GOCVisualUserModel*> visualUserModels0;
        csl::ut::MoveArray<hh::gfx::GOCVisualUserModel*> visualUserModels1;
        csl::ut::MoveArray<hh::gfx::GOCVisualUserModel*> visualUserModels2;
        csl::ut::MoveArray<hh::gfx::GOCVisualUserModel*> visualUserModels3;
        csl::ut::MoveArray<int64_t> unk6;
        hh::eff::EffectHandle unk7[10];
        int unk8;
        float baseWaveThickness;
        float baseWaveSuccessRatioNormal;
        float baseWaveSuccessRatioHold;
        float inputValidTime;
        float baseWaveEdgeThickness;
        float timingEdgeThickness;
        char unk12;
        int64_t unk13;
        int16_t unk14;
        int unk15;

        virtual void AddCallback(hh::game::GameManager* gameManager) override;
		virtual void Update(hh::fnd::UpdatingPhase phase, const hh::fnd::SUpdateInfo& updateInfo) override;

        void Setup(Description& desc);
        
        GAMEOBJECT_CLASS_DECLARATION(ObjFishingTimingMarker);
    };  
}
