#include <stdexcept>
#include <typeinfo>
#include <cpp-math/cpp-math.hpp>

using cpp_math::Expression;
using cpp_math::ExpressionOperand;
using cpp_math::Operation;
using cpp_math::Primitive;

Expression::Expression(
    ExpressionOperand left,
    ExpressionOperand right,
    Operation op
) : left(left),
    right(right),
    operation(op)
{ }

ExpressionOperand::ExpressionOperand(Primitive<int> p) {
    value = (void*) &p;
    stored_type = &typeid(p);
}

ExpressionOperand::ExpressionOperand(Expression *e) {
    value = (void*) e;
    stored_type = &typeid(e);
}

ExpressionOperand::ExpressionOperand(std::nullptr_t null_value) {
    if (null_value != nullptr) {
        throw std::invalid_argument("Argument must a null pointer");
    }

    value = nullptr;
    stored_type = &typeid(null_value);
}

bool ExpressionOperand::operator==(const ExpressionOperand& rhs) const {
    if (*(this->stored_type) != *(rhs.stored_type)) {
        return false;
    }

    return true;
}
