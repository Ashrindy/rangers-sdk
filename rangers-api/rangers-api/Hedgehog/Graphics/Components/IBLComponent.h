#pragma once

namespace hh::gfx{
    class IBLComponent : public RenderingComponent{
    public:
        class Impl : public fnd::ReferencedObject{
        public:
        };

        fnd::Reference<Impl> implementation;

        IBLComponent(csl::fnd::IAllocator* allocator);

        virtual int GetNameHash() override;
        virtual const char* GetName() override;

        void SetIBLTexture(needle::Texture** texture, const char* sceneName);
    };
}
