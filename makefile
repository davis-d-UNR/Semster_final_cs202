final: main.o menu1.o wav.o echos.o gainadjustment.o normalization.o
	g++ -std=c++11 -o final main.o menu1.o wav.o echos.o gainadjustment.o normalization.o

main.o: main.cpp 
	g++ -std=c++11 -c main.cpp

menu1.o: menu1.cpp menu1.h main.cpp
	g++ -std=c++11 -c menu1.cpp

wav.o: wav.cpp wav.h
	g++ -std=c++11 -c wav.cpp wav.h


echos.o: echos.cpp echos.h
	g++ -std=c++11 -c echos.cpp echos.h

gainadjustment.o: gainadjustment.cpp gainadjustment.h
	g++ -std=c++11 -c gainadjustment.cpp gainadjustment.h

normalization.o: normalization.cpp normalization.h
	g++ -std=c++11 -c normalization.cpp normalization.h

clean: 
	rm *.o
	rm *.gch