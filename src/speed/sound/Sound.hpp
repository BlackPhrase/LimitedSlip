#pragma once

#include "SoundImpl.hpp"

class cSound
{
public:
	cSound(iSoundImpl *apImpl);
	
	void Init();
private:
	iSoundImpl *mpImpl{nullptr};
};