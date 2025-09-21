#pragma once

namespace hh::gfx {
    class ResAnimTexSrt : public fnd::ManagedResource {
    public:
        needle::intrusive_ptr<needle::TexcoordAnimationResource> resource;

        virtual void Load(void* data, size_t size) override;
        virtual void Unload() override;
        virtual void Reload(void* data, size_t size) override;

        needle::TexcoordAnimationResource* GetAnimationResource() const;

        MANAGED_RESOURCE_CLASS_DECLARATION(ResAnimTexSrt)
    };
}
