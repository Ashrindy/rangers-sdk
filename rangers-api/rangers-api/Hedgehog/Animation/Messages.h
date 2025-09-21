#pragma once

namespace hh::anim{
    class MsgAnimationOverflow : public fnd::Message {
    public:
        AnimationStateInfo* stateInfo;

        virtual fnd::MessageAsyncHandler* CreateAsyncHandler(csl::fnd::IAllocator* allocator) override;
    };
}
