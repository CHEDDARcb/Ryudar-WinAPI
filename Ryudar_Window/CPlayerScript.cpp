#include "CPlayerScript.h"
#include "CInputManager.h"
#include "CTransform.h"
#include "CTimeManager.h"
#include "CGameObject.h"

namespace Ryu
{
	CPlayerScript::CPlayerScript()
	{
	}
	CPlayerScript::~CPlayerScript()
	{
	}
	void CPlayerScript::Initialize()
	{
	}
	void CPlayerScript::Update()
	{
		if (CInputManager::Get_KeyPressed(ecKeyCode::Right))
		{
			CTransform* tr = Get_Owner()->Get_Component<CTransform>();
			Vector2 pos = tr->Get_Position();
			pos.x += 100.0f * CTimeManager::Get_DeltaTime();
			tr->Set_Position(pos);
		}
	}
	void CPlayerScript::LateUpdate()
	{
	}
	void CPlayerScript::Render(HDC _hdc)
	{
	}
}