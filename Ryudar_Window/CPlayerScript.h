#pragma once
#include "../Ryudar_SOURCE/CScript.h"

namespace Ryu
{
	class CPlayerScript : public CScript
	{
	public:
		CPlayerScript();
		~CPlayerScript();

	public:
		void		Initialize()		override;
		void		Update()			override;
		void		LateUpdate()		override;
		void		Render(HDC _hdc)	override;
	};
}

