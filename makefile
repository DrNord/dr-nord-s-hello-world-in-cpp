all: hello-world-win.exe

hello-world-win.exe: main.cpp
	g++ -static -o hello-world-win.exe main.cpp
