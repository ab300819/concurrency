#include <stdio.h>

class Obj {
 public:
  Obj();
  ~Obj();
};

Obj::Obj() { puts("Objec()"); }

Obj::~Obj() { puts("~Obj()"); }

void foo(int n) {
    Obj obj;
    if(n==42){
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
