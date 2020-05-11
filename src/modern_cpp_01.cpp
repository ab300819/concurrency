#include <stdio.h>

class Obj {
public:
	Obj();

	~Obj();
};

Obj::Obj() { puts("Objec()"); }

Obj::~Obj() { puts("~Obj()"); }

class shape_wrapper {
public:
	explicit shape_wrapper(Obj* ptr = nullptr) : ptr_(ptr) {}

	~shape_wrapper() { delete ptr_; }

	Obj* get() const { return ptr_; }

private:
	Obj* ptr_;
};

void foo(int n) {
	shape_wrapper shape = shape_wrapper(new Obj());
	if (n == 42) {
		throw "life, the universe and evething";
	}
}

int main() {
	try {
		foo(41);
		foo(42);
	} catch (const char* s) {
		puts(s);
	}
}
