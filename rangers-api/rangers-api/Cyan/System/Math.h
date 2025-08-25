#pragma once

namespace Cyan::System::Math {
    csl::math::Matrix34 GetEulerRotationMatrix(const csl::math::Vector3& eulerAngles);
}
