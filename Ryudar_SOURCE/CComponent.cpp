#include "CComponent.h"

namespace Ryu
{
	CComponent::CComponent(enums::ecComponentType _ComponentType)
		: m_pOwner(nullptr)
		, m_ComponentType(_ComponentType)
	{
	}

	CComponent::~CComponent()
	{
	}

	void CComponent::Initialize()
	{

	}

	void CComponent::Update()
	{

	}

	void CComponent::LateUpdate()
	{

	}

	void CComponent::Render(HDC _hdc)
	{

	}
}