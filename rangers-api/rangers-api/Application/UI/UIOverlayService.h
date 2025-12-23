#pragma once

namespace app::ui {
    class UIOverlayService : public hh::game::GameService, public hh::game::GameUpdateListener, public app::fnd::AppResourceManagerListener {
    public:
        class OverlayJob : public hh::fnd::BaseObject {
        public:
            unsigned int id;
            hh::fnd::Reference<RequestOverlayBegin> request;
            int unk0;

            inline OverlayJob(csl::fnd::IAllocator* allocator) : hh::fnd::BaseObject{ allocator } {}
        };

        csl::fnd::Mutex mutex1;
        csl::fnd::Mutex mutex2;
        uint8_t unk100;
        csl::ut::StringMap<void*> unk101;
        uint64_t lastQueuedJobId;
        uint32_t unk103;
        uint32_t unk103b;
        uint64_t unk104;
        uint32_t unk105;
        uint32_t unk106[2];
        uint16_t unk107;
        csl::ut::StringMap<void*> overlayJobs;
        csl::ut::StringMap<void*> unk109;

		virtual void* GetRuntimeTypeInfo() const override;
		virtual bool ProcessMessage(hh::fnd::Message& message) override;
		virtual void OnAddedToGame() override;
		virtual void OnRemovedFromGame() override;
		virtual void PreGameUpdateCallback(hh::game::GameManager* gameManager, const hh::fnd::SUpdateInfo& updateInfo) override;
		virtual void PostGameUpdateCallback(hh::game::GameManager* gameManager, const hh::fnd::SUpdateInfo& updateInfo) override;
        virtual void ARML_UnkFunc0(int unkParam1) override;
        virtual void ARML_UnkFunc1(int unkParam1) override;
        int QueueBeginRequest(RequestOverlayBegin* request); // returns id of the job

        GAMESERVICE_CLASS_DECLARATION(UIOverlayService);
    };
}
