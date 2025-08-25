#pragma once

namespace app::camera{
    class FishingCamera : public app_cmn::camera::CameraController {
    public:
        struct SetupInfo {
            hh::fnd::Handle<hh::game::GameObject> unk0[2];
            int unk1;
            int unk2;
            csl::math::Vector3 buoyCameraOffset;
            csl::math::Vector3 battleCameraOffset;
            csl::math::Vector3 catchCameraOffset;
            csl::math::Vector3 unk15;
            int unk18;
            float fov;
        }; 

        SetupInfo setupInfo;
        int cameraMode;
        csl::math::Vector3 targetPosition;
        int unk23;

        virtual const char* GetControllerName() const override;
        virtual bool ProcessMessage(hh::fnd::Message& message) override;
        virtual void UnkFunc2(int64_t a2) override;
        virtual int64_t UnkFunc3() override;
        virtual void UnkFunc5() override;

        void Setup(SetupInfo& desc);

        FishingCamera(csl::fnd::IAllocator* allocator);
    };
}
