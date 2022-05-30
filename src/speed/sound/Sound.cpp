#include "Sound.hpp"
#include "SoundImpl.hpp"

cSound::cSound(iSoundImpl *apImpl) : mpImpl(apImpl){}

void cSound::Init()
{
	mpImpl->Init();
};