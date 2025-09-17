#pragma once

#include "CEntity.h"
#include "CGameObject.h"
#include "CLayer.h"

namespace Ryu
{
	class CScene : public CEntity
	{
	public:
		CScene();
		virtual ~CScene();

	public:
		virtual void			Initialize();
		virtual void			Update();
		virtual void			LateUpdate();
		virtual void			Render(HDC _hdc);
		 
	public:
		virtual void			OnEnter();
		virtual void			OnExit();

	public:
		void					Add_GameObject(CGameObject* _gameObj, const enums::ecLayerType _layerType);

	public:
		CLayer*					Get_Layer(const enums::ecLayerType _LayerType) { return m_Layers[(UINT)_LayerType]; }

	private:
		/*레이어 할당*/
		//
		void					Create_Layers();

	private:
		/*각 씬 별로 레이어를 가지고 있음.*/
		std::vector<CLayer*>	m_Layers;
	};
}

