#pragma once
#include <ucsl/resources/shlightfield/v1.h>

namespace hh::gfx{
    class ResSHLightField : public fnd::ManagedResource {
    public:
        ucsl::resources::shlightfield::v1::SHLightFieldData* binaryData;
        csl::ut::MoveArray<hh::needle::Texture*> textures; //based on nodes in the binaryData
        csl::ut::MoveArray<hh::gfnd::ResTexture*> resTextures; //based on nodes in the binaryData

        virtual void Load(void* data, size_t size) override;
        virtual void Resolve(fnd::ResourceResolver& resolver) override;

        MANAGED_RESOURCE_CLASS_DECLARATION(ResSHLightField)
    };
}
