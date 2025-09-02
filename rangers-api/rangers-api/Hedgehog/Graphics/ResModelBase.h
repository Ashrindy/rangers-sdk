#pragma once

namespace hh::gfx {
    class ResModelBase : public fnd::ManagedResource {
    public:
        csl::ut::MoveArray<void*> unk101;

        ResModelBase();

        virtual uint32_t GetNodeCount() = 0;
        virtual csl::ut::MoveArray<csl::math::Matrix44> GetNodeMatrices() = 0;
        virtual int64_t GetParentNodeIndex(unsigned int nodeIndex) = 0;
        virtual const char* GetNodeName(unsigned int nodeIndex) = 0;
        virtual int32_t GetLODCount() = 0;
    };
}
