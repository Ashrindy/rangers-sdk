#pragma once

namespace hh::needle{
    class ShadowMapPipeline;

    class ShadowMapRenderJob : public RenderJob {
    public:
        int dword48;
        ShadowMapPipeline* shadowMapPipeline;
        int64_t qword58;
        int64_t qword60;
        int32_t gap68[52];
        int64_t qwordD0[4];
        char byteF0;

        ShadowMapRenderJob(csl::fnd::IAllocator* allocator, int a3, char a4);

        virtual unsigned int UnkFunc6(PipelineInfo* pipelineInfo) override;
        virtual void Start(const RenderJobContext& context) override;
        virtual void Stop() override;
        virtual void UnkFunc9(PipelineInfo* pipelineInfo) override;
        virtual void Render(PipelineInfo* pipelineInfo) override;
        virtual unsigned int GetNameHash() override;
        virtual const char* GetName() override;
        virtual unsigned int GetClassSize() override;
    };
}
