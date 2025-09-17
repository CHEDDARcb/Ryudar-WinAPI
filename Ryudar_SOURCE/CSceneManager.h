#pragma once

#include "CScene.h"

namespace Ryu
{
	class CSceneManager
	{
	public:
		/*씬 생성*/
		// 생성과 초기화를 한다.
		template<typename T>
		static CScene*		CreateScene(const std::wstring& _name)
		{
			T* scene = new T();
			scene->Set_Name(_name);
			m_pActiveScene = scene;
			scene->Initialize();

			m_Scenes.insert(std::make_pair(_name, scene));

			return scene;
		}
		
		/*씬 로드*/
		// 로드하는 씬을 ActiveScene으로 설정.
		// 기존 ActiveScene은 OnExite()처리
		static CScene*		LoadScene(const std::wstring& _name);
		static CScene*		Get_ActiveScene() { return m_pActiveScene; }

	public:
		static void			Initialize();
		static void			Update();
		static void			LateUpdate();
		static void			Render(HDC _hdc);

	private:
		static std::map<std::wstring, CScene*>	m_Scenes;
		static CScene*							m_pActiveScene;
	};
}

