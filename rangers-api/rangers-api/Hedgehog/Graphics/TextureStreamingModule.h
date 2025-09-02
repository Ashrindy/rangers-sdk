#pragma once

namespace hh::gfx{
    class TextureStreamingModule : public fw::AppModule, public fnd::ResourceManager::ResourceListener{
    public:
        void* unk0;
        SLIST_HEADER unk1;
        SLIST_HEADER unk2;
        int unk3;
        csl::fnd::Mutex unk4;
        csl::ut::StringMap<int64_t> unk5;
        csl::ut::String mainFolderName;
        csl::ut::VariableString fileSystemName;
        fnd::NVMeFileSystem* nvmeFileSystem;
        int32_t dwordD0; //set to the return value of RenderingDevice::Shutdown
        int32_t dwordD4; //used in RenderingDevice::GetNativeDevice
        int32_t dwordD8;
        int8_t byteDC;

        virtual void AddCallback() override;
        virtual void RemoveCallback() override;

        TextureStreamingModule(csl::fnd::IAllocator* allocator);

        APPMODULE_CLASS_DECLARATION(TextureStreamingModule);
    };
}
