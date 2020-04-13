#ifndef DEMOTEST_H
#define DEMOTEST_H

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <gmock/gmock-matchers.h>
#include "gtest/gtest-printers.h"

#include "../APP/demo.h"
#include "../APP/usemyclass.h"
#include "../APP/biz.h"


using namespace testing;

//TEST(Demo, Add)
//{
//    EXPECT_EQ(1, 1);
//    ASSERT_THAT(0, Eq(0));
//}


class MockMyClass : public MyClass {

public:
    MOCK_METHOD2(add, int(int a, int b));
    MOCK_METHOD2(plus, int(int a, int b));

};


class TestUser : public User {
public:
    MOCK_METHOD2(Login, bool(const std::string&, const std::string&));
    MOCK_METHOD1(Pay, bool(int));
    MOCK_METHOD0(Online, bool());
};


#endif // DEMOTEST_H
