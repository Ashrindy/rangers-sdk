#pragma once

namespace hh::needle {
    class PBRModelInstanceRenderer;
    class RenderingPipelineRangers : public CaptureRenderingPipeline {
    public:
        RenderTarget* mainRenderTarget;
        DepthStencil* mainDepthStencil;
        Texture* renderTargetView;
        Texture* depthStencilView;
        uint64_t qword138;
        RenderTarget* depthStencilRenderTarget;
        Texture* depthStencilRenderTargetView;
        uint64_t qword150;
        csl::ut::MoveArray<void*> qword158;
        MaterialIDRenderer* matIdRenderer;
        CyberNoiseMaskRender* cyberNoiseMaskRender0;
        CyberNoiseMaskRender* cyberNoiseMaskRender1;
        CyberNPCModelRender* cyberNPCModelRender;
        DepthStencil* depthStencil0;
        Texture* depthStencil0View;
        DepthStencil* depthStencil1;
        Texture* depthStencil1View;

        RenderingPipelineRangers(csl::fnd::IAllocator* allocator, PBRModelInstanceRenderer* renderer);

        virtual void UnkFunc1(PipelineInfo* pipelineInfo) override;
        virtual void UnkFunc3(PipelineInfo* pipelineInfo) override;
        virtual void InitializeJobs() override;
        virtual void DeinitializeJobs() override;
    };
}
