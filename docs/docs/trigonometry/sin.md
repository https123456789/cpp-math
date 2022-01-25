---
title: Sine
parent: Trigonometry
grand_parent: Docs
has_toc: false
namespace: cppmath::trigonometry
---

# `sin` - The Sine Function

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
		<p>Default: <code>10</code></p>
		<p>The number of times the function loops over the calculation. Higher values indicate greater accuracy than lower values. Default value is `10`.</p>
		<p>Supported types:</p>
		<ul>
			<li><code>int</code></li>
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
	// Angle in degrees
	double angleDegrees = 45.0;
	
	// Angle in radians
	double angleRadians = cppmath::degtrad(angleDegrees);

	// Calculate
	double result = cppmath::trigonometry::sin(angleRadians);

	// Print result
	std::cout << "sin(x) = " << result << std::endl;
}
```

```
$ ./examples/sin
sin(x) = 0.707089
$ 
```