#pragma once

namespace app{
    class ObjEventCapture : public hh::game::GameObject, public evt::EventPlayerListener {
    public:
        enum class Flags : unsigned char {
            USE_TRANSFORM,
            USE_TIME,
            USE_WEATHER,
            DISABLE_CSM_CACHE
        };
    
        struct Description {
            const char* cutsceneName;
            const char* pchar8;
            const char* pchar10;
            const char* soundName;
            csl::math::Transform cutsceneTransform;
            float timeHour;
            app::save::WeatherBlockData::Type weather;
            csl::ut::Bitset<Flags> flags;
        };

        csl::ut::VariableString cutsceneName;
        csl::ut::VariableString unk0;
        csl::ut::VariableString unk1;
        csl::ut::VariableString soundName;
        csl::math::Transform cutsceneTransform;
        hh::snd::SoundHandle soundHandle;
        float timeHour;
        app::save::WeatherBlockData::Type weather;
        csl::ut::Bitset<Flags> flags;
        bool playSound;

        void Setup(Description& desc);

        virtual void AddCallback(hh::game::GameManager* gameManager) override;
		virtual void RemoveCallback(hh::game::GameManager* gameManager) override;
        virtual void EPL_UnkFunc2() override;
        virtual void CutsceneEnd(const char* cutsceneName) override;
        virtual void EPL_UnkFunc5() override;

        GAMEOBJECT_CLASS_DECLARATION(ObjEventCapture)
    };
};
