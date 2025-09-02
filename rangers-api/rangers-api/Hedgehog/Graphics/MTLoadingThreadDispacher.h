#pragma once

namespace hh::gfx{
    class MTLoadingThreadDispacher : public needle::NeedleRefcountObject {
    public:
        TextureStreamingService* textureStreamingService;
        int unk0;
        csl::fnd::Thread thread;
        int unk1;
        char unk2;
    };
}
