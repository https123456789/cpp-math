---
title: Degrees to Radians
parent: Docs
has_toc: false
---

# degtrad - The Degrees to Radians Function

Stable
{: .label .label-green}

Converts given angle in degrees to radians.

## Parameters

- ### d

 Angle in degrees that is to be converted.
 
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
	// Degree values to convert
	double doubleDegreeValue = 47.8;
	int intDegreeValue = 51;

	// Conversion result variables
	double doubleRadianValue = 0.0;
	double intRadianValue = 0.0;
	
	// Convert values
	doubleRadianValue = cppmath::degtrad(doubleDegreeValue);
	intRadianValue = cppmath::degtrad(intDegreeValue);

	// Print results
	std::cout << "Double degree value: " << doubleDegreeValue << std::endl;
	std::cout << "Converted to radians: " << doubleRadianValue << std::endl;
	std::cout << "Int degree value: " << intDegreeValue << std::endl;
	std::cout << "Converted to radians: " << intRadianValue << std::endl;
}
```

```
$ ./examples/degtrad
Double degree value: 47.8
Converted to radians: 0.834241
Int degree value: 51
Converted to radians: 0.89009
$ 
```