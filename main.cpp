//
// Created by mason on 2019-05-06.
//

#include <iostream>
#include <thread>
#include "main.h"
#include "TestClass.h"

void print() {
    std::cout << "Hello World" << std::endl;
}

int main() {

    TestClass testClass(12, "hello");
    testClass.print();

}