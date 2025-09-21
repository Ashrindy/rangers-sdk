#pragma once

namespace hh::needle::RangersPipeline{
    class RangersDeferredRenderJob : public DefaultDeferredRenderJob{
    public:
        csl::fnd::IAllocator* allocator;

        virtual void InitializeModelJobs(RenderingPipeline* pipeline) override;
        virtual void InitializeJobs0(RenderingPipeline* pipeline) override;
        virtual void InitializeJobs1(RenderingPipeline* pipeline) override;
    };
}
