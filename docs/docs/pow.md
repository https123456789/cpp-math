---
title: Pow
parent: Docs
nav_order: 2
---
# Pow - The Power Function

Calculates the power of the given base to the given exponent.

## Parameters

- ### base
 
 Supported Types:
  - `int`
  - `double`

- ### exponent
 
 Supported Types:
  - `int`

## Return Value

Supported Types:

- `int`

## Example

```cpp
#include "cppmath.hpp"
#include <iostream>

int main(int argc, char *argv[]) {
	int base = 5;
	int exponent = 2;
	int result = cppmath::pow(base, exponent);
	std::cout << result << std::endl;
	return 0;
}
```

```
$ ./pow
25
$ 
```