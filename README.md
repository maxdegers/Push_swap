<h1 align="center">
PUSH_SWAP
</h1>

<h4 align="center">
**Push_Swap is a challenging project at 42, designed to teach students the fundamentals of sorting algorithms and stack operations.**
</h4>
</p>

<h3 align="center">
	<a href="#about">[About]</a>
	<span> · </span>
	<a href="#index">[Index]</a>
	<span> · </span>
  	<a href="#algorithm_description">[Algorithm]</a>
	<span> · </span>
	<a href="#usage">[Usage]</a>
	<span> · </span>
  <a href="#performance">[Performance]</a>
	<span> · </span>
	<a href="#useful-links">[Useful Links]</a>
</h3>

## About
___

The Push_Swap project involves creating two programs: `push_swap` and `checker`. The `push_swap` program calculates a series of operations that sort a stack of integers using the least number of moves, while `checker` takes these operations and checks whether they successfully sort the stack.

____
## Index
___
### Project Objectives

- Implement sorting algorithms using stack data structures.
- Optimize the sequence of operations to achieve sorting with minimal moves.
- Develop a checker program to validate the sort operations from `push_swap`.

### Implemented Features

- **`push_swap`**: Outputs a list of operations to sort the stack.
- **`checker`**: Reads operations and applies them to a stack to verify sorting.
- Efficient handling of different sets of integer inputs.
- Error management for invalid inputs and arguments.

## Algorithm Description

The sorting algorithm involves using two stacks, labeled `a` and `b`. The goal is to transfer all elements from stack `a` to stack `b` in a manner that the smallest elements are pushed first, and then moved back to stack `a` in sorted order. The process involves a combination of rotation, push, and swap operations to minimize the total number of moves.

## Usage

### Compilation

Compile the programs with:

```shell
make all
```
Running Push_Swap
To sort numbers using push_swap, run:

```shell
./push_swap 4 67 3 25 90
```
Using Checker
To validate the sorting sequence with checker, use:

```shell
./push_swap 4 67 3 25 90 | ./checker 4 67 3 25 90
```

## Performance
The performance of push_swap is crucial and is evaluated based on the number of operations used to sort the stacks. The program is optimized for different ranges of input sizes, aiming for the lowest possible move count.

## Useful Links
* [Push Swap Visualizer](https://github.com/o-reo/push_swap_visualizer)
* [Push Swap Tester](https://github.com/SimonCROS/push_swap_tester)
* [Push Swap — A journey to find most efficient sorting algorithm](https://medium.com/@ayogun/push-swap-c1f5d2d41e97)

by [mbrousse](https://github.com/maxdegers).
