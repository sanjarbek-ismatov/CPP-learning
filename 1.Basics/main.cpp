#include <iostream>
#include <cstring>
#include <string>

#define number int

void tenTimesIterator()
{
    int *p = new int[10];
    for (int i = 0; i < 10; i++)
    {
        p[i] = i;
    }
    for (int j = 0; j < 10; j++)
    {
        std::cout << p[j] << std::endl;
    }
}

void workingWithStrings(){
    // char* name = "Sanjarbek";
    // char hobby[] = "Programming";
    number age = 10;
    std::cout << age << std::endl;
}

int age = 19;

void scope(){
    int age = 25; // it is not used
    std::cout << ::age << std::endl;
}

class Person{
public:
    static char name[10];
    static int age;
};
namespace nameSpace{
    int age = 19;
}

int Person::age = 10;
char Person::name[] = "Sanjarbek";


int main()
{
    std::string name = "Sanjarbek";
    name.length();
    std::cout << name.length() << std::endl;
    return 0;
}