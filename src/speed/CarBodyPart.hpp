#pragma once

class cCarBodyPart
{
public:
	enum class Type : int
	{
		Invalid = -1,
		
		FrontBumper,
		RearBumper,
		SideSkirts,
		Hood,
		RoofScoops,
		Spoiler,
		Rims,
		ExhaustTips,
		
		SizeOf
	};
	
	cCarBodyPart(Type aeType);
private:
	Type meType{Type::Invalid};
};