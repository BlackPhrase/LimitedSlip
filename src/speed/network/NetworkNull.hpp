#pragma once

#include "NetworkImpl.hpp"

class cNetworkNull final : public iNetworkImpl
{
public:
	void Init() override;
};