#pragma once
class IProgress
{
public:
	IProgress();
	virtual ~IProgress();
	virtual void DoProgress(float value) = 0;
};

