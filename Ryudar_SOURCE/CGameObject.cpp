#include "CGameObject.h"
#include "CTransform.h"

namespace Ryu
{
	CGameObject::CGameObject()
	{
		m_Components.resize((UINT)enums::ecComponentType::End);

		Init_Transform();
	}

	CGameObject::~CGameObject()
	{
		Release();
	}

	void CGameObject::Initialize()
	{
		for (CComponent* comp : m_Components)
		{
			if (comp == nullptr)
				continue;

			comp->Initialize();
		}

	}

	void CGameObject::Update()
	{
		for (CComponent* comp : m_Components)
		{
			if (comp == nullptr)
				continue;

			comp->Update();
		}
	}

	void CGameObject::LateUpdate()
	{
		for (CComponent* comp : m_Components)
		{
			if (comp == nullptr)
				continue;

			comp->LateUpdate();
		}
	}

	void CGameObject::Render(HDC _hdc)
	{
		for (CComponent* comp : m_Components)
		{
			if (comp == nullptr)
				continue;

			comp->Render(_hdc);
		}
	}

	void CGameObject::Release()
	{
		for (CComponent* comp : m_Components)
		{
			delete comp;
			comp = nullptr;
		}

		m_Components.clear();
	}

	void CGameObject::Init_Transform()
	{
		CTransform* transform = CGameObject::AddComponent<CTransform>();
		transform->Set_Name(L"TR");
	}
}
