#pragma once

namespace app{
    class ObjFishingSequence : public hh::game::GameObject {
    public:
        hh::fnd::Reference<hh::fnd::ResReflectionT<heur::rfl::FishingParameter>> fishingParameters;
        hh::fnd::Reference<hh::fnd::ResReflectionT<heur::rfl::DLCMhrBarbecueParameter>> dlcBarbecueParameters;
        int64_t unk2;
        int64_t unk3;
        hh::fnd::Handle<ObjFishingTimingMarker> timingMarker;
        csl::ut::MoveArray<int64_t> unk5;
        csl::math::Transform unk6;
        char flags;
        int unk8;
        char fish;
        int successCount;
        int failureCount;
        int unk11;
        int64_t unk12;
        float effectStopTimer;
        int unk13;
        hh::snd::SoundHandle unk14;
        hh::eff::EffectHandle unk15;
        char unk18;
        int unk18b;
        int64_t unk19;
        int64_t unk20;
        int unk21;
        int unk22;
        int unk23;

        virtual bool ProcessMessage(hh::fnd::Message& message) override;
		virtual void AddCallback(hh::game::GameManager* gameManager) override;
		virtual void Update(hh::fnd::UpdatingPhase phase, const hh::fnd::SUpdateInfo& updateInfo) override;

        GAMEOBJECT_CLASS_DECLARATION_INLINE_GET_CLASS(ObjFishingSequence);
    };  
}
