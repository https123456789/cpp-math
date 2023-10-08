#include <initializer_list>
#include <typeinfo>
#include <vector>

#ifndef _CPP_MATH_CPP_MATH_HPP_
#define _CPP_MATH_CPP_MATH_HPP_

namespace cpp_math {

    enum Operation {
        MATHOP_ADD,
        MATHOP_SUB,
        MATHOP_MULT,
        MATHOP_DIV,
        MATHOP_NONE
    };

    template<typename T>
    class Primitive {
        public:
            Primitive(T value): value(value) {}

            T value;
    };

    class Expression;

    class ExpressionOperand {
        public:
            ExpressionOperand(Primitive<int> p);
            ExpressionOperand(Expression *e);
            ExpressionOperand(std::nullptr_t null_value);

            bool operator==(const ExpressionOperand& rhs) const;

        private:
            void *value;
            const std::type_info *stored_type;
    };

    // Expression
    // Combines primitives and other expressions together
    // EX:
    // Primitive + Primitive
    // Expression + Expression
    // Primitive + Expression
    class Expression {
        public:
            Expression(
                ExpressionOperand left,
                ExpressionOperand right,
                Operation op
            );
        
            ExpressionOperand left;
            ExpressionOperand right;
            Operation operation;
    };
    
    /*** PLACEHOLDER DEFINITION ***/
    /* There is no actual implementation for this class */
    class Polynomial {
        public:
            Polynomial(int n, std::initializer_list<int> a);
            
            int n;
            std::vector<int> a;
    };
    
}

#endif  // _CPP_MATH_CPP_MATH_HPP_
