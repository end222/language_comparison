all: nqueens.cpp
	g++ -O2 -march=native nqueens.cpp -o nqueens_gcc
	clang++ -O2 -march=native nqueens.cpp -o nqueens_clang

clean:
	rm -rf nqueens_clang
	rm -rf nqueens_gcc
