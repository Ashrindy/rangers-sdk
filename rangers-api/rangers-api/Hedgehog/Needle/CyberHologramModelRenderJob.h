#pragma once

namespace hh::needle{
    class CyberHologramModelRenderJob;

    class CyberHologramParamBuildJob : public ParamBuildJob {
    public:
        CyberHologramModelRenderJob* renderJob;

        virtual void Run(ParamValueOverrideHelper* paramOverrides, PipelineInfo* pipelineInfo, unsigned int viewportId, unsigned int parameterId) override;
        virtual void UnkFunc0() {}
    };

    class CyberHologramModelRenderJob : public DefaultModelRenderJob {
    public:
        bool inner;

        CyberHologramModelRenderJob(unsigned int viewportId, const char* name, bool inner);

        virtual void Start(const RenderJobContext& context) override;
    };
}
