#include "c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
    EXPECT_EQ("hello world", echo(3,test_val));
}

TEST(EchoTest, EmptyString) {
    char* test_val[1]; test_val[0] = "./c-echo";
    EXPECT_EQ("", echo(1,test_val));

}

TEST(EchoTest, TestingFirstCase)
{
        char* test_val[4]; test_val[0] = "./c-echo"; test_val[1] = "Testing"; test_val[2] = "First"; test_val[3] = "Case";
        EXPECT_EQ("Testing First Case", echo(4, test_val));
}

TEST(EchoTest, TestingSecondCase)
{
        char* test_val[4]; test_val[0] = "./c-echo"; test_val[1] = "Testing"; test_val[2] = "Second"; test_val[3] = "Case";
        EXPECT_EQ("Testing Second Case", echo(4, test_val));
}

TEST(EchoTest, TestingThirdCase)
{
        char* test_val[4]; test_val[0] = "./c-echo"; test_val[1] = "Testing"; test_val[2] = "Third"; test_val[3] = "Case";
        EXPECT_EQ("Testing Third Case", echo(4, test_val));
}


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
