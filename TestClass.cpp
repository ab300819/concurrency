#include <utility>

//
// Created by 孟伸 on 2019-07-15.
//

#include "TestClass.h"

TestClass::TestClass(int age, std::string name) {
    this->age = age;
    this->name = std::move(name);
}

void TestClass::print() {
    std::cout << "name:" + this->name + ";age:" + std::to_string(this->age) << std::endl;
}

void testExtraFunc(TestClass testClass){

}
