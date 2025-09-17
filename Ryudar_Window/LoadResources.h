#pragma once

#include "../Ryudar_SOURCE/CResources.h"
#include "../Ryudar_SOURCE/CTexture.h"

namespace Ryu
{
	/*각 씬의 리소스 로드*/
	// 게임 씬을 로드하기 전에 각 씬의 리소스를 한번에 로드시킨다.
	void LoadResources()
	{
	#pragma region PlayScene리소스
		//배경
		CResources::Load<graphics::CTexture>(L"Texture_PlayScene_BG", L"../KatanaZ/CloudOcean.png");
	#pragma endregion

	#pragma region TitleMenu리소스
		//배경
		CResources::Load<graphics::CTexture>(L"Texture_Title_BG", L"../KatanaZ/Texture/Title/spr_title_background.png");
	#pragma endregion

	#pragma region Stage1리소스
		//배경
		CResources::Load<graphics::CTexture>(L"Texture_Stage1_BG", L"../KatanaZ/Texture/Stage1bg.bmp");
	#pragma endregion

	#pragma region Stage2리소스
		//배경
		CResources::Load<graphics::CTexture>(L"Texture_Stage2_BG", L"../KatanaZ/Texture/Stage2bg.bmp");
	#pragma endregion

	#pragma region Stage3리소스
		//배경
		CResources::Load<graphics::CTexture>(L"Texture_Stage3_BG", L"../KatanaZ/Texture/Stage3bg.bmp");
	#pragma endregion
	}
}