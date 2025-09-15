#pragma once

namespace hh::needle {
    class SCGlobalLight : public SceneContext {
    public:
        struct LightData {
            csl::math::Vector3 lightColor;
            uint64_t unk5;
            uint64_t unk6;
            csl::math::Vector3 lightDirection;
            uint64_t unk9;
            uint64_t unk10;
        };

        LightData lightData;

        SCENECONTEXT_CLASS_DECLARATION(SCGlobalLight);

        virtual void Initialize(const InitializeInfo& initializeInfo);
        virtual void UnkFunc1();
        virtual unsigned int GetNameHash();
        virtual const char* GetName();

        void SetLightData(LightData& lightData);
        void GetLightData(LightData& lightData);
        void SetDirectionAndColor(const csl::math::Vector3& direction, const csl::math::Vector3& color);
    };
}
