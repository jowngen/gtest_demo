#include "demoTest.h"

#include <gtest/gtest.h>

int main(int argc, char *argv[])
{
    ::testing::InitGoogleTest(&argc, argv);

    std::cout << "admin_ret" << std::endl;
    return RUN_ALL_TESTS();
}
