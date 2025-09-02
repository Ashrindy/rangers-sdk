#pragma once

namespace hh::needle {
    enum class SurfaceType : uint32_t {
        NONE,
        UNK1,
        UNK2,
        UNK3,
    };

    enum class SurfaceFormat : uint8_t {
        // 0 -> 40
        UNKNOWN,
        R8G8B8A8,
    };

    enum class SurfaceDimension : uint32_t {
        TEXTURE_DEFAULT,
        TEXTURE_1D,
        TEXTURE_1D_ARRAY,
        TEXTURE_2D,
        TEXTURE_2D_ARRAY,
        TEXTURE_2DMS,
        TEXTURE_UNK,
        TEXTURE_3D,
        TEXTURE_CUBE,
        TEXTURE_CUBE_ARRAY,
        TEXTURE_BUFFER
    };

    struct SurfaceDescription {
        SurfaceType type;
        uint32_t arraySize;
        uint32_t mipLevels;
        uint32_t width;
        uint32_t height;
        uint32_t depth;
        SurfaceFormat format;
        uint32_t sampleDescIndex;
        bool unk5;
        uint8_t unk6;
        uint16_t unk7;
    };

    class SurfaceBase : public NeedleRefcountResource {
    public:
        SurfaceDescription format;
    };
}
