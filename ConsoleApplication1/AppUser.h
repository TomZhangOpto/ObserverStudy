#pragma once
#include "IProgress.h"

class AppUser : public IProgress
{
public:
	AppUser();
	~AppUser();

public:
	void StartWork();

	virtual void DoProgress(float value);
};

