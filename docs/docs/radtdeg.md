---
title: Radians to Degrees
parent: Docs
has_toc: false
---

# radtdeg - The Radians to Degrees Function

Stable
{: .label .label-green}

Converts the given angle in radians in degrees.

## Parameters

- ### r

 Angle in radians that is to be converted.
 
 Supported types:

 - `double`
 - `int`

## Return Value

Supported types:

- `double`

## Example

```cpp
#include <iostream>
#include "cppmath.hpp"

int main(int argc, char *argv[]) {
	// Radian values to convert
	double doubleRadianValue = 0.890118;
	int intRadianValue = 0;

	// Conversion result variables
	double doubleDegreeValue = 0.0;
	double intDegreeValue = 0.0;
	
	// Convert values
	doubleDegreeValue = cppmath::radtdeg(doubleRadianValue);
	intDegreeValue = cppmath::radtdeg(intRadianValue);

	// Print results
	std::cout << "Double radian value: " << doubleRadianValue << std::endl;
	std::cout << "Converted to degrees: " << doubleDegreeValue << std::endl;
	std::cout << "Int radian value: " << intRadianValue << std::endl;
	std::cout << "Converted to degrees: " << intDegreeValue << std::endl;
}
```

```
$ ./examples/radtdeg
Double radian value: 0.890118
Converted to degrees: 0.015535
Int radian value: 0
Converted to degrees: 0
$ 
```