#pragma once
#include <ucsl/resources/cemt/v100000.h>

namespace Cyan::Resource {
    UCSL_NEWTYPE_STRUCT_SIMPLE(ElementParam, ucsl::resources::cemt::v100000::ElementParam);
    UCSL_NEWTYPE_STRUCT_SIMPLE(EmitterParam, ucsl::resources::cemt::v100000::EmitterParam);
    UCSL_NEWTYPE_STRUCT_SIMPLE(EffectParam, ucsl::resources::cemt::v100000::EffectParam);
    UCSL_NEWTYPE_STRUCT_SIMPLE(ModifierParam, ucsl::resources::cemt::v100000::ModifierParam);

    class Effect;
    class Model;
    class NodeAnim;
    class Shader;
    class ComputeShader;
    class Skeleton;

    template<typename T>
    class ResObject {
        char name[128];
        unsigned int unk1;
        unsigned int unk2;
        uint64_t unk3;
    };
}
