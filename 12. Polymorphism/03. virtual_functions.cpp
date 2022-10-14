#include <iostream>
using namespace std;

class BasicCar
{
public:
    virtual void start() { cout << "Basic Car Started." << endl; }
};

class AdvancedCar : public BasicCar
{
public:
    void start() { cout << "Advanced Car Started." << endl; }
};

int main()
{
    BasicCar *ptr = new AdvancedCar();
    ptr->start(); // Calling without virtual in front of Basic Car start function prints BasicCar started.
    // Calling with virtual in front of Basic Car start function prints AdvancedCar Started.
    BasicCar *ptr2 = new BasicCar();
    ptr2->start(); // To print BasicCar syntax
    return 0;
}
