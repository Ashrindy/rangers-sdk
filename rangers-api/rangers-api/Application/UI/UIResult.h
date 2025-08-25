#pragma once

namespace app::ui{
    class UIResult : public hh::game::GameObject {
    public:
        struct ResultInfo {
            int curRings;
            int maxRings;
            char redRingsCollected;
            float time;
            char rank;
            char unk0[11]; //related to mission
            bool arcadeMode;
            int32_t qword270; //related to extra in stagedata
            bool magnetDashUsed;
            bool spindashUsed;
            bool jumpDecellUsed;
            bool powerboostUsed;
            bool allUsed;
            bool hadRedStars;
            char numberRingCollected;
            char silverMoonRingsCollected;
            char byte278[4]; //related to mission
            int32_t animalsRescuedAmount;
        };

        hh::ui::LayerController* mainLayerController;
        ResultInfo resultInfo;
        int64_t qword280;
        int32_t dword288;
        int8_t byte28C;
        int32_t dword290;
        int64_t qword294;
        int64_t qword29C;
        int32_t dword2A4;
        int char2A8;
        int byte2AC;
        int64_t qword2B0;
        int64_t qword2B8;
        int32_t dword2C0;
        hh::snd::SoundHandle soundHandle;
        hh::snd::SoundHandle qword2C8;
        hh::snd::SoundHandle qword2CC;
        int32_t qword2D0;
        int32_t dword2D4;
        int32_t dword2D8;
        int32_t gap2DC;
        int32_t dword2E0;
        short char2E4;
        int8_t byte2E6;
        int8_t byte2E7;
        int32_t dword2E8;
        int64_t qword2F0;
        int32_t dword2F8;

        virtual void AddCallback(hh::game::GameManager* gameManager) override;
        void Setup(ResultInfo& resultInfo);

        GAMEOBJECT_CLASS_DECLARATION(UIResult);
    };
}
