#include <gtest/gtest.h>

#include "test/TestCGEvaluationPath.h"
#include "test/TestCGEvaluationPathsBuilder.h"
#include "test/TestDecisionTree.h"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
