#pragma once

class cCar;

// Car performance mod
class iCarMod
{
public:
	iCarMod(int anMaxSpeedMod = 0, int anAccelMod = 0, int anHandlingMod = 0)
		: mnMaxSpeedMod(anMaxSpeedMod), mnAccelMod(anAccelMod), mnHandlingMod(anHandlingMod){}
	
	///
	virtual void OnAttach(cCar &aCar)
	{
		aCar.AddMaxSpeed(mnMaxSpeedMod);
		aCar.AddAccel(mnAccelMod);
		aCar.AddHandling(mnHandlingMod);
	};
	
	///
	virtual void OnDetach(cCar &aCar)
	{
		aCar.AddMaxSpeed(-mnMaxSpeedMod);
		aCar.AddAccel(-mnAccelMod);
		aCar.AddHandling(-mnHandlingMod);
	};
private:
	int mnMaxSpeedMod{0};
	int mnAccelMod{0};
	int mnHandlingMod{0};
};

class cCarBrakes : public iCarMod
{
public:
	cCarBrakes(int anHandlingMod) : iCarMod(0, 0, anHandlingMod){}
};

class cCarTransmission : public iCarMod
{
public:
	cCarTransmission(int anMaxSpeedMod, int anAccelMod)
		: iCarMod(anMaxSpeedMod, anAccelMod){}
};

class cCarSuspension : public iCarMod
{
public:
	cCarSuspension(int anMaxSpeedMod, int anAccelMod, int anHandlingMod)
		: iCarMod(anMaxSpeedMod, anAccelMod, anHandlingMod){}
};

class cCarNitrous : public iCarMod
{
public:
	cCarNitrous(int anMaxSpeedMod, int anAccelMod)
		: iCarMod(anMaxSpeedMod, anAccelMod){}
};

class cCarTurbo : public iCarMod
{
public:
	cCarTurbo(int anMaxSpeedMod, int anAccelMod)
		: iCarMod(anMaxSpeedMod, anAccelMod){}
};

class cCarTires : public iCarMod
{
public:
	cCarTires(int anMaxSpeedMod, int anAccelMod, int anHandlingMod)
		: iCarMod(anMaxSpeedMod, anAccelMod, anHandlingMod){}
};

class cCarChassis
{
public:
	void SetBrakes(cCarBrakes *apBrakes){mpBrakes = apBrakes;}
	cCarBrakes *GetBrakes() const {return mpBrakes;}
	
	void SetTransmission(cCarTransmission *apTransmission){mpTransmission = apTransmission;}
	cCarTransmission *GetTransmission() const {return mpTransmission;}
	
	void SetSuspension(cCarSuspension *apSuspension){mpSuspension = apSuspension;}
	cCarSuspension *GetSuspension() const {return mpSuspension;}
private:
	cCarBrakes *mpBrakes{nullptr};
	cCarTransmission *mpTransmission{nullptr};
	cCarSuspension *mpSuspension{nullptr};
};