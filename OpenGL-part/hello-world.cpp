
// Attention: glew need to include before glut
#include <GL/glew.h>
//#include <GL/glut.h> 
#include <GL/freeglut.h>

//#include <OpenGL/OpenGL.h>
#include <iostream>


void display()
{

	return;
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGBA);
    glutInitWindowSize(512, 512);
    glutInitContextVersion(4, 3);
    glutInitContextProfile(GLUT_CORE_PROFILE);
    glutCreateWindow("lucky");

    if(glewInit())
    {
    	std::cout<<"fail to init glew."<<std::endl;
    }

    glutDisplayFunc(display);
    glutMainLoop();
    return 1;
}
