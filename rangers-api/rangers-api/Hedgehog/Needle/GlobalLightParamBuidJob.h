#pragma once

namespace hh::needle{
    class GlobalLightParamBuidJob : public ParamBuildJob{
    public:
        SCGlobalLight* scGlobalLight;

        virtual void Prepare(ParameterValueObject* parameters, PipelineInfo* pipelineInfo) override;
    };
}
