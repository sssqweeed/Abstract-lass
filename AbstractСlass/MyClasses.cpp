#include "MyClasses.h"
#include <iostream>

Entity::Entity(std::string _name, int _age): name(_name), age(_age) {  }


Dog::Dog(std::string _name, int _age): Entity(_name, _age) {  }

Cat::Cat(std::string _name, int _age): Entity(_name, _age) {  }

void Dog::saySomething(){
    std::cout << "Hi, I'm " << name << ". Woof!" << std::endl;
}

void Cat::saySomething(){
    std::cout << "Hi, I'm " << name << ". Meow!" << std::endl;
}

void EntityArray::print(Entity* array, int size){
    for(int i = 0; i < size; i++){
        array[i].saySomething();
    }
}
