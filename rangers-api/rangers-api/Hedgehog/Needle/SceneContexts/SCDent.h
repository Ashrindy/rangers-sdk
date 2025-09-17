#pragma once

namespace hh::needle {
    class SCDent : public SceneContext {
    public:
        class Impl : public NeedleRefcountObject {
            SCDent& sceneContext;
            int64_t densityContainer;
            uint64_t qword20;
            csl::math::Vector4 qword30;
            uint64_t qword40;
            uint64_t qword48;
            uint64_t qword50;
            uint64_t qword58;
            uint64_t qword60;
            uint64_t qword68;
            csl::fnd::IAllocator* unkAllocator;
            uint32_t dword78;

        public:
            Impl(SCDent& sceneContext);
        };

        intrusive_ptr<Impl> implementation;

        SCENECONTEXT_CLASS_DECLARATION(SCDent);

        virtual void Initialize(const InitializeInfo& initializeInfo);
        virtual void UnkFunc1();
        virtual unsigned int GetNameHash();
        virtual const char* GetName();
        virtual uint64_t UnkFunc7();
        virtual DensityContainer* GetDensityContainer();
        virtual uint64_t UnkFunc9();
        virtual uint64_t UnkFunc10();
        virtual uint64_t UnkFunc11();
        virtual uint64_t UnkFunc12();
    };
}
