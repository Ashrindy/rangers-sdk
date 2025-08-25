#pragma once

namespace hh::needle{
    class ModelRenderOpPtJob : public ModelRenderJobBase {
    public:
        int64_t qword1D0;
        int64_t qword1D8;
        int64_t qword1E0;
        int64_t qword1E8;
        char byte1F0;
        hh::needle::RenderTargetsSetting renderTargetsSetting;
        float width;
        float height;
        char byte24c;

        ModelRenderOpPtJob(unsigned int viewportId);
        virtual unsigned int UnkFunc6(PipelineInfo* pipelineInfo) override;
        virtual void Render(PipelineInfo* pipelineInfo) override;
        virtual unsigned int GetNameHash() override;
        virtual const char* GetName() override;
        virtual unsigned int GetClassSize() override;
    };
}
