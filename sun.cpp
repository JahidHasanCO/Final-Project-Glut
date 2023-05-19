#include <GL/glut.h>
#include <math.h>

void drawSunOuter()
{
    int i;
    int radius = 5;
    float x = 35.46f;
    float y = 91.25f;
    int windowWidth = 1500;
    int windowHeight = 1000;
    int triangleAmount = 50;

    GLfloat twicePi = 2.0f * 3.1416f;
    glColor3f(0.98, 0.59, 0.00);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y); // center of circle
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA); // for set alpha
    glEnable(GL_BLEND);
    glColor4f(0.98, 0.73, 0.02,0.0);
    for (i = 0; i <= triangleAmount; i++)
    {
        float angle = i * twicePi / triangleAmount;
        float transformedX = x + radius * cos(angle);
        float transformedY = y + radius * sin(angle) * (float)windowWidth / windowHeight; // this because window height, weight not same
        glVertex2f(transformedX, transformedY);
    }
    glEnd();
}

void drawSun()
{
    int i;
    int radius = 3;
    float x = 35.46f;
    float y = 91.25f;
    int windowWidth = 1500;
    int windowHeight = 1000;
    int triangleAmount = 50;

    GLfloat twicePi = 2.0f * 3.1416f;
    glColor3f(0.98, 0.59, 0.00);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y); // center of circle
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA); // for set alpha
    glEnable(GL_BLEND);
    glColor4f(0.98, 0.73, 0.02,0.9);
    for (i = 0; i <= triangleAmount; i++)
    {
        float angle = i * twicePi / triangleAmount;
        float transformedX = x + radius * cos(angle);
        float transformedY = y + radius * sin(angle) * (float)windowWidth / windowHeight; // this because window height, weight not same
        glVertex2f(transformedX, transformedY);
    }
    glEnd();

    drawSunOuter();
}
