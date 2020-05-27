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
	std::cout << "name:" + this->name + ";age:" + std::to_string(this->age)
			  << std::endl;
}

void testExtraFunc(TestClass testClass) {
	std::cout << "name:" + testClass.name +
					 ";age:" + std::to_string(testClass.age)
			  << std::endl;
}

int TestClass::getAge() const {
	return age;
}

void TestClass::setAge(int age) {
	TestClass::age = age;
}

const std::string &TestClass::getName() const {
	return name;
}

void TestClass::setName(const std::string &name) {
	TestClass::name = name;
}
