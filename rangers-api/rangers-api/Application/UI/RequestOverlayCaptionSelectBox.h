#pragma once

namespace app::ui {
    class RequestOverlayCaptionSelectBox : public RequestOverlayBegin {
    public:
        csl::ut::MoveArray<int64_t> qword20;
        csl::ut::String subtitleText;
        csl::ut::String subtitleSound;
        float dword70;
        csl::ut::MoveArray<csl::ut::String> options;
        int dword98;
        float dword9C;
        char wordA0;
        char wordA1;
        bool subtitleLoop;

        inline RequestOverlayCaptionSelectBox(csl::fnd::IAllocator* allocator) : 
            RequestOverlayBegin{ allocator }, 
            qword20{ allocator }, 
            subtitleText{ allocator },
            subtitleSound{ allocator },
            options{ allocator } 
        {}
        static RequestOverlayCaptionSelectBox* Create(csl::fnd::IAllocator* allocator);
    };

    class UICaptionSelectBox : public hh::game::GameObject, public hh::ui::UIListener {
    public:
        hh::fnd::Reference<RequestOverlayCaptionSelectBox> requestOverlay;
        hh::ui::LayerController* subtitleLc;
        hh::ui::LayerController* textFeedIconLc;
        hh::ui::LayerController* dialogChoiceLc;
        float dword270;
        float dword274;
        hh::snd::SoundHandle subtitleSound;
        hh::fnd::Handle<hh::game::GameObject> controlGuide;
        int dword280;
        char flags;

		virtual void AddCallback(hh::game::GameManager* gameManager) override;
        virtual void UIL_UnkFunc1() override;

        GAMEOBJECT_CLASS_DECLARATION(UICaptionSelectBox);
    };
};
