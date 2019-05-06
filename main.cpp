//
// Created by mason on 2019-05-06.
//

#include "main.h"
#include <iostream>
#include <thread>

void print() {
    std::cout << "Hello World" << std::endl;
}

int main() {

    std::thread t(print);
    t.join();

}