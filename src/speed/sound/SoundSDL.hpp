#pragma once

#include "SoundImpl.hpp"

class cSoundSDL : public iSoundImpl
{
public:
	void Init() override;
};