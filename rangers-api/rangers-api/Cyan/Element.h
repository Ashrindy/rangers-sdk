#pragma once

namespace Cyan{
    class HistoricalStripe;

    class Element {
    public:
        int64_t qword8;
        Element* self;
        int64_t qword18;
        int64_t qword20;
        int32_t dword28;
        Emitter* emitter;
        Resource::ElementParam* element;
        float dword40;
        float dword44;
        int32_t dword48;
        int32_t dword4C;
        csl::math::Vector3 position0;
        csl::math::Vector3 position1;
        csl::math::Vector3 spreadVector; //stores
        int8_t gap4Cb[80];
        float fps;
        int8_t gap4Cbb[20];
        float directionJitter; //unsure
        int8_t gap4Cbbb[48];
        short word11C;
        char word11E; // 0x01 init children
        EmitParam emitParam;
        AnimCtrl* childrenAnim[16];
        AnimCtrl* qword220;
        AnimCtrl* qword228;
        AnimCtrl* unkColorAnim0[4];
        AnimCtrl* unkColorAnim1[4];
        AnimCtrl* unkColorAnim2[4];
        AnimCtrl* modifierAnim[5][8];
        int64_t qword290[20];
        AnimCtrl* patternAnim[4];
        AnimCtrl* animationControl;
        float textureUvScale[2]; //unsure, when used, it's multiplied by worldScale
        int64_t qword480;
        int8_t gap488[648];
        HistoricalStripe* historicalStripe;
        int relatedToUpdateLight;
        int8_t gap488b[20];
        int64_t qword730;
        int32_t dword738;
        int32_t dword73C;
        int64_t qword740;
        int64_t qword748;

        void CalcTexcoordImpl(
            float arg0,
            const Resource::TextureParam* texParam,
            void* texcoord, //Cyan::Texcoord*
            float* matrix, //Cyan::Matrix23*
            float* p1,
            float* p2,
            unsigned int flags
        );
        void CalcTexcoord(float unk);
        void InitColor(System::Random* random);
        void CalcInitVelocity(const csl::math::Vector3& accelaration, const csl::math::Vector3& velocity, const csl::math::Vector3& accelarationNormal);
        static void CalcSphericalVector(csl::math::Vector3* direction, Cyan::System::Random* random);
        MemObject<AnimCtrl> CreateAnimCtrl(
            const Resource::PtrData<Resource::AnimationParam>& animParam,
            unsigned int unk0,
            float unk1,
            const void* colorSet, //Cyan::ColorRandomSet*
            AnimCtrl::CreateParam::RandomSetType type
        );

        virtual void Process(float unk);
        virtual void Update(float unk);
        virtual void PrepareRender(Graphics::Renderer* renderer, void* effectObj) {} //Graphics::EffectObject* effectObj
        virtual void UnkFunc1() {}
        virtual int GetHistoricalStripeBufferSize() const;
        virtual ~Element();
        virtual void InitParameter() {}

        Element(Emitter* emitter, const Resource::ElementParam* element);
    };
}
