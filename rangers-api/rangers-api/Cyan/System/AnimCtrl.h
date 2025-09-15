#pragma once

namespace Cyan {
    class AnimCtrl {
        struct CurveStatus {

        };

        static AnimCtrl* Create(
            AnimCtrl** memory, 
            void** animParam, //Cyan::Resource::PtrData<Cyan::AnimationParam>&
            unsigned int unk0,
            float unk1,
            const void* colorSet, //Cyan::ColorRandomSet*
            int type //Cyan::CreateParam::RandomSetType
        );

        void Update(float time);
        unsigned int GetValue(int count) const;
        unsigned int GetValues(float* values, int count) const;
        float GetKeyValue(const CurveStatus* curveStatus, int key);
    };
}
