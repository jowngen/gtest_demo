#include "demoTest.h"
#include "test_f.h"

test_f::test_f()
{

}

class JTestFixture : public testing :: Test {

protected:
    static void SetUpTestCase();
    static void TearDownTestCase();

    virtual void SetUp();
    virtual void TearDown();

    std::vector<int> m_vecData;
};

void JTestFixture ::SetUpTestCase() {
//    LOG(INFO) << "Start SetUpTestCase";
}

void JTestFixture ::TearDownTestCase() {
//    LOG(INFO) << "Start TearDownTestCase";
}

void JTestFixture ::SetUp() {
//    LOG(INFO) << "Start SetUp";
}

void JTestFixture ::TearDown() {
//    LOG(INFO) << "Start TearDown";
}

TEST_F(JTestFixture, TestName) {
//    LOG(INFO) << "Start Test";
    EXPECT_EQ(0, m_vecData.size()) << "m_vecData.size error";
}

//TEST_F(JTestFixture, TestName1) {
////    LOG(INFO) << "Start Test";
//    EXPECT_EQ(1, m_vecData.size()) << "m_vecData.size error";
//}

