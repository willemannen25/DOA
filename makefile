output: main.cpp btree.cpp btree.h finder.h
	g++ -std=c++14 main.cpp -o output

clean:
	rm *.o output