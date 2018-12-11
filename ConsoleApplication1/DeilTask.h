#pragma once
#include "IProgress.h"

class DeilTask
{
public:
	DeilTask(IProgress *iprogress);
	~DeilTask();

private:
	IProgress *m_iprogress;

public:
	void Run();
	
protected:
	virtual void onProcess(float value);
};

