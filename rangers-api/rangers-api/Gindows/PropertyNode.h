#pragma once

namespace gindows{
    class PropertyNode : public Object{
    public:
        bool GetValue(const char* name, int* value);
        bool GetValue(const char* name, const char** value);
        void SetName(const char* name);
        void Add(const char* key, const char* value);
        void Add(const char* key, int value);
        void Add(const char* key, bool value);
    };
}
