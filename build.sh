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

clang++ -o tests/trigonometry tests/trigonometry.cpp -I build
echo "Built tests/trigonometry"

echo "Building examples..."

clang++ -o examples/radtdeg examples/radtdeg.cpp -I build
echo "Built examples/radtdeg"

clang++ -o examples/degtrad examples/degtrad.cpp -I build
echo "Built examples/degtrad"