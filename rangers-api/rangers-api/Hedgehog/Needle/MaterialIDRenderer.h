#pragma once

namespace hh::needle{
    class MaterialIDRenderer : public NeedleRefcountObject{
    public:
        VertexShader* vertexShader;
        PixelShader* pixelShader;

        MaterialIDRenderer();

        void SetShaders(RenderingDevice* renderingDevice);
    };
}
