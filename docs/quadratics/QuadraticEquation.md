---
title: Quadratic Equation
permalink: quadratics/QuadraticEquation
namespace: cppmath::quadratics
---
# QuadraticEquation

Namespace: `{{ page.namespace }}`

Type: `class`

## Properties

### a

Type: `int`

### b

Type: `int`

### c

Type: `int`

### h

Type: `int`

### k

Type: `int`

### aos

Type: `double`

### form

Type: `int`

### vertex

Type: `int array[2]`

## Methods

### print

Return type: `void`

Arguments: `void`

Prints the function in its current form (eg. if in standard form, `f(x)=1x²+0x+-0`).

### toVertexForm

Return type: `void`

Arguments: `void`

Converts object to vertex form.

### toStandardForm

Return type: `void`

Arguments: `void`

Converts object to standard form.

### getAOS

Return type: `double`

Arguments: `void`

Returns the function's axis of symmetry as a double.

### moveUp

Return type: `void`

Arguments:

- amount
 Type: `int`

Moves the function up by the specified amount.

### moveDown

Return type: `void`

Arguments:

- amount
 Type: `int`

Moves the function down by the specified amount.

### moveLeft

Return type: `void`

Arguments:

- amount
 Type: `int`

Moves the function left by the specified amount.

### moveRight

Return type: `void`

Arguments:

- amount
 Type: `int`

Moves the function right by the specified amount.