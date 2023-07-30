#include<windows.h>
#include<GL/glut.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

int xc, yc, r;

void plotpoint(int x, int y)

{
    glBegin(GL_POINTS);
    glVertex2i(xc+x, yc+y);
    glVertex2i(xc+x, yc-y);
    glVertex2i(xc+y, yc+x);
    glVertex2i(xc+y, yc-x);
    glVertex2i(xc-x, yc-y);
    glVertex2i(xc-y, yc-x);
    glVertex2i(xc-x, yc+y);
    glVertex2i(xc-y, yc+x);
    glEnd();
}

void mca()
{
    glClear (GL_COLOR_BUFFER_BIT);
	glColor3f (0.0, 0.0, 0.0);
	glPointSize(1.0);


    int x = 0, y = r;
    float pk = 1 - r;
    plotpoint(x, y);
    int k;

    while(y > x)
    {
        if(pk < 0)
        {
            x++;
            pk = pk + (2*x) + 1;
        }
        else
        {
            y--;
            x++;
            pk = pk + (2 * x) + 1 - (2 * y);
        }

        plotpoint(x, y);
    }
    glFlush ();
}

void init(void)
{
    glClearColor (1.0, 1.0, 1.0, 0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    glPointSize(2.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}

int main(int argc, char** argv)
{
    cout<<"Enter the center\n(xc, yc):-\n";
    cin>>xc>>yc;
    cout<<"Enter the radius:\n";
    cin>>r;

    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (500, 500);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("M.C.A");
    init();
    glutDisplayFunc(mca);
    glutMainLoop();
    return 0;
}
