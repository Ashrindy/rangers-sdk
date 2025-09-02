#pragma once

namespace hh::gfx{
    class ResTextureStreamingPackage : public fnd::ManagedResource {
    public:
        csl::ut::StringMap<int64_t> unk0;
        int64_t unk1;
        int64_t unk2;
        int64_t unk3;
        int64_t unk4;
        int64_t unk5;
        hh::fnd::Uri unk6;

        MANAGED_RESOURCE_CLASS_DECLARATION_INLINE(ResTextureStreamingPackage);
    };
}
