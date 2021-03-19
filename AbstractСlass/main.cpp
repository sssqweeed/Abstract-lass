#include <iostream>
#include "MyClasses.h"

int main(int argc, const char * argv[]) {
    Cat cat("Li", 10);
    Dog dog("Bob", 1);
    
    cat.saySomething();
    dog.saySomething();
    
    Dog* dog_ptr = new Dog("Tit", 10);
    
    EntityArray::print(dog_ptr, 1);
    return 0;
}
