
<!-- omit in toc -->
# Introduction

This is a repo which contains many useful CPP headers. Current functions or tools:

- [Timer](#timer)
- [Colorizing text in console](#colorizing-text-in-console)

## Timer

A simple utility class helps track the run time of functions or whole program.

![demo](./assets/demo.gif)

``` C++
#include "timer.h"
timer Timer(std::cout, "message") //Initialize an instance
Timer.span() //Compute the time from the initialization to current
```

Empty string is the default value of the second argument.

## Colorizing text in console

This header currently support both linux and windows platform. The implementation of this file is inspired from [doctest](https://github.com/onqtam/doctest)

``` C++
#include "color.h"
std::cout << Color::Cyan << "Hello world!" << std::endl; // Set the color of text to Cyan
std::cout << Color::None; // Reset to default color
```

Supported colors are listed as below:

``` C++
Color::Red
Color::Green
Color::Blue
Color::Cyan
Color::Yellow
Color::Grey
Color::LightGrey
Color::BrightRed
Color::BrightGreen
Color::BrightWhite
Color::None // Reset the color
```
