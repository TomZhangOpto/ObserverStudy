#include "stdafx.h"
#include "AppUser.h"

#include "DeilTask.h"
#include <iostream>

AppUser::AppUser()
{
}


AppUser::~AppUser()
{
}

void AppUser::StartWork()
{
	DeilTask deilTask(this);
	deilTask.Run();
}

void AppUser::DoProgress(float value)
{
	std::cout << value << std::endl;
}
