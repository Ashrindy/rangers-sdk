#pragma once

namespace hh::needle {
    class PBRModelInstanceRenderer;
    class RenderingPipelineRangers : public CaptureRenderingPipeline {
    public:
        uint64_t qword118;
        uint64_t qword120;
        uint64_t qword128;
        uint64_t qword130;
        uint64_t qword138;
        uint64_t qword140;
        uint64_t qword148;
        uint64_t qword150;
        csl::ut::MoveArray<void*> qword158;
        MaterialIDRenderer* matIdRenderer;
        CyberNoiseMaskRender* cyberNoiseMaskRender0;
        CyberNoiseMaskRender* cyberNoiseMaskRender1;
        CyberNPCModelRender* cyberNPCModelRender;
        uint64_t qword198;
        uint64_t qword1A0;
        uint64_t qword1A8;
        uint64_t qword1B0;

        RenderingPipelineRangers(csl::fnd::IAllocator* allocator, PBRModelInstanceRenderer* renderer);

        virtual void UnkFunc1(PipelineInfo* pipelineInfo) override;
        virtual void UnkFunc3(PipelineInfo* pipelineInfo) override;
        virtual void InitializeJobs() override;
        virtual void DeinitializeJobs() override;
    };
}
