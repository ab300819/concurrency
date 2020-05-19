//
// Created by mason on 2019-05-06.
//

#include "main.h"

#include <iostream>
#include <thread>

#include "TestClass.h"

void print() {
	std::cout << "Hello World" << std::endl;
}

int main() {
	int a = 10;
	int b = 10;
	int c = 0;
	c = a + b;
	std::cout << c << std::endl;
	return EXIT_SUCCESS;
}