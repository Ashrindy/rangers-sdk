#pragma once

namespace app::ui{
    class UIGameCockpit : public hh::game::GameObject {
    public:
        csl::ut::MoveArray<void*> fsmContexts; // app_cmn::fsm::GOCTinyFsmContext
        csl::ut::MoveArray<void*> fsmContexts1; // app_cmn::fsm::GOCTinyFsmContext
        csl::ut::MoveArray<int64_t> unk2;
        char unk3;
        csl::ut::MoveArray<int64_t> unk4;

        virtual bool ProcessMessage(hh::fnd::Message& message) override;
		virtual bool ReceiveMessage(hh::fnd::Message& message) override;
        virtual void AddCallback(hh::game::GameManager* gameManager) override;

        GAMEOBJECT_CLASS_DECLARATION(UIGameCockpit)
    };
}
