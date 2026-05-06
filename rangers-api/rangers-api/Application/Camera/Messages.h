#pragma once

namespace app::camera {
    class MsgMotionCamera : public fnd::AppMessage<MsgMotionCamera> {
    public:
        csl::math::Transform animTransform{};

        MsgMotionCamera() : fnd::AppMessage<MsgMotionCamera>{ hh::fnd::MessageID::MOTION_CAMERA } {}
    };
}