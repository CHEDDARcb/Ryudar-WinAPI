#pragma once

#include "CComponent.h"

namespace Ryu
{
	class CScript : public CComponent
	{
	public:
		CScript();
		~CScript();

	public:
		void		Initialize()		override;
		void		Update()			override;
		void		LateUpdate()		override;
		void		Render(HDC _hdc)	override;
	};
}

