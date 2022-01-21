---
title: Pow
parent: Docs
nav_order: 2
---
# `pow` - The Power Function

Stable
{: .label .label-green}

Calculates the power of the given base to the given exponent.

## Parameters

<ul>
	<li>
		<h3>base</h3>
		<p>Base value that the exponent is to be applied to.</p>
		<p>Supported types:</p>
		<ul>
			<li><code>double</code></li>
			<li><code>int</code></li>
		</ul>
	</li>
	<li>
		<h3>exponent</h3>
		<p>Exponent that the base is to be raised by.</p>
		<p>Supported types:</p>
		<ul>
			<li><code>int</code></li>
		</ul>
	</li>
</ul>

## Return Value

Types:

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