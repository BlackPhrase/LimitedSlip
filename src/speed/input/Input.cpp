#include "Input.hpp"
#include "InputImpl.hpp"

cInput::cInput(iInputImpl *apImpl) : mpImpl(apImpl){}

void cInput::Init()
{
	mpImpl->Init();
};