#pragma 

namespace Cyan {
    unsigned short ConvertToHalfFloat(float value);

    template<typename T>
    class MemObject {
    public:
        T* object;
    };
}
