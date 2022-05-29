#include <cstdlib>
#include <cstdio>

#include "engine/Engine.hpp"

int AppMain(int argc, char **argv)
{
	printf("I Need Speed!\n");
	
	auto pEngine{std::make_unique<cEngine>()};
	
	pEngine->Init();
	
	getchar();
	
	return EXIT_SUCCESS;
};

int main(int argc, char **argv)
{
	return AppMain(argc, argv);
};