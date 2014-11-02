test: libdy obj.o mainfn libdy2
	g++ -g -Wall -c fun.cpp -o fun.o
	g++ -g -Wall -c main.cpp #-DDY_LOAD
	g++ -g -Wall -o test main.o obj.o fun.o -ldl mfun.o -L. -ldy -ldy2

libdy: obj mainfn
	g++ -Wall -fPIC -c fun.cpp -DV2 -o fun-dy.o
	g++ -Wall -fPIC -shared -o libdy.so dy.cpp -g obj.o fun-dy.o -L. -lmfun

libdy2: 
	g++ -Wall -fPIC -c fun.cpp -DV3 -o fun-dy2.o
	g++ -Wall -fPIC -shared -o libdy2.so dy2.cpp -g fun-dy2.o

mainfn:
	g++ -c -Wall -fPIC -g mfun.cpp
	g++ -Wall -fPIC -shared -o libmfun.so mfun.o 

obj: 
	g++ -c -Wall -fPIC -g obj.cpp -DDF

clean: 
	rm -f *.o test *.so* *.a


