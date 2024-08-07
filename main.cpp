#include <iostream>
#include "Engine.h"

using namespace std;

int main()
{
	UEngine* MyEngine = new UEngine();

	MyEngine->OpenLevel();

	delete MyEngine;

	return 0;
}
