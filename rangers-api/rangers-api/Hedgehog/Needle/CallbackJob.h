#pragma once

namespace hh::needle {
    class CallbackJob : public RenderJob {
    public:
        unsigned int viewportId;
        RenderJobCallback callback;
 
        inline CallbackJob() {}
        CallbackJob(unsigned int viewportId, RenderJobCallback::Function* function, void* userData);
        virtual void Start(const RenderJobContext& context) override {}
        virtual void Stop() override {}
        virtual void Render(PipelineInfo* pipelineInfo) override;
        virtual unsigned int GetNameHash() override;
        virtual const char* GetName() override;
        virtual unsigned int GetClassSize() override;
    };
}
