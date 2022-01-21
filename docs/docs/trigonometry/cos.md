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

<ul>
	<li>
		<h3>angle</h3>
		<p>Angle in radians.</p>
		<p>Supported types:</p>
		<ul>
			<li><code>double</code></li>
		</ul>
	</li>
	<li>
		<h3>accuracy</h3>
		<div class="label label-blue">optional</div>
		<p>Default: <code>100</code></p>
		<p>The number of times the function loops over the calculation. Higher values indicate greater accuracy than lower values. Default value is `100`.</p>
		<p>Supported types:</p>
		<ul>
			<li><code>int</code</li>
		</ul>
	</li>
</ul>

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