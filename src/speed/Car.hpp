#pragma once

class cCarEngine;
class cCarBodyPart;

enum class cCarBodyPart::Type : int;

class cCar
{
public:
	cCarEngine *GetEngine() const;
	//cCarBodyPart *GetSpoiler() const;
	cCarBodyPart *GetBodyPartByType(cCarBodyPart::Type aeType) const;
private:
	cCarBodyPart *mvBodyParts[cCarBodyPart::Type::SizeOf]{};
};