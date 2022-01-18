echo "Building..."
mkdir -p build
echo "Created build."
cat src/*.hpp > build/cppmath.hpp
echo "Created build/cppmath.hpp"
echo "Building tests..."
clang++ -o tests/quadratics tests/quadratics.cpp -I build
echo "Built tests/quadratics"
clang++ -o tests/basic tests/basic.cpp -I build
echo "Built tests/basic"