#pragma once

class cGraphics;
class cInput;
class cSound;

class cEngine
{
public:
	cEngine(int argc, char **argv, cGraphics *apGraphics, cInput *apInput, cSound *apSound);
	
	void Init();
	
	cGraphics *GetGraphics() const {return mpGraphics;}
	cInput *GetInput() const {return mpInput;}
	cSound *GetSound() const {return mpSound;}
private:
	int mnArgCount{0};
	char **msArgValue{nullptr};
	
	cGraphics *mpGraphics{nullptr};
	cInput *mpInput{nullptr};
	cSound *mpSound{nullptr};
};