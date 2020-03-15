# Introduction

This is a repo which contains many useful CPP headers. Current functions or tools:

1. [Timer]()([timer.h](./include/timer.h))
2. [Color]()([color.h](./include/color.h))

## Timer

A simple utility class helps track the run time of functions or whole program.

``` C++
timer Timer(std::cout, "message") //Initialize an instance
Timer.span() //Compute the time from the initialization to current
```

<html>
<head>
  <link rel="stylesheet" type="text/css" href="/asciinema-player.css" />
</head>
<body>
  <asciinema-player src="/310303.cast" cols="120" rows="30"></asciinema-player>
  ...
  <script src="/asciinema-player.js"></script>
</body>
</html>

Empty string is the default value of the second argument.