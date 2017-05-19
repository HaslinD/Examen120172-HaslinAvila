Main: Main.o ObrasDA.o Literatura.o Esculturas.o DiseniosArqui.o Pinturas.o
	g++ Main.o ObrasDA.o Literatura.o Esculturas.o DiseniosArqui.o Pinturas.o -o Main	

Main.o: Main.cpp ObrasDA.h Literatura.h Esculturas.h DiseniosArqui.h Pinturas.h
	g++ -c Main.cpp

ObrasDA.o: ObrasDA.h ObrasDA.cpp
	g++ -c ObrasDA.cpp

Literatura.o: ObrasDA.h Literatura.h Literatura.cpp
	g++ -c Literatura.cpp

Esculturas.o: ObrasDA.h Esculturas.h Esculturas.cpp
	g++ -c Esculturas.cpp
	
DiseniosArqui.o: ObrasDA.h DiseniosArqui.h DiseniosArqui.cpp
	g++ -c DiseniosArqui.cpp
	
Pinturas.o: ObrasDA.h Pinturas.h Pinturas.cpp
	g++ -c Pinturas.cpp

clean:
	rm -f *.o Main

