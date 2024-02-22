#include <iostream>

class Teacher
{
public:
    virtual void print()
    {
        std::cout << "I am a teacher" << std::endl;
    }
};
class Student : public Teacher
{
public:
    void print()
    {
        std::cout << "yooo" << std::endl;
    }
};

int main()
{
    Teacher *t = new Student();
    t->print();
    delete[] t;
    return 0;
};