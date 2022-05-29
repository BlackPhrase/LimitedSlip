#pragma once

#include <memory>

class cGraphics;
class cInput;
class cSound;

class cEngine
{
public:
	void Init();
	
	cGraphics *GetGraphics() const {return mpGraphics.get();}
	cInput *GetInput() const {return mpInput.get();}
	cSound *GetSound() const {return mpSound.get();}
private:
	std::unique_ptr<cGraphics> mpGraphics;
	std::unique_ptr<cInput> mpInput;
	std::unique_ptr<cSound> mpSound;
};