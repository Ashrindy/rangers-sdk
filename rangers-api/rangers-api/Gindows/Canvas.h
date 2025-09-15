#pragma once

namespace gindows{
    class Canvas{
    public:
        void* font;
        void* graphics;
        csl::math::Vector2 displayLocation;
        csl::math::Vector2 displayLocation1;
        int64_t qword28;
        void* backColor;
        void* foreColor;
        int64_t qword40;
        int64_t qword48;
        int dword50;
        int dword54;
        int dword58;
        int dword5C;
        char gap[160];

        Canvas();
    };
}
