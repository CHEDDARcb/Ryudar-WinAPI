#pragma once

namespace Ryu::enums
{
	enum class ecComponentType
	{
		Transform,
		SpriteRenderer,
		Script,
		End
	};

	enum class ecLayerType
	{
		None,
		BackGround,
		Character,
		Player,
		Max
	};

	enum class ecResourceType
	{
		Texture,
		AudioClip,
		Prefab,
		End
	};
}