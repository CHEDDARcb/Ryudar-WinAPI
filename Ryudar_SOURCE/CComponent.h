#pragma once
#include "CEntity.h"

namespace Ryu
{
	class CGameObject;

	class CComponent : public CEntity
	{
		CComponent() = delete;

	public:
		CComponent(enums::ecComponentType _ComponentType);
		~CComponent();

	public:
		virtual void			Initialize();
		virtual void			Update();
		virtual void			LateUpdate();
		virtual void			Render(HDC _hdc);

	public:
		void					Set_Owner(CGameObject* _owner) { m_pOwner = _owner; }

	public:
		CGameObject*			Get_Owner() const { return m_pOwner;  }
		enums::ecComponentType	Get_ComponentType() const { return m_ComponentType; }

	private:
		CGameObject*		m_pOwner;
		enums::ecComponentType m_ComponentType;
	};
}