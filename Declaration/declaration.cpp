#include <iostream>
class ClassB;
class ClassA
{
private:
    int dataA;
public:
    ClassA(int val) : dataA(val) {}
    friend void sum_of_data(ClassA objA, ClassB objB);
};
class ClassB
{
private:
    int dataB;
public:
    ClassB(int val) : dataB(val) {}
    friend void sum_of_data(ClassA objA, ClassB objB);
};
void sum_of_data(ClassA objA, ClassB objB)
{
    int sum = objA.dataA + objB.dataB;
    std::cout << "The sum of private data from ClassA and ClassB is: " << sum << std::endl;
}
int main()
{
    ClassA a(10);
    ClassB b(20);
    sum_of_data(a, b);
    return 0;
}
