#include <gtest/gtest.h>

int main(int argc, char *argv[]) {
  std::cout<<"test start...."<<std::endl;
  testing::InitGoogleTest(&argc, argv);
  std::cout<<"test end...."<<std::endl;
  return RUN_ALL_TESTS();
}