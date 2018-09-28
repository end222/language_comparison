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

Results are expressed in seconds

| N  | C++ (gcc)  | C++ (clang) | Ruby        | Python       |
| --:|:---------- |:----------- | -----------:| ------------:|
|  8 | 0.00294144 | 0.00283669  |  0.01851539 |   0.02894401 |
|  9 | 0.0119971  | 0.0110151   |  0.08097703 |   0.12943959 |
| 10 | 0.0315497  | 0.0323756   |  0.31030105 |   0.57013511 |
| 11 | 0.164439   | 0.137745    |  1.60538869 |   3.14281940 |
| 12 | 1.1833     | 1.12943     |  9.68554779 |  19.45824456 |
| 13 | 7.08773    | 7.07739     | 62.16467006 | 120.85961651 |
