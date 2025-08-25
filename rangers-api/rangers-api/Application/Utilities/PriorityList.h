#pragma once

namespace app::ut {
    template<typename P, typename T>
    class PriorityList {
    public:
        struct Elem{
            P first;
            T second;
        };

        csl::ut::MoveArray<Elem> underlying;

        virtual ~PriorityList() = default;
    };
}
