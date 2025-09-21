#pragma once

namespace hh::needle {
    class EntryLink {
        EntryLink* prev;
        EntryLink* next;
    public:
        ~EntryLink() {
            Unlink();
        }
        void Initialize();
        void LinkNext(EntryLink* link);
        void Unlink();
    };

    class EntryTreeLink {
    public:
        EntryLink prev;
        EntryLink next;

        ~EntryTreeLink() {
            Unlink();
        }
        void Initialize();
        void Unlink();
    };
}
