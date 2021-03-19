#include <string>

class Entity{
protected:
    Entity(std::string _name, int _age);
public:
    std::string name;
    int age;
    
    virtual void saySomething() = 0;
    
};

class Dog : public Entity{
public:
    Dog(std::string _name, int _age);
    virtual void saySomething();
};

class Cat : public Entity{
public:
    Cat(std::string _name, int _age);
    virtual void saySomething();
};

class EntityArray{
public:
    static void print(Entity* array, int size);
};
