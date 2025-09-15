#pragma once

namespace hh::needle{
    class DebugDrawJob : public RenderJob {
    public:
        DebugDrawJob();

        virtual unsigned int GetNameHash() override;
        virtual const char* GetName() override;
        virtual unsigned int GetClassSize() override;
    };
}
