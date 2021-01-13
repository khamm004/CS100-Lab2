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

TEST(EchoTest, FirstName) {
    char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "Kathryn";
    EXPECT_EQ("Kathryn", echo(2,test_val));
}

TEST(EchoTest, LastName) {
    char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "Hammar";
    EXPECT_EQ("Hammar", echo(2,test_val));
}

TEST(EchoTest, studentID) {
    char* test_val[10]; test_val[0] = "./c-echo"; test_val[1] = "8"; test_val[2] = "6"; 
    test_val[3] = "2"; test_val[4] = "0"; test_val[5] = "3"; test_val[6] = "0"; test_val[7] = "2";
    test_val[8] = "4"; test_val[9] = "2"; 
    EXPECT_EQ("8 6 2 0 3 0 2 4 2", echo(10,test_val));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
