#include "demoTest.h"
#include <iostream>


int add(int a, int b) {
    return a + b;
}

//TEST(Demo,add1) {
//    ASSERT_EQ(add(1,2),3);
//}

//TEST(Demo,add2) {
//    ASSERT_EQ(add(1,2),3);
//}

TEST(Demo,add3) {
    ASSERT_EQ(add(1,3),4);
}


