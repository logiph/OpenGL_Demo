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
        glVertex2i(15, 15);
        glVertex2i(30, 145);
    glEnd();

    glBegin(GL_POINTS);
        glVertex2f(50, 15);
        glVertex2f(50, 16);
        glVertex2f(50, 17);
    glEnd();

    glBegin(GL_LINE_LOOP);
        glVertex2f(100, 30);
        glVertex2f(100, 90);
        glVertex2f(160, 30);
    glEnd();


    glBegin(GL_TRIANGLE_STRIP);
        //glRecti(60, 15, 90, 30);
        glVertex2i(60, 15);
        glVertex2i(90, 15);
        glVertex2i(80, 20);
        glVertex2i(70, 50);
        glVertex2i(60, 60);
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
