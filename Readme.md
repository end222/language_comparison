# Performance comparison in different programming languages
In this repo I will include a comparison between some of the better known programming languages judging them in terms of performance when solving the N-Queens problem by using a backtracking algorithm.

The languages used in this test are:
* C++ ("g++ -march=native -O2")
* C++ ("clang++ -march=native -O2")
* Ruby (default ruby interpreter)
* Python (default python interpreter)

The machine where the test where executed has an i7-4500U and 8GBs of RAM.

The test has been executed with different values of N (from 8 to 12).

# Results

| N  | C++ (gcc)  | c++ (clang) | Ruby       | Python     |
| -- | ---------- | ----------- | ---------- | ---------- |
|  8 | 0.00294144 | 0.00283669  | 0.01851539 | 0.02894401 |
|  9 | 0.0119971  | 0.0110151   | 0.08097703 | 0.12943959 |
