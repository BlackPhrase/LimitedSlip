#pragma once

struct iInputImpl;

class cInput
{
public:
	cInput(iInputImpl *apImpl);
	
	void Init();
private:
	iInputImpl *mpImpl{nullptr};
};