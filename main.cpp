#include<windows.h>
#include <GL/glut.h>
#include "right_corner.h"
#include "backword_cloud.h"
#include "hill.h"

void drawHouse();

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
    drawHouse();
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



void drawHouse()
{
    //right home draw start ---------------------->

    glBegin(GL_POLYGON); //Left Wall start
    glColor3f(1.0, 0.984, 0.765);
    glVertex3f(74.3, 43.65, 0.0f);
    glVertex3f(74.3667, 63.7, 0.0f);
    glVertex3f(87.6, 63.7, 0.0f);
    glVertex3f(87.6, 43.65, 0.0f);
    glEnd();


    //Left window start
    glBegin(GL_POLYGON);
    glColor3f(0.157, 0.263, 0.243);
    glVertex3f(75.5667, 56.55, 0.0f);
    glVertex3f(75.5667, 58.55, 0.0f);
    glVertex3f(76.6333, 58.55, 0.0f);
    glVertex3f(76.6333, 56.55, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.157, 0.263, 0.243);
    glVertex3f(75.5667, 58.95, 0.0f);
    glVertex3f(75.5667, 60.95, 0.0f);
    glVertex3f(76.6, 60.95, 0.0f);
    glVertex3f(76.6, 58.95, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.157, 0.263, 0.243);
    glVertex3f(76.8667, 58.95, 0.0f);
    glVertex3f(76.8667, 60.95, 0.0f);
    glVertex3f(77.8333, 60.95, 0.0f);
    glVertex3f(77.8333, 58.95, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.157, 0.263, 0.243);
    glVertex3f(76.8667, 56.55, 0.0f);
    glVertex3f(76.8667, 58.55, 0.0f);
    glVertex3f(77.8333, 58.55, 0.0f);
    glVertex3f(77.8333, 56.55, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.796, 0.769, 0.463);
    glVertex3f(75.6667, 55.7, 0.0f);
    glVertex3f(75.4667, 56.05, 0.0f);
    glVertex3f(78.1333, 56.05, 0.0f);
    glVertex3f(78.3667, 55.7, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.796, 0.769, 0.463);
    glVertex3f(76.2667, 61.4, 0.0f);
    glVertex3f(76.2667, 61.4, 0.0f);
    glVertex3f(78.2667, 61.35, 0.0f);
    glVertex3f(78.1, 61.25, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.796, 0.769, 0.463);
    glVertex3f(78.1333, 56.05, 0.0f);
    glVertex3f(78.1, 61.35, 0.0f);
    glVertex3f(78.2667, 61.35, 0.0f);
    glVertex3f(78.3667, 55.7, 0.0f);
    glEnd();
    // left window end

    //Right window start
    glBegin(GL_POLYGON);
    glColor3f(0.157, 0.263, 0.243);
    glVertex3f(83.7667, 56.55, 0.0f);
    glVertex3f(83.7667, 58.55, 0.0f);
    glVertex3f(84.8333, 58.55, 0.0f);
    glVertex3f(84.8333, 56.55, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.157, 0.263, 0.243);
    glVertex3f(83.7667, 58.95, 0.0f);
    glVertex3f(83.7667, 60.95, 0.0f);
    glVertex3f(84.8333, 60.95, 0.0f);
    glVertex3f(84.8333, 58.95, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.157, 0.263, 0.243);
    glVertex3f(85.0667, 58.95, 0.0f);
    glVertex3f(85.0667, 60.95, 0.0f);
    glVertex3f(86.0667, 60.95, 0.0f);
    glVertex3f(86.0667, 58.95, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.157, 0.263, 0.243);
    glVertex3f(85.0667, 56.55, 0.0f);
    glVertex3f(85.0667, 58.55, 0.0f);
    glVertex3f(86.0667, 58.55, 0.0f);
    glVertex3f(86.0667, 56.55, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.796, 0.769, 0.463);
    glVertex3f(83.9, 55.7, 0.0f);
    glVertex3f(83.7, 56.05, 0.0f);
    glVertex3f(86.3333, 56.05, 0.0f);
    glVertex3f(86.6, 55.7, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.796, 0.769, 0.463);
    glVertex3f(84.2, 61.4, 0.0f);
    glVertex3f(84.2, 61.4, 0.0f);
    glVertex3f(86.5, 61.35, 0.0f);
    glVertex3f(86.3333, 61.25, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.796, 0.769, 0.463);
    glVertex3f(86.6, 55.7, 0.0f);
    glVertex3f(86.3333, 56.05, 0.0f);
    glVertex3f(86.3333, 61.25, 0.0f);
    glVertex3f(86.5, 61.35, 0.0f);
    glEnd();
    // Right window end
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA); // for set alpha
    glEnable(GL_BLEND);
    glBegin(GL_TRIANGLES); //Left wall shadow
    glColor4f(0.894, 0.863, 0.569, 0.2f);
    glVertex3f(74.4333, 62.85, 0.0f);
    glVertex3f(87.6, 63.7, 0.0f);
    glVertex3f(87.5667, 56.55, 0.0f);
    glEnd();


    glBegin(GL_POLYGON); //door
    glColor3f(0.157, 0.263, 0.243);
    glVertex3f(78.5333, 43.65, 0.0f);
    glVertex3f(78.5333, 53.4, 0.0f);
    glVertex3f(83.0333, 53.4, 0.0f);
    glVertex3f(83.0333, 43.65, 0.0f);
    glEnd();

    glBegin(GL_POLYGON); //door inner shadow
    glColor3f(0.004, 0.078, 0.063);
    glVertex3f(78.5333, 43.65, 0.0f);
    glVertex3f(78.5333, 53.4, 0.0f);
    glVertex3f(78.9, 52.9, 0.0f);
    glVertex3f(78.8333, 43.65, 0.0f);
    glEnd();

    glBegin(GL_POLYGON); //door inner shadow
    glColor3f(0.004, 0.078, 0.063);
    glVertex3f(78.9, 52.9, 0.0f);
    glVertex3f(78.5333, 53.4, 0.0f);
    glVertex3f(83.0333, 53.4, 0.0f);
    glVertex3f(83.0333, 53.0, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES); //door outter shadow
    glColor3f(0.784, 0.749, 0.486);
    glVertex3f(78.1667, 52.2, 0.0f);
    glVertex3f(77.9, 54.15, 0.0f);
    glVertex3f(78.1667, 53.7, 0.0f);
    glEnd();

    glBegin(GL_POLYGON); //door outter shadow
    glColor3f(0.784, 0.749, 0.486);
    glVertex3f(78.1667, 53.7, 0.0f);
    glVertex3f(77.9, 54.15, 0.0f);
    glVertex3f(83.8333, 54.15, 0.0f);
    glVertex3f(83.6333, 53.7, 0.0f);
    glEnd();

    glBegin(GL_POLYGON); //door outter shadow
    glColor3f(0.784, 0.749, 0.486);
    glVertex3f(83.43, 43.65, 0.0f);
    glVertex3f(83.43, 53.7, 0.0f);
    glVertex3f(83.8333, 54.15, 0.0f);
    glVertex3f(83.8333, 43.65, 0.0f);
    glEnd();

    /*

    glBegin(GL_POLYGON); //door outter shadow
    glColor3f(0.784, 0.749, 0.486);

    glVertex3f(78.9, 52.9, 0.0f);
    glVertex3f(78.5333, 53.4, 0.0f);
    glVertex3f(83.0333, 53.4, 0.0f);
    glVertex3f(83.0333, 53.0, 0.0f);
    glEnd();

    */
    //left wall end

    //right chal start

    glBegin(GL_TRIANGLES);
    glColor3f(0.431, 0.259, 0.145);
    glVertex3f(91.3, 62.45, 0.0f);
    glVertex3f(90.8, 73.5, 0.0f);
    glVertex3f(96.3333, 62.4, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.808, 0.608, 0.349);
    glVertex3f(90.0, 73.5, 0.0f);
    glVertex3f(90.0, 74.15, 0.0f);
    glVertex3f(91.3, 74.15, 0.0f);
    glVertex3f(91.3, 72.45, 0.0f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.808, 0.608, 0.349);
    glVertex3f(96.3, 62.35, 0.0f);
    glVertex3f(91.0, 73.0, 0.0f);
    glVertex3f(91.3, 73.0, 0.0f);
    glVertex3f(96.6, 62.4, 0.0f);
    glEnd();


    //right chal end

    //right wall start
    glBegin(GL_POLYGON);
    glColor3f(0.894, 0.863, 0.569);
    glVertex3f(87.6, 43.65, 0.0f);
    glVertex3f(87.6, 63.7, 0.0f);
    glVertex3f(94.8333, 63.7, 0.0f);
    glVertex3f(94.8333, 43.65, 0.0f);
    glEnd();

    glBegin(GL_POLYGON); // window
    glColor3f(0.157, 0.263, 0.243);
    glVertex3f(90.1667, 55.0, 0.0f);
    glVertex3f(90.1667, 57.55, 0.0f);
    glVertex3f(91.4333, 57.55, 0.0f);
    glVertex3f(91.4333, 55.0, 0.0f);
    glEnd();

    glBegin(GL_POLYGON); // window
    glColor3f(0.157, 0.263, 0.243);
    glVertex3f(90.1667, 58.0, 0.0f);
    glVertex3f(90.1667, 60.45, 0.0f);
    glVertex3f(91.4,60.45, 0.0f);
    glVertex3f(91.4,58.0, 0.0f);
    glEnd();

    glBegin(GL_POLYGON); // window
    glColor3f(0.157, 0.263, 0.243);
    glVertex3f(91.7333, 58.0, 0.0f);
    glVertex3f(91.7333, 60.45, 0.0f);
    glVertex3f(93.0333, 60.45, 0.0f);
    glVertex3f(93.0333,  58.0, 0.0f);
    glEnd();

    glBegin(GL_POLYGON); // window
    glColor3f(0.157, 0.263, 0.243);
    glVertex3f(91.7333, 55.0, 0.0f);
    glVertex3f(91.7333, 57.55, 0.0f);
    glVertex3f(93.0333, 57.55, 0.0f);
    glVertex3f(93.0333,  55.0, 0.0f);
    glEnd();

    glBegin(GL_POLYGON); // window shadow
    glColor3f(0.62, 0.557, 0.216);
    glVertex3f(89.5, 54.05, 0.0f);
    glVertex3f(89.8667, 54.45, 0.0f);
    glVertex3f(93.1, 54.4, 0.0f);
    glVertex3f(92.8667, 54.05, 0.0f);
    glEnd();

    glBegin(GL_POLYGON); // window shadow
    glColor3f(0.62, 0.557, 0.216);
    glVertex3f(89.5, 54.05, 0.0f);

    glVertex3f(89.6, 61.0, 0.0f);
    glVertex3f(89.8667, 60.9, 0.0f);
    glVertex3f(89.8667, 54.45, 0.0f);

    glEnd();

    glBegin(GL_TRIANGLES); // window shadow
    glColor3f(0.62, 0.557, 0.216);
    glVertex3f(89.6, 61.0, 0.0f);
    glVertex3f(92.7667, 60.95, 0.0f);
    glVertex3f(89.8667, 60.9, 0.0f);

    glEnd();

    //right wall end



    glBegin(GL_TRIANGLES); // middle chal
    glColor3f(0.753, 0.486, 0.169);
    glVertex3f(85.3, 63.2, 0.0f);
    glVertex3f(90.6667, 73.2, 0.0f);
    glVertex3f(95.5667, 63.2, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.435, 0.251, 0.141);
    glVertex3f(85.3, 63.0, 0.0f);
    glVertex3f(85.3, 63.2, 0.0f);
    glVertex3f(95.5667, 63.2, 0.0f);
    glVertex3f(95.5667, 63.0, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.435, 0.251, 0.141);
    glVertex3f(87.0, 63.2, 0.0f);
    glVertex3f(87.2, 64.6, 0.0f);
    glVertex3f(87.4333, 63.2, 0.0f);


    glVertex3f(89.0333, 63.2, 0.0f);
    glVertex3f(89.1333, 67.2, 0.0f);
    glVertex3f(89.2667, 63.2, 0.0f);


    glVertex3f(92.9, 63.2, 0.0f);
    glVertex3f(92.9667, 64.45, 0.0f);
    glVertex3f(93.1333, 63.2, 0.0f);

    glVertex3f(93.6667, 63.2, 0.0f);
    glVertex3f(93.7, 65.65, 0.0f);
    glVertex3f(93.8, 63.2, 0.0f);
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

