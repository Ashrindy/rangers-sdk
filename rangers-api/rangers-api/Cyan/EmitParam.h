#pragma once

namespace Cyan{
    struct EmitParam {
        csl::math::Matrix44 emissionMatrix;
        csl::math::Vector3 emissionPosition;
        csl::math::Vector3 shapeVector;
        csl::math::Vector3 direction;
        csl::math::Vector3 direction1;
    };
}
