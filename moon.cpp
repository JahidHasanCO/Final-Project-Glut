#include <GL/glut.h>
#include <math.h>



void drawMoon()
{
    int i;
    int radius = 4;
    float x = 35.46f;
    float y = 91.25f;
    int triangleAmount = 50;
    int windowWidth = 1500;
    int windowHeight = 1000;

    GLfloat twicePi = 2.0f * 3.1416f;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= triangleAmount; i++)
    {
        float angle = i * twicePi / triangleAmount;
        float transformedX = x + radius * cos(angle);
        float transformedY = y + radius * sin(angle) * (float)windowWidth / windowHeight; // this because window height, weight not same
        glVertex2f(transformedX, transformedY);
    }
    glEnd();
}
