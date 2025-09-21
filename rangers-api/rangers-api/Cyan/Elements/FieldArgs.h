#pragma once

namespace Cyan::Elements{
    struct FieldArgs {
        csl::math::Vector3& force;
        Cyan::Resource::ModifierParam* param;
        float unkScale;
    };
}
