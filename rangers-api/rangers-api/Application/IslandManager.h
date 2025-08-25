#pragma once

namespace app{
    class IslandManager : 
        public hh::game::GameService,
        public hh::game::GameStepListener,
        public evt::EventPlayerListener
    {
    public:
        struct ChaosEmeraldStorage{
            heur::rfl::ObjChaosEmeraldStorageSpawner::Value color;
            csl::math::Vector3 position;
        };

        hh::fnd::ResReflectionT<heur::rfl::IslandParameter>* islandParam;
        csl::ut::MoveArray<hh::game::ObjectDataAccessor> chaosEmeraldStorages;
        csl::ut::MoveArray<hh::game::ObjectDataAccessor> portals;
        csl::ut::MoveArray<hh::game::ObjectDataAccessor> fishingPortals;
        csl::ut::MoveArray<hh::game::ObjectDataAccessor> islandNpcs;
        csl::ut::MoveArray<hh::game::ObjectDataAccessor> unk0;
        csl::ut::MoveArray<hh::game::ObjectDataAccessor> unk1;
        csl::ut::MoveArray<hh::game::ObjectDataAccessor> giantTowers;
        csl::ut::MoveArray<hh::game::ObjectDataAccessor> musicTokens;
        csl::ut::MoveArray<hh::game::ObjectDataAccessor> friendChaosEmeraldStorages;
        csl::ut::MoveArray<hh::game::ObjectDataAccessor> brokenChaosEmeraldStorages;
        csl::ut::MoveArray<hh::game::ObjectDataAccessor> ringGates;
        csl::ut::MoveArray<csl::math::Vector3> portalPositions;
        csl::ut::MoveArray<csl::math::Vector3> fishingPortalPositions;
        csl::ut::MoveArray<csl::math::Vector3> islandNpcPositions;
        csl::ut::MoveArray<ChaosEmeraldStorage> chaosEmeraldStorages1;
        csl::ut::MoveArray<int64_t> unk6;
        char unk7;
        csl::math::Vector4 unk8;
        char unk9;
        int currentIsland;
        int unk11;
        csl::ut::InplaceMoveArray<int32_t, 4> unk12; 
        hh::game::ObjectId unk13;
    
        virtual void* GetRuntimeTypeInfo() const override;
        virtual bool ProcessMessage(hh::fnd::Message& message) override;
		virtual void OnAddedToGame() override;
		virtual void OnRemovedFromGame() override;
        virtual void PreStepCallback(hh::game::GameManager* gameManager, const hh::game::GameStepInfo& gameStepInfo) override;
        virtual void OnMessage(hh::fnd::Message* msg) override;

        void Initialize();

        GAMESERVICE_CLASS_DECLARATION(IslandManager)
    };
}
