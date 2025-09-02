#pragma once

namespace app_cmn::gfx{
    class RenderTextureFreeCamera : public hh::fnd::ReferencedObject, public hh::game::GameUpdateListener{
    public:
        hh::fnd::Handle<hh::gfx::GOCRenderTexture> gocRenderTexture;
        hh::game::FreeCamera* freeCamera;
        gindows::Form* form;

        RenderTextureFreeCamera(csl::fnd::IAllocator* allocator);

        virtual void PostGameUpdateCallback(hh::game::GameManager* gameManager, const hh::fnd::SUpdateInfo& updateInfo) override;
    };
}
