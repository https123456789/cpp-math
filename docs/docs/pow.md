---
title: Pow
parent: Docs
nav_order: 2
---
# Pow - The Power Function

Stable
{: .label .label-green}

Calculates the power of the given base to the given exponent.

## Parameters

- ### base

 Base value that the exponent is to be applied to.
 
 Supported types:
  - `int`
  - `double`

- ### exponent

 Exponent that is to be applied to the base.
 
 Supported types:
  - `int`

## Return Value

Supported types:

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