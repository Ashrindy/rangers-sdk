#pragma once

namespace hh::ui{
    class UIElementNameSearchIndex : public fnd::ReferencedObject{
    public:
        csl::ut::VariableString elementType;
        csl::ut::StringMap<fnd::Reference<UIElement>> elements;
    };

    class UIElementSearchIndex : public fnd::ReferencedObject{
    public:
        csl::ut::MoveArray<fnd::Reference<UIElementNameSearchIndex>> nameSearchIndices;
        csl::ut::StringMap<fnd::Reference<UIElementNameSearchIndex>> nameSearchIndicesByName;

        UIElement* FindElementByType(const char* typeName, const char* name);

        UIElementSearchIndex(csl::fnd::IAllocator* allocator);
    };
}
