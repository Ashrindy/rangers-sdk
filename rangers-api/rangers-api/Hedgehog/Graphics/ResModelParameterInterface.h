#pragma once

namespace hh::gfx {
    template<typename T>
    class ResModelParameterInterface {
    public:
        int unk0;

        virtual void* GetParameterInterface() = 0;
    };
}
