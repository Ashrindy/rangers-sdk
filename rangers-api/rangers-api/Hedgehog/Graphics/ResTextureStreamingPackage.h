#pragma once
#include <ucsl/resources/ntsp/v1.h>

namespace hh::gfx{
    class ResTextureStreamingPackage : public fnd::ManagedResource {
    public:
        csl::ut::StringMap<int64_t> indicesByTextureName;
        ucsl::resources::ntsp::v1::NeedleTextureStreamingPackage* streamedbinaryData;
        ucsl::resources::ntsp::v1::NeedleTextureStreamingPackage* header;
        ucsl::resources::ntsp::v1::Texture* textures;
        ucsl::resources::ntsp::v1::Block* blocks;
        fnd::Reference<fnd::StreamReaderWin32> streamReader;
        hh::fnd::Uri filepath;

        void SetupStreamReader();
        void LoadData(fnd::FileSystemImpl* fileSystem);
        ucsl::resources::ntsp::v1::NeedleTextureStreamingPackage* GetHeader() const;
        ucsl::resources::ntsp::v1::Texture* GetTexture(const char* name) const;
        ucsl::resources::ntsp::v1::Block* GetBlocks() const;
        fnd::StreamReaderWin32* GetStreamReader() const;

        MANAGED_RESOURCE_CLASS_DECLARATION_INLINE(ResTextureStreamingPackage);
    };
}
