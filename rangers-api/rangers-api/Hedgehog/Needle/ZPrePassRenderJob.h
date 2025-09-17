#pragma once

namespace hh::needle{
    class ZPrePassRenderJob;

    class ZPrePassParamBuildJob : public ParamBuildJob {
    public:
        ZPrePassRenderJob* renderJob;

        virtual void Run(ParamValueOverrideHelper* paramOverrides, PipelineInfo* pipelineInfo, unsigned int viewportId, unsigned int parameterId) override;
    };

    class ZPrePassRenderJob : public DefaultModelRenderJob {
    public:
        int64_t unk218;
        int64_t unk220;

        ZPrePassRenderJob(unsigned int viewportId, const char* name);

        virtual void Start(const RenderJobContext& context) override;
        virtual unsigned int GetNameHash() override;
        virtual const char* GetName() override;
        virtual unsigned int GetClassSize() override;
    };
}
