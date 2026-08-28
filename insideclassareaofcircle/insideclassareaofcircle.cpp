#include <iostream>
#include <cmath> 
using namespace std;
class Circle1 {
private:
    float radius;
    float calculatedArea;

public:
    void getInfo() {
        cout << "Enter the radius for Circle 1: ";
        cin >> radius;
    }
    void area() 
    {
        calculatedArea = M_PI * radius * radius;
    }
    void display() {
        cout << "Circle 1 - Radius: " << radius << ", Area: " << calculatedArea << endl;
    }
};
int main() {
    Circle1 c1_object; 
    c1_object.getInfo();
    c1_object.area();
    c1_object.display();
    return 0;
}
