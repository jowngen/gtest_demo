#ifndef USEMYCALSS_TEST_H
#define USEMYCALSS_TEST_H

using namespace std;

class MyClass {
public:
    virtual int add(int a, int b) = 0;
    virtual int plus(int a, int b) = 0;
};

class UseMyClass {

public:
    int useAddAndPlus(int a, int b)    {
        return myclass->add(a, b) + myclass->plus(a, b);
    }

    void set(MyClass* m)    {
        myclass = m;
    }

private:
    MyClass* myclass;
};


#endif // USEMYCALSS_TEST_H
