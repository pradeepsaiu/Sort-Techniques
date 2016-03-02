all: exchange quick sort main merge selection run clean

#making object file for each -c representing not to link it.
exchange: exchange.h
	g++ exchange.cpp -o exchange_out.o -c

quick: quick.h
	g++ quick.cpp -o quick_out.o -c

merge: merge.h
	g++ merge.cpp -o merge_out.o -c

selection: Insertion.h
	g++ Insertion.cpp -o Insertion_out.o -c

sort: sort.h
	g++ sort.cpp -o sort_out.o -c

main:
	g++ main.cpp -o main_out.o -c

run: exchange_out.o sort_out.o main_out.o quick_out.o merge_out.o Insertion_out.o
	g++ -o out exchange_out.o sort_out.o quick_out.o merge_out.o Insertion_out.o main_out.o
	./out

clean:
	rm *.o out
