#pragma once

namespace Cyan::Elements{
    class Particle : public Element {
    public:
        virtual void Process(float unk) override;
        virtual void Update(float unk) override;
        virtual void PrepareRender(Graphics::Renderer* renderer, void* effectObj) override; //Graphics::EffectObject* effectObj
        virtual void UnkFunc1() override;
        virtual int GetHistoricalStripeBufferSize() const override;
        virtual int UnkFunc2() override;

        Particle(Emitter* emitter, const Resource::ElementParam* element, const EmitParam* emitParam);
    };  
}
