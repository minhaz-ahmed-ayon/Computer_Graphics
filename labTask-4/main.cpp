#include<windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
void myDisplayRectangular(void)
{
glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
glClear(GL_COLOR_BUFFER_BIT);
glLoadIdentity();
gluOrtho2D(0,600,0,900);
glPushMatrix();
glLineWidth(2);
glBegin(GL_LINES);
{
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(70,250);
glVertex2f(112,309.6);
glVertex2f(174,376.4);
glVertex2f(256,450.4);
glVertex2f(358,531.6);
glVertex2f(480,620);
glVertex2f(112,309.6);
glVertex2f(174,376.4);
glVertex2f(256,450.4);
glVertex2f(358,531.6);
glVertex2f(480,620);
glEnd();
}
glPopMatrix();
glEnd();
glFlush ();
}
void myInit (void)
{
glClearColor(1.0, 1.0, 1.0, 0.0);
glColor3f(0.0f, 0.0f, 0.0f);
glPointSize(6.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 820.0, 0.0, 568.0);
}
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(840,640);
glutCreateWindow (" Curve");
glutDisplayFunc(myDisplayRectangular);
myInit ();
glutMainLoop();
return 0;
}
