#pragma once

namespace app {
    class MsgDamage : public fnd::AppMessage<MsgDamage> {
    public:
        uint32_t dword20;
        size_t qword28;
        uint32_t dword30;
        csl::math::Vector3 csl__math__vector440;
        csl::math::Vector3 csl__math__vector450;
        csl::math::Vector3 csl__math__vector460;
        float dword70;
        uint32_t dword74;
        csl::math::Vector3 csl__math__vector480;
        csl::math::Vector3 csl__math__vector490;
        csl::math::Vector3 csl__math__vector4A0;
        uint64_t qwordB0;
        uint64_t qwordB8;
        float qwordC0;
        uint32_t qwordC4;
        short wordC8;
        csl::math::Vector3 csl__math__vector4D0;
        csl::math::Vector3 csl__math__vector4E0;
        csl::math::Vector3 csl__math__vector4F0;
        csl::math::Quaternion csl__math__vector4100;
        uint32_t dword110;

        MsgDamage(unsigned int dword20Param, size_t qword28Param) : fnd::AppMessage<MsgDamage>{ hh::fnd::MessageID::DAMAGE } {}
    };

    class MsgGetCyloopPoint : public fnd::AppMessage<MsgGetCyloopPoint> {
    public:
        hh::fnd::Handle<hh::game::GOComponent> unk1{};
        csl::math::Vector3 position{ 0.0f, 0.0f, 0.0f };
        csl::math::Vector3 normal{ 0.0f, 0.0f, 0.0f };
        float radius{};
        uint32_t unk2{};
        uint32_t unk3{};
        uint8_t unk4{};

        MsgGetCyloopPoint() : fnd::AppMessage<MsgGetCyloopPoint>{ hh::fnd::MessageID::GET_CYLOOP_POINT } {}
    };

    class MsgLossRing : public fnd::AppMessage<MsgLossRing> {
    public:
        enum class Type : unsigned int {
            NORMAL,
            TRACKER_TENTACLE,
            TRACKER_BLACKHOLE,
        };

        int amount{};
        bool all{};
        Type type{};
        int ringsLostAmount{};
        bool ringsLost{};

        MsgLossRing() : fnd::AppMessage<MsgLossRing>{ hh::fnd::MessageID::LOSS_RING } {}
    };

    class MsgNotifyStartMeteorShowerEvent : public fnd::AppMessage<MsgNotifyStartMeteorShowerEvent> {
    public:
        MsgNotifyStartMeteorShowerEvent() : fnd::AppMessage<MsgNotifyStartMeteorShowerEvent>{ hh::fnd::MessageID::NOTIFY_START_METEOR_SHOWER_EVENT } {}
    };

    class MsgNotifyEndMeteorShowerEvent : public fnd::AppMessage<MsgNotifyEndMeteorShowerEvent> {
    public:
        MsgNotifyEndMeteorShowerEvent() : fnd::AppMessage<MsgNotifyEndMeteorShowerEvent>{ hh::fnd::MessageID::NOTIFY_END_METEOR_SHOWER_EVENT } {}
    };

    class MsgNotifyEndMeteorShowerWeather : public fnd::AppMessage<MsgNotifyEndMeteorShowerWeather> {
    public:
        MsgNotifyEndMeteorShowerWeather() : fnd::AppMessage<MsgNotifyEndMeteorShowerWeather>{ hh::fnd::MessageID::END_METEOR_SHOWER_WEATHER } {}
    };

    class MsgTakeObject : public fnd::AppMessage<MsgTakeObject> {
    public:
        enum class Type : unsigned char {
            RING,
            SUPER_RING,
            RED_RING,
            EXP,
            PORTAL_BIT,
            POWER_SEED,
            GUARD_SEED,
            UNK2,
            MEMORY_TOKEN,
            ITEMBOX_PARTS,
            EMERALD_KEY,
            MUSIC_MEMORY,
            UNK5,
            NITRO_BOTTLE,
            STOP_WATCH,
            SILVER_MOON_RING,
            NUMBER_RING
        };

        Type objectType{ Type::RING };
        char flags{ 0 };
        int amount{ 0 };
        bool showEffect{ true };
        int islandIndex{ 0 };
        char expIndex{ 0 };

        MsgTakeObject() : fnd::AppMessage<MsgTakeObject>{ hh::fnd::MessageID::TAKE_OBJECT } {}
    };

    class MsgGetTargetPosition : public fnd::AppMessage<MsgGetTargetPosition> {
    public:
        enum class Position : unsigned char {
            ROOT,
            NECK,
            HEAD,
            SPINE
        };

        bool changed;
        csl::math::Vector3 targetPosition;
        Position position;

        MsgGetTargetPosition() : fnd::AppMessage<MsgGetTargetPosition>{ hh::fnd::MessageID::GET_TARGET_POSITION } {}
    };

    class MsgSpringImpulse : public fnd::AppMessage<MsgSpringImpulse> {
    public:
        csl::math::Vector4 unk0;
        csl::math::Vector3 velocity; //or direction
        csl::math::Vector4 unk1;
        float outOfControlTime;
        float keepVelocityTime;
        int unk2;
        int unk3;

        MsgSpringImpulse() : fnd::AppMessage<MsgSpringImpulse>{ hh::fnd::MessageID::SPRING_IMPULSE } {}
    };

    class MsgAddActionChainScore : public fnd::AppMessage<MsgAddActionChainScore> {
    public:
        int score;
        int ownerHandle;
        int64_t unk0;

        MsgAddActionChainScore() : fnd::AppMessage<MsgAddActionChainScore>{ hh::fnd::MessageID::ADD_ACTION_CHAIN_SCORE } {}
    };

    class MsgFishingReturnToIsland : public fnd::AppMessage<MsgFishingReturnToIsland> {
    public:
        MsgFishingReturnToIsland() : fnd::AppMessage<MsgFishingReturnToIsland>{ hh::fnd::MessageID::FISHING_RETURN_TO_ISLAND } {}
    };

    class MsgFishingChangeCameraMode : public fnd::AppMessage<MsgFishingChangeCameraMode> {
    public:
        int mode;

        MsgFishingChangeCameraMode() : fnd::AppMessage<MsgFishingChangeCameraMode>{ hh::fnd::MessageID::FISHING_CHANGE_CAMERA_MODE } {}
    };

    class MsgRaiseRings : public fnd::AppMessage<MsgRaiseRings> {
    public:
        int ringAmount;

        MsgRaiseRings() : fnd::AppMessage<MsgRaiseRings>{ hh::fnd::MessageID::RAISE_RINGS } {}
    };

    class MsgEndBossEvent : public fnd::AppMessage<MsgEndBossEvent> {
    public:
        MsgEndBossEvent() : fnd::AppMessage<MsgEndBossEvent>{ hh::fnd::MessageID::END_BOSS_EVENT } {}
    };
}
