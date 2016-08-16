#include <stdio.h>
#include <stdlib.h>
#include <GL/glut.h>


void init()
{
    glClearColor(0.0, 1.0, 1.0, 0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 200.0, 0.0, 150.0);

    glFlush();
}

void lineSegment()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0.0, 0.4, 0.2);

    glBegin(GL_LINES);
        glVertex2i(180, 15);
        glVertex2i(10, 145);
    glEnd();
    glFlush();
}



int main(int argc, char** argv)
{
    printf("Hello world!\n");
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowPosition(50, 50);
    glutInitWindowSize(400, 400);
    glutCreateWindow("Hello World");
    // show an window until here


    init();

    glutDisplayFunc(lineSegment);
    // call this to enter loop, avoid been end by system
    glutMainLoop();

    return 0;
}
