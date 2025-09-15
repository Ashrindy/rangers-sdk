#pragma once

namespace hh::needle{
    class PEResolveJob : public RenderJob{
    public:
        RenderTextureHandle* renderTextureHandle;

        virtual void Render(PipelineInfo* pipelineInfo) override;
        virtual unsigned int GetNameHash() override;
        virtual const char* GetName() override;
        virtual unsigned int GetClassSize() override;
    };
}
