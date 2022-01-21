---
title: Cosine
parent: Trigonometry
grand_parent: Docs
has_toc: false
namespace: cppmath::trigonometry
---

# `cos` - The Cosine Function

Unstable
{: .label .label-yellow}

Calculates the cosine of the given angle in radians.

## Parameters

- ### angle
 
 Angle in radians.

 Supported types:

  - `double`

- ### accuracy
 
 (optional)
 {: .label .label-blue}
 
 The number of times the function loops over the calculation. Higher values indicate greater accuracy than lower values. Default value is `100`.

 Supported types:

  - `int`

## Return Value

Types:

 - `double`

## Example

```cpp
#include <iostream>
#include "cppmath.hpp"

int main(int argc, char *argv[]) {
	// Angles
	double angleDegrees = 45.0;
	double angleRadians = 0.0;

	// Convert angle to radians
	angleRadians = cppmath::degtrad(angleDegrees);

	// Result variable
	double result = 0.0;

	// Calculate
	result = cppmath::trigonometry::cos(angleRadians);

	// Print result
	std::cout << "cos(45) = " << result << std::endl;
}
```

```
$ ./examples/cos
cos(45) = 0.707124
$ 
```