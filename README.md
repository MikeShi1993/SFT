# Introduction

This is a repo which contains many useful CPP headers. Current functions or tools:

1. [Timer](#timer)([timer.h](./include/timer.h))
2. [Colorizing text in console](#colorizing-text-in-console)([color.h](./include/color.h))

## Timer

A simple utility class helps track the run time of functions or whole program.

![demo](./assets/demo.gif)

``` C++
timer Timer(std::cout, "message") //Initialize an instance
Timer.span() //Compute the time from the initialization to current
```

Empty string is the default value of the second argument.

## Colorizing text in console