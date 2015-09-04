// Win32Project1.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "cherry.h"
#include "resource.h"


// This is an example of an exported function.
CHERRY_API char* GetCherries(void)
{
	HMODULE hMod = ::GetModuleHandle(L"cherry.dll");
	HRSRC hRes = ::FindResource(hMod, MAKEINTRESOURCE(IDR_CHERRIES_TXT), RT_RCDATA);
	HGLOBAL hCherriesTxt = ::LoadResource(hMod, hRes);
	return static_cast<char*>(::LockResource(hRes));
}
