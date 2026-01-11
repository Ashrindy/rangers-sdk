#pragma once

namespace app::game{
    class GOCParamBlackboard : public hh::game::GOComponent {
    public:
        struct Unk0{
            unsigned int nameHash;
            int unk1;
            int unk2;
            int unk3;
        };

        hh::fnd::Handle<hh::game::GOComponent> gocomponent; // bossgiantstate::walkingbase uses this for PathComponent
        bool hasGOC;
        int unk2;
        char unk3;
        csl::ut::MoveArray<Unk0> unk4;

		virtual void* GetRuntimeTypeInfo() const;

        GOCOMPONENT_CLASS_DECLARATION(GOCParamBlackboard)
    };
}
