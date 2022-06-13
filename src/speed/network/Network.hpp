#pragma once

struct iNetworkImpl;

class cNetwork
{
public:
	cNetwork(iNetworkImpl *apImpl);
	
	void Init();
private:
	iNetworkImpl *mpImpl{nullptr};
};