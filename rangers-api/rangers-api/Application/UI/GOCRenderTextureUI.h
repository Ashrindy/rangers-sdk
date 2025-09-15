#pragma once

namespace app::ui{
    class GOCRenderTextureUI : public hh::gfx::GOCRenderTexture {
    public:
        struct Description : hh::gfx::GOCRenderTexture::SetupInfo {
            int gocSpriteNameHash;
            const char* textureListName;
            short textureIdx;
        };

        hh::ui::GOCSprite* gocSprite;
        int gocSpriteNameHash;
        csl::ut::VariableString textureListName;
        short textureIdx;

        void Setup(Description& desc);
        void SetGOCSprite(hh::ui::GOCSprite* gocSprite);

        virtual void* GetRuntimeTypeInfo() const override;
		virtual void OnGOCEvent(GOCEvent event, hh::game::GameObject& ownerGameObject, void* data) override;

        GOCOMPONENT_CLASS_DECLARATION(GOCRenderTextureUI)
    };
}
