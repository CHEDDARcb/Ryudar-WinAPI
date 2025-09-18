#pragma once

#include "CommonInclude.h"
#include "CComponent.h"
#include "CEntity.h"

namespace Ryu
{
	class CGameObject : public CEntity
	{
	public:
		CGameObject();
		~CGameObject();

	public:
		virtual void			Initialize();
		virtual void			Update();
		virtual void			LateUpdate();
		virtual void			Render(HDC _hdc);
		virtual void			Release();

	public:
		template <typename T>
		T* AddComponent()
		{
			T* pComp = new T;
			pComp->Initialize();
			pComp->Set_Owner(this);

			m_Components[(UINT)pComp->Get_ComponentType()] = pComp;

			return pComp;
		}

		template <typename T>
		T* Get_Component()
		{
			T* pComponent = nullptr;
			for (CComponent* pComp : m_Components)
			{
				pComponent = dynamic_cast<T*>(pComp);
				if (pComponent)
					break;
			}

			return pComponent;
		}

	private:
		void					Init_Transform();

	private:
		std::vector<CComponent*> m_Components;
	};
}

