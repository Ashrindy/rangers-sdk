#pragma once

namespace hh::needle{
    class CyberNoiseEffectParamBuildJob : public ParamBuildJob{
    public:
        bool disabled;

        CyberNoiseEffectParamBuildJob();

        virtual void Run(ParamValueOverrideHelper* paramOverrides, PipelineInfo* pipelineInfo, unsigned int viewportId, unsigned int parameterId) override;
    };
}
