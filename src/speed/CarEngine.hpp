#pragma once

#include <string>

class cCarEngine
{
public:
	cCarEngine(const std::string &asName);
	
	const std::string &GetName() const;
private:
	std::string msName{""}; ///< For sound
};