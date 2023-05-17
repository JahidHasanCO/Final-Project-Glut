#include<windows.h>
#include <GL/glut.h>
#include "right_corner.h"
#include "backword_cloud.h"
#include "hill.h"
#include "house.h"


float TLBC001_X = 0.0f;
float TRBC002_X = 60.0f;
float TRBC004_X = 40.0f;

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glLoadIdentity();
    glTranslatef(TLBC001_X, 0.0f, 0.0f);
    drawHalfCloud(); // top left id = "TLBC001"

    glLoadIdentity();
    glTranslatef(TRBC002_X, -3.0f, 0.0f);
    glScalef(0.9f, 0.9f, 1.0f);
    drawHalfCloud(); // top left id = "TRBC002_X"

    glLoadIdentity();
    glTranslatef(TRBC004_X, -22.0f, 0.0f);
    glScalef(1.5f, 1.2f, 1.0f);
    drawHalfCloud(); // top left id = "TRBC004_X"

    glLoadIdentity();
    drawHill();

    glLoadIdentity();
    glTranslatef(125.0f, 13.5f, 0.0f); // horizontal flip
    glScalef(-0.7f, 0.7f, 1.0f);
    drawHouse(); // middle house

    glLoadIdentity();
    drawHouse(); // right house

    glLoadIdentity();
    glTranslatef(8.0f, 24.0f, 0.0f);
    glScalef(0.5f, 0.5f, 1.0f);
    drawHouse(); // left house

    glLoadIdentity();
    drawRightCorner();
    glutSwapBuffers();
}

//This for if window size is decreasing to 750x500 then it will reshape it.
void reshape(int w, int h)
{
    if (w < 750 || h < 500)
    {
        glutReshapeWindow(750, 500);
    }
}



void timer(int value)
{
    TLBC001_X += 0.008;
    if(TLBC001_X > 100)
    {
        TLBC001_X = -20;
    }

    TRBC002_X += 0.008;
    if(TRBC002_X > 100)
    {
        TRBC002_X = -20;
    }

    TRBC003_X += 0.009;
    if(TRBC003_X > 100)
    {
        TRBC003_X = -20;
    }

    TRBC004_X += 0.006;
    if(TRBC004_X > 100)
    {
        TRBC004_X = -20;
    }
    glutPostRedisplay();

    // Set the timer for the next update
    glutTimerFunc(15, timer, 0);
}


int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(1500, 1000);
    glutCreateWindow("Final Project 3039");
    glClearColor(0.443f, 0.918f, 0.796f, 1.0f); // set sky color
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0f, 100.0f, 0.0f, 100.0f);
    glMatrixMode(GL_MODELVIEW);
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutTimerFunc(15, timer, 0);
    glutMainLoop();
    return 0;
}

