#ifndef USEMYCLASS_H
#define USEMYCLASS_H

#include "myclass.h"

using namespace std;

class UseMyClass{

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


#endif // USEMYCLASS_H
