#include <GL/glut.h>
#include <math.h>

void drawMoon()
{
    int i;
    int radius = 5;
    float x = 35.46;
    float y = 91.25;
    int triangleAmount = 50;

    GLfloat twicePi = 2.0f * 3.1416;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i * twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}