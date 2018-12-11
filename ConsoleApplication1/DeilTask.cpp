#include "stdafx.h"
#include "DeilTask.h"
#include <windows.h>

DeilTask::DeilTask(IProgress * iprogress)
{
	m_iprogress = iprogress;
}

DeilTask::~DeilTask()
{
}

void DeilTask::Run()
{
	for (int i = 0; i < 100; i++) {
		Sleep(100);
		onProcess(i);
	}
}

void DeilTask::onProcess(float value)
{
	m_iprogress->DoProgress(value);
}
