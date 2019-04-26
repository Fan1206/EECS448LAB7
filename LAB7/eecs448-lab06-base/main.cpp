/**
*	@Fan Ye
*	@4/26/2019 
*	@file main.cpp
*	@brief driver for LinkedList demo
*/
#include <iostream>
#include "LinkedListOfInts.h"
#include "test.h"

int main(int argc, char** argv)
{
	//Example of declaring a LinkedListOfInts
	LinkedListOfInts testableList;

	//You won't do all the tests in main; that's what your Test class will be for
	//Example:
	test myTester;

	std::cout << "Running...\n";
	myTester.runTests();
	std::cout << "And we're done.\nGoodbye.\n";
	
	return (0);

}

