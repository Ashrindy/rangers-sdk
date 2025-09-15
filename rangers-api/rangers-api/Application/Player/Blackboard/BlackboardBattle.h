#pragma once

namespace app::player {
    class BlackboardBattle : public BlackboardContent {
    public:
        static constexpr const char* name = "BlackboardBattle";
        
        struct Description {
            char powerLevel;
            char defenseLevel;
            char unk1;
            char unk2;
            float maxQuickCyloopAmount;
            bool unkFlag;
        };

        uint8_t powerLevel;
        uint8_t defenseLevel;
        uint8_t unk1;
        uint8_t unk2;
        csl::math::Vector4 unk3;
        csl::ut::MoveArray<void*> debugArray1;
        csl::ut::MoveArray<void*> debugArray2;
        csl::ut::MoveArray<void*> unk4;
        uint32_t unk5;
        uint8_t unk6a;
        uint8_t unk6b;
        uint8_t unk7;
        uint32_t comboCount;
        float phantomRushAmount;
        float unk9;
        float unk10;
        float quickCyloopAmount;
        void* unkself12;
        uint64_t unk12;
        uint64_t unk13;
        uint64_t unk14;
        csl::ut::VariableString unk16;
        uint8_t flags0; // 0x01 - hit; 0x04 - out of control?; 0x80 - homing attack
        uint8_t flags1;

        virtual unsigned int GetNameHash() const override;

        void Setup(Description& desc);
        float GetQuickCyloopAmount() const;
        bool IsFlag11Set() const;
        bool IsFlag02Set() const;
        void SetFlag02(bool enabled);
        void SetFlag04(bool enabled);
        void SetFlag020(bool enabled);
        void SetUnk6ab(bool value);
        void SetUnk6b(char value);

        DEFAULT_CREATE_FUNC(BlackboardBattle);
    };
}
