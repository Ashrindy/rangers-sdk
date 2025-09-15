#pragma once

namespace app::game{
    class ObjectWorldService : 
        public hh::game::GameService,
        public hh::game::GameStepListener,
        public hh::game::ObjectWorldListener
    {
    public:
        class LayerData : public hh::fnd::ReferencedObject {
        public:
            struct Data {
                bool isEnabled;
                int unk0;
                int nameHash;
                int unk1;
            };

            csl::ut::String layerName;
            ut::PriorityList<Data, unsigned int> dataList;
        };

        csl::ut::MoveArray<void*> unk0;
        csl::ut::MoveArray<void*> unk1;
        csl::ut::StringMap<hh::fnd::Reference<LayerData>> layerDatas;
        csl::ut::MoveArray<void*> unk2;
        csl::ut::MoveArray<void*> unk3;
        hh::game::ObjectWorld* objectWorld;
        csl::fnd::Mutex mutex;
    
        virtual void* GetRuntimeTypeInfo() const override;
		virtual void OnAddedToGame() override;
		virtual void OnRemovedFromGame() override;
        virtual void UpdateCallback(hh::game::GameManager* gameManager, const hh::game::GameStepInfo& gameStepInfo) override;
        virtual void WorldChunkAddedCallback(hh::game::ObjectWorldChunk* chunk) override;
        virtual void WorldChunkRemovedCallback(hh::game::ObjectWorldChunk* chunk) override;

        void UpdateLayers();
        void SetLayerEnabled(const char* layerName, bool enabled);

        GAMESERVICE_CLASS_DECLARATION(ObjectWorldService)
    };
}
