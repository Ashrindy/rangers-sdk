#pragma once

namespace app{
    class ObjFishingBigInfo : public hh::game::ObjInfo {
    public:
        hh::gfx::ResModel* model;
        hh::anim::ResSkeleton* skeleton;
        hh::anim::AsmResourceManager* animator;

        virtual void Load() override;
        virtual void Initialize(hh::game::GameManager* gameManager) override;
        virtual const char* GetInfoName() override;

        OBJINFO_CLASS_DECLARATION(ObjFishingBigInfo);
    };  

    class ObjFishingBig : public hh::game::GameObject{
    public:
        hh::fnd::Handle<hh::game::GameObject> fishingSequenceManager;
        hh::fnd::Handle<hh::game::GameObject> uiFishGuide;
        hh::fnd::Handle<hh::game::GameObject> unk1;
        hh::fnd::Handle<ObjFishingRod> fishingRod;
        hh::fnd::Reference<gfx::ModelNodeContainer> nodeContainer;
        char unk2;
        int unk3;
        int unk4;
        float unkCounter;

        virtual bool ProcessMessage(hh::fnd::Message& message) override;
		virtual void AddCallback(hh::game::GameManager* gameManager) override;

        GAMEOBJECT_CLASS_DECLARATION_INLINE_GET_CLASS(ObjFishingBig);
    };
}
