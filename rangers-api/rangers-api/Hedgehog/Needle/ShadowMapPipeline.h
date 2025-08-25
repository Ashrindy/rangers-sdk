#pragma once

namespace hh::needle{
    class ShadowMapPipeline : public RenderingPipeline{
    public:
        char unk0;

        ShadowMapPipeline(csl::fnd::IAllocator* allocator);
    };
}
