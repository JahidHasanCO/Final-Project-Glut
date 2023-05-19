#include<windows.h>
#include <GL/glut.h>
#include "right_corner.h"
#include "backword_cloud.h"
#include "hill.h"
#include "house.h"
#include "ground.h"
#include "river.h"
#include "tree.h"
#include "flower.h"

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

    // draw tree 2nd tree ----------------------- start
    glLoadIdentity();
    glTranslatef(8.0f, -30.0f, 0.0f);
    glScalef(1.5f, 1.6f, 1.0f);
    drawBody();

    glLoadIdentity();
    glTranslatef(37.5f, 3.0f, 0.0f);
    glScalef(0.9f, 0.9f, 1.0f);
    drawLeaf(); //left

    glLoadIdentity();
    glTranslatef(32.5f, 10.0f, 0.0f);
    glScalef(0.9f, 0.9f, 1.0f);
    drawLeaf(); //left

    glLoadIdentity();
    glTranslatef(51.3f, -1.0f, 0.0f);
    glScalef(0.9f, 0.9f, 1.0f);
    drawLeaf(); //right

    glLoadIdentity();
    glTranslatef(14.0f, -18.2f, 0.0f);
    glScalef(1.4f, 1.4f, 1.0f);
    drawLeaf(); //middle

    // draw tree 2nd tree ----------------------- end

    // draw tree 3rd tree ----------------------- start
    glLoadIdentity();
    glTranslatef(-1.0f, 0.0f, 0.0f);

    drawBody();
    glLoadIdentity();
    glTranslatef(12.5f, 11.0f, 0.0f);
    glScalef(0.7f, 0.7f, 1.0f);
    drawLeaf(); //left

    glLoadIdentity();
    glTranslatef(20.0f, 10.0f, 0.0f);
    glScalef(0.75f, 0.75f, 1.0f);
    drawLeaf(); //right

    glLoadIdentity();
    drawLeaf(); //middle

    // draw tree 3rd tree ----------------------- end


    // draw tree 4th tree ----------------------- start
    glLoadIdentity();
    glTranslatef(11.0f, 26.0f, 0.0f);
    glScalef(0.5f, 0.5f, 1.0f);
    drawBody();
    glLoadIdentity();
    glTranslatef(20.0f, 35.0f, 0.0f);
    glScalef(0.3f, 0.3f, 1.0f);
    drawLeaf(); //left

    glLoadIdentity();
    glTranslatef(25.5f, 38.0f, 0.0f);
    glScalef(0.3f, 0.3f, 1.0f);
    drawLeaf(); //right

    glLoadIdentity();
    glTranslatef(26.0f, 35.0f, 0.0f);
    glScalef(0.3f, 0.3f, 1.0f);
    drawLeaf(); //right

    glLoadIdentity();
    glTranslatef(11.0f, 25.8f, 0.0f);
    glScalef(0.5f, 0.5f, 1.0f);
    drawLeaf(); //middle

    // draw tree 4th tree ----------------------- end



    glLoadIdentity();
    glTranslatef(125.0f, 12.5f, 0.0f);
    glScalef(-0.7f, 0.7f, 1.0f);// horizontal flip
    drawHouse(); // middle house

    glLoadIdentity();
    drawHouse(); // right house

    glLoadIdentity();
    glTranslatef(15.0f, 28.0f, 0.0f);
    glScalef(0.4f, 0.4f, 1.0f);
    drawHouse(); // left house


    glLoadIdentity();
    drawRiver();


    glLoadIdentity();
    glTranslatef(82.0f, 13.0f, 0.0f);
    glScalef(-0.86f, 0.86f, 1.0f);
    drawGround();


    glLoadIdentity(); // middle ground flower
    glTranslatef(-40.0f, 33.0f, 0.0f);
    drawSmallFlowerTree();

    glLoadIdentity();
    glTranslatef(10.0f, 38.0f, 0.0f);
    glScalef(0.3f, 0.3f, 1.0f);
    drawYellowFlower();

    glLoadIdentity();
    glTranslatef(9.0f, 36.5f, 0.0f);
    glScalef(0.33f, 0.33f, 1.0f);
    drawYellowFlower();

    glLoadIdentity();
    glTranslatef(10.0f, 38.0f, 0.0f);
    glScalef(0.33f, 0.33f, 1.0f);
    drawWhiteFlower();

    glLoadIdentity();
    drawGround();

    glLoadIdentity();
    drawRightCorner();
    glLoadIdentity();
    glTranslatef(8.0f, 0.0f, 0.0f);
    drawWhiteFlower();
    glTranslatef(18.0f, -4.0f, 0.0f);
    glScalef(0.6f, 0.6f, 1.0f);
    drawYellowFlower();

    glLoadIdentity();
    glTranslatef(30.0f, -4.0f, 0.0f);
    glScalef(0.6f, 0.6f, 1.0f);
    drawWhiteFlower();

    // draw tree 1st tree ----------------------- start
    glLoadIdentity();
    glTranslatef(-85.0f, -60.0f, 0.0f);
    glScalef(1.5f, 1.6f, 1.0f);
    drawBody();

    glLoadIdentity();
    glTranslatef(-58.5f, -30.0f, 0.0f);
    glScalef(0.9f, 0.9f, 1.0f);
    drawLeaf(); //left

    glLoadIdentity();
    glTranslatef(-40.3f, -25.0f, 0.0f);
    glScalef(0.9f, 0.9f, 1.0f);
    drawLeaf(); //right

    glLoadIdentity();
    glTranslatef(-90.0f, -60.2f, 0.0f);
    glScalef(1.6f, 1.6f, 1.0f);
    drawLeaf(); //middle

    // draw tree 1st tree ----------------------- end

    glLoadIdentity();
    glTranslatef(110.0f, 0.0f, 0.0f); // horizontal flip
    glScalef(-1.1f, 1.1f, 1.0f);
    drawRightCorner(); // left corner
    glTranslatef(25.0f, -4.0f, 0.0f);
    glScalef(0.6f, 0.6f, 1.0f);
    drawWhiteFlower();

    glLoadIdentity();
    glTranslatef(-114.0f, -16.0f, 0.0f);
    glScalef(1.3f, 1.3f, 1.0f);
    drawWhiteFlower();

    glLoadIdentity();
    glTranslatef(-102.0f, -18.0f, 0.0f);
    glScalef(1.3f, 1.3f, 1.0f);
    drawYellowFlower();




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

