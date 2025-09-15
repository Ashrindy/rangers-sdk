#pragma once

namespace hh::needle{
    class RenderTexturePostEffectPipeline : public WorldRenderingPipeline {
    public:
        RenderTextureHandle* renderTextureHandle;
        hh::needle::FxDOFParameter dofParameter;

        RenderTexturePostEffectPipeline(csl::fnd::IAllocator* allocator, PBRModelInstanceRenderer* modelInstanceRenderer, RenderTextureHandle* handle);
    
        virtual void InitializeJobs() override;

        void SetDOF(hh::needle::FxDOFParameter& param);
    };
}
