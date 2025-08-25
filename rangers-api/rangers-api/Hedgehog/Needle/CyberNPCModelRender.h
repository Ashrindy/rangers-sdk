#pragma once

namespace hh::needle{
    class CyberNPCModelRender : public NeedleRefcountObject{
    public:
        VertexShader* vertexShader;
        PixelShader* pixelShader;

        CyberNPCModelRender();

        void SetShaders(RenderingDevice* renderingDevice);
    };
}
