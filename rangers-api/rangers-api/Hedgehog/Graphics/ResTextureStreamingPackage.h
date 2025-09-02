#pragma once
#include <ucsl/resources/ntsp/v1.h>

namespace hh::gfx{
    class ResTextureStreamingPackage : public fnd::ManagedResource {
    public:
        csl::ut::StringMap<int64_t> indicesByTextureName;
        ucsl::resources::ntsp::v1::NeedleTextureStreamingPackage* binaryData0;
        ucsl::resources::ntsp::v1::NeedleTextureStreamingPackage* binaryData1;
        ucsl::resources::ntsp::v1::Texture* textures;
        ucsl::resources::ntsp::v1::Block* blocks;
        fnd::StreamReaderWin32* streamReader;
        hh::fnd::Uri filepath;

        MANAGED_RESOURCE_CLASS_DECLARATION_INLINE(ResTextureStreamingPackage);
    };
}
