//
// Created by 孟伸 on 2019-07-15.
//

#ifndef CONCURRENCY_TESTCLASS_H
#define CONCURRENCY_TESTCLASS_H

#include "string"
#include "iostream"

class TestClass {

    friend void testExtraFunc(TestClass testClass);

public:
    TestClass(int age, std::string name);

    void print();

    int getAge() const;

    void setAge(int age);

    const std::string &getName() const;

    void setName(const std::string &name);

private:
    int age;
    std::string name;

};

void testExtraFunc(TestClass testClass);

#endif //CONCURRENCY_TESTCLASS_H
