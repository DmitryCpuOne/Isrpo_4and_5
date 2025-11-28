#include "calculator_class.hpp"

#include <gtest/gtest.h>

class CalculatorTest : public ::testing::Test {
    protected:
        Calculator calc;

        void test_plus() {
            calc = Calculator(10, 3);
            ASSERT_EQ(calc.plus(), 13);
        }

        void test_minus(){
            calc  = Calculator(11, 1);
            ASSERT_EQ(calc.minus(), 10);
        }

        void test_mult(){
            calc = Calculator(9, 5.5);
            ASSERT_DOUBLE_EQ(calc.multiply(), 49.5);
        }

        void test_divide(){
            calc = Calculator(4.5, 9);
            ASSERT_DEQ(calc.divide(), 0.5);
        }

        void test_max(){
            calc = Calculator(10, 1);
            ASSERT_EQ(calc.max(), 10);
        }

        void test_min(){
            calc = Calculator(10, 1);
            ASSERT_EQ(calc.min(), 1);
        }

};

TEST_F(CalculatorTest, Plus) {test_plus();}
TEST_F(CalculatorTest, Minus) {test_minus();}
TEST_F(CalculatorTest, Multiply) {test_mult();}
TEST_F(CalculatorTest, Divide) {test_divide();}
TEST_F(CalculatorTest, Max) {test_max();}
TEST_F(CalculatorTest, Min) {test_min();}