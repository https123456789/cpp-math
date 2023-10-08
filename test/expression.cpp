#include <gtest/gtest.h>
#include <cpp-math/cpp-math.hpp>
#include <iostream>

using cpp_math::Expression;
using cpp_math::ExpressionOperand;
using cpp_math::Primitive;

TEST(Expression, BlankExpression) {
    Expression *e = new Expression(
        nullptr,
        nullptr,
        cpp_math::MATHOP_NONE
    );

    EXPECT_EQ(e->left, nullptr);
    EXPECT_EQ(e->right, nullptr);
    EXPECT_EQ(e->operation, cpp_math::MATHOP_NONE);

    delete e;
}

TEST(Expression, AddTwoInts) {
    Expression *e = new Expression(
        ExpressionOperand(1),
        ExpressionOperand(2),
        cpp_math::MATHOP_ADD
    );
    
    EXPECT_EQ(e->left, ExpressionOperand(1));
    EXPECT_EQ(e->right, ExpressionOperand(2));
    EXPECT_EQ(e->operation, cpp_math::MATHOP_ADD);
    
    delete e;
}

TEST(Expression, AddOneInt) {
    Expression *e = new Expression(
        ExpressionOperand(1),
        nullptr,
        cpp_math::MATHOP_ADD
    );
    
    EXPECT_EQ(e->left, ExpressionOperand(1));
    EXPECT_EQ(e->right, nullptr);
    EXPECT_EQ(e->operation, cpp_math::MATHOP_ADD);
    
    delete e;
}
