#include "Network.hpp"
#include "NetworkImpl.hpp"

cNetwork::cNetwork(iNetworkImpl *apImpl) : mpImpl(apImpl){}

void cNetwork::Init()
{
	mpImpl->Init();
};