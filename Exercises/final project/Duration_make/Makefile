Time: Duration.o Dura.o test_dura.o doc.o
	g++ Duration.o Dura.o test_dura.o doc.o -o Time

Duration.o: Duration.cpp
	g++ -c Duration.cpp

Dura.o: Duration.hpp
	g++ -c Duration.hpp

test_dura.o: test_duration.cpp
	g++ -c test_duration.cpp

doc.o: doctest.h
	g++ -c doctest.h

clean:
	rm *.o Time
