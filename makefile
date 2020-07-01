main : Main.o PersonDao.o Person.o
	g++ -std=c++11 Main.o PersonDao.o Person.o -lgtest -lgtest_main -pthread -o main

MainBeforeMock.o : Main.cpp Person.hpp PersonDao.hpp
	g++ -std=c++11 -c Main.cpp
	
PersonDao.o : PersonDao.cpp PersonDao.hpp
	g++ -std=c++11 -c PersonDao.cpp

Person.o : Person.cpp Person.hpp PersonDao.hpp
	g++ -std=c++11 -c Person.cpp

clean :
	rm main Main.o PersonDao.o Person.o

