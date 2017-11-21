all:
	g++ hello-world.cpp -o hello-world  -lglut -lGLEW

clean:
	rm hello-world