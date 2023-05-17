#include<windows.h>
#include <GL/glut.h>

void drawHouse();

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    drawHouse();
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

void drawHouse()
{
    //right home draw start ---------------------->

    glBegin(GL_TRIANGLES); // middle chal
    glColor3f(0.753, 0.486, 0.169);
    glVertex3f(85.3, 63.2, 0.0f);
    glVertex3f(90.8667, 73.2, 0.0f);
    glVertex3f(95.5667, 63.2, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.435, 0.251, 0.141);
    glVertex3f(85.3, 63.0, 0.0f);
    glVertex3f(85.3, 63.2, 0.0f);
    glVertex3f(95.5667, 63.2, 0.0f);
    glVertex3f(95.5667, 63.0, 0.0f);
    glEnd();

    glBegin(GL_POLYGON); // left chal
    glColor3f(0.835, 0.569, 0.243);
    glVertex3f(71.8333, 62.4, 0.0f);
    glVertex3f(77.0667, 72.9, 0.0f);
    glVertex3f(90.3333, 72.95, 0.0f);
    glVertex3f(84.4333, 62.35, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.435, 0.251, 0.141);
    glVertex3f(71.8333, 61.7, 0.0f);
    glVertex3f(71.8333, 62.4, 0.0f);
    glVertex3f(84.4333, 62.35, 0.0f);
    glVertex3f(84.4333, 61.7, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.612, 0.4, 0.11);
    glVertex3f(84.4333, 61.59, 0.0f);
    glVertex3f(84.4333, 62.35, 0.0f);
    glVertex3f(90.9333, 74.05, 0.0f);
    glVertex3f(90.9667, 73.2, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.435, 0.251, 0.141);
    glVertex3f(72.8333, 62.4, 0.0f);
    glVertex3f(75.2667, 67.45, 0.0f);
    glVertex3f(73.1, 62.35, 0.0f);


    glVertex3f(74.9, 62.4, 0.0f);
    glVertex3f(75.5333, 63.75, 0.0f);
    glVertex3f(75.1, 62.4, 0.0f);


    glVertex3f(79.8667, 62.4, 0.0f);
    glVertex3f(81.7667, 67.35, 0.0f);
    glVertex3f(80.4, 62.45, 0.0f);

    glVertex3f(80.9333, 62.4, 0.0f);
    glVertex3f(81.6, 64.0, 0.0f);
    glVertex3f(81.2, 62.4, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.612, 0.4, 0.11);
    glVertex3f(77.0667, 72.9, 0.0f);
    glVertex3f(77.1, 74.05, 0.0f);
    glVertex3f(91.0333, 74.1, 0.0f);
    glVertex3f(90.3333, 72.95, 0.0f);
    glEnd();

    // <----------------------- right home draw end
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
    glutMainLoop();
    return 0;
}

