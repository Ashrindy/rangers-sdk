#pragma once

namespace Cyan{
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
        int8_t gap4C[36];
        csl::math::Vector3 spreadVector; //stores
        int8_t gap4Cb[156];
        int32_t dword11C;
        EmitParam emitParam;
        int64_t qword1A0[16];
        int64_t qword220;
        int64_t qword228;
        int64_t qword230[4];
        int64_t qword250[4];
        int64_t qword270[4];
        int64_t qword290[2];
        int64_t qword2A0[2];
        int8_t gap2B0[448];
        int64_t qword460;
        int8_t gap468[8];
        AnimCtrl* animationControl;
        float textureUvScale[2]; //unsure, when used, it's multiplied by worldScale
        int64_t qword480;
        int8_t gap488[680];
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
        void CalcInitVelocity(csl::math::Vector3& unk0, csl::math::Vector3& unk1, csl::math::Vector3& unk2);
        static void CalcSphericalVector(csl::math::Vector3* direction, Cyan::System::Random* random);

        virtual void Process(float unk);
        virtual void Update(float unk);
        virtual void PrepareRender(Graphics::Renderer* renderer, void* effectObj) {} //Graphics::EffectObject* effectObj
        virtual void UnkFunc1() {}
        virtual int GetHistoricalStripeBufferSize() const;
        virtual ~Element();
        virtual int UnkFunc2() { return 0; }

        Element(Emitter* emitter, const Resource::ElementParam* element);
    };
}
