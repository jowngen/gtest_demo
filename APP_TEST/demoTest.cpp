#include "demoTest.h"
#include <iostream>

#define PRINTF(...)  do { testing::internal::ColoredPrintf(testing::internal::COLOR_GREEN, "[          ] "); testing::internal::ColoredPrintf(testing::internal::COLOR_YELLOW, __VA_ARGS__); } while(0)
#define TEST_COUT  TestCout()


TEST(Demo,add1) {
    ASSERT_EQ(add(1,2),3);
}

TEST(Demo,add2) {
    ASSERT_EQ(add(1,2),3);
}

TEST(Demo,add3) {
    ASSERT_EQ(add(1,3),4);
}


TEST(TestUseMyClass, useAddAndPlus) {
    UseMyClass useMyClass;
    MockMyClass mockMyClass;
    EXPECT_CALL(mockMyClass, add(1,1)).WillOnce(testing::Return(2));
    EXPECT_CALL(mockMyClass, plus(1,1)).WillOnce(testing::Return(2));
    useMyClass.set(&mockMyClass);
    EXPECT_EQ(4, useMyClass.useAddAndPlus(1, 1));
}


TEST(TestUseLogin, useLogin) {
    TestUser test_user;
    EXPECT_CALL(test_user, Online()).WillOnce(testing::Return(true));
    EXPECT_CALL(test_user, Login(_,_)).WillRepeatedly(testing::Return(false));
    EXPECT_CALL(test_user, Pay(_)).WillRepeatedly(testing::Return(true));

    Biz biz;
    biz.SetUser(&test_user);
    std::string admin_ret = biz.pay("user", "", 1);
    //第二次pay失败
//    admin_ret = biz.pay("user", "", 1);
}

TEST(TestUseLogin, adminLogin) {

    TestUser test_user;
    EXPECT_CALL(test_user, Online()).WillOnce(testing::Return(false));
    //不允许admin登陆
    EXPECT_CALL(test_user, Login("admin",_)).WillRepeatedly(testing::Return(false));

    Biz biz;
    biz.SetUser(&test_user);
    std::string admin_ret = biz.pay("admin", "", 1);

    PRINTF("Hello world \n");

    // or C++ style

    //TEST_COUT << "Hello world" << std::endl;
    //GOUT("Hello world!");
}




