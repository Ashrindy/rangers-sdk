#pragma once

namespace hh::needle{
    class RenderOptionParamLisetener : public SceneParamContainer::ParamHolder<FxRenderOption>::Listener{
    public:
        intrusive_ptr<ProbeBVH> probeBvh;

        virtual void ParamChangedCallback(const FxRenderOption& previousValue, const FxRenderOption& newValue) override;
    };
}
