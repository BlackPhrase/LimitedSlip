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
	
	void AddHeatLevel(float afValue){mfHeatLevel += afValue;}
	float GetHeatLevel() const {return mfHeatLevel;}
	
	int GetTier() const {return mnTier;}
	
	// TODO: add base max speed, accel and handling values?
	
	void AddMaxSpeed(int anValue){mnMaxSpeed += anValue;}
	int GetMaxSpeed() const {return mnMaxSpeed;}
	
	void AddAccel(int anValue){mnAccel += anValue;}
	int GetAccel() const {return mnAccel;}
	
	void AddHandling(int anValue){mnHandling += anValue;}
	int GetHandling() const {return mnHandling;}
	
private:
	cCarBodyPart *mvBodyParts[cCarBodyPart::Type::SizeOf]{};
	
	float mfHeatLevel{0.0f};
	
	int mnTier{0};
	
	int mnMaxSpeed{0};
	int mnAccel{0};
	int mnHandling{0};
};