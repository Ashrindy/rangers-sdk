#pragma once

namespace hh::needle{
    class ModelInstanceRenderer;
    class GatherRenderingPassContext;
    class RenderingDeviceContext;

    struct ModelCreationInfo {};

    struct DrawMeshPassInfo {};

    class MeshRenderableObject;

    class MeshDrawSettingInfoArray {
    public:
        void Setup(const ModelInstanceRenderer* renderer, const ModelCreationInfo& info, unsigned int unk0);
    };

    class ModelInstanceRenderer : public NeedleRefcountObject {
    public:
        class ModelCacheContainer : public NeedleRefcountObject {
        public:
            char unk0[0x200];
            int unk1;
        };

        ModelCacheContainer* cacheContainer;

        virtual void SetupGatherRenderingPassContext(unsigned int idx, GatherRenderingPassContext* ctx) const = 0;
        virtual void SetupMeshDrawSettingInfoArray(const ModelCreationInfo& creationInfo, MeshDrawSettingInfoArray& drawSettingInfoArray) const;
        virtual void Render(RenderingDeviceContext* renderCtx, CNameIDObject* unk0, unsigned int unk1, const DrawMeshPassInfo* info, unsigned int unk2);
        virtual void UnkFunc();
        virtual void BeginRender(RenderingDeviceContext* renderCtx) const;
        virtual void RenderMesh(RenderingDeviceContext* renderCtx, const MeshRenderableObject* mesh) const;
        virtual void EndRender(RenderingDeviceContext* renderCtx) const;
        virtual int MeasureSetupModelInstance(Model* instance) const { return 0; }
        virtual void UnkFunc1() {};
        virtual void UnkFunc2(int64_t a2, int64_t a3, int64_t a4, int64_t a5, int a6);
        virtual void UnkFunc3(int64_t a2, int64_t a3, int64_t a4, int64_t a5);

        ModelInstanceRenderer();
    };

    class PBRModelInstanceRenderer : public ModelInstanceRenderer {
    public:
        virtual void SetupGatherRenderingPassContext(unsigned int idx, GatherRenderingPassContext* ctx) const override;

        PBRModelInstanceRenderer();
    };
}
