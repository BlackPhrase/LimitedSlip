#pragma once

struct iGraphicsImpl
{
	///
	virtual void Init(const wchar_t *asWindowTitle, int anWindowWidth, int anWindowHeight, bool abFullScreen) = 0;
};