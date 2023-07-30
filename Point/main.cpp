/*
 * Drawing some points;
 */
 #include <windows.h>
#include <stdio.h>
#include <GL/glut.h>


void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3f (0.0, 0.0, 0.0);
glPointSize(6.0);
glBegin(GL_POINTS);

glVertex2i(410, 286); // left side length
glVertex2i(410, 296);
glVertex2i(410, 306);
glVertex2i(410, 316);
glVertex2i(410, 326);
glVertex2i(410, 336);
glVertex2i(410, 346);
glVertex2i(410, 356);
glVertex2i(410, 366);

glVertex2i(420, 286);
glVertex2i(440, 286);
glVertex2i(460, 286);
glVertex2i(480, 286);
glVertex2i(500, 286);
glVertex2i(520, 286);
glVertex2i(540, 286);

glVertex2i(420, 366);
glVertex2i(440, 366);
glVertex2i(460, 366);
glVertex2i(480, 366);
glVertex2i(500, 366);
glVertex2i(520, 366);
glVertex2i(540, 366);


glVertex2i(560, 286); // right side length
glVertex2i(560, 296);
glVertex2i(560, 306);
glVertex2i(560, 316);
glVertex2i(560, 326);
glVertex2i(560, 336);
glVertex2i(560, 346);
glVertex2i(560, 356);
glVertex2i(560, 366);
glVertex2i(560, 366); //

glEnd();
glFlush ();
}
void myInit (void)
{
glClearColor(1.0, 1.0, 1.0, 0.0); // background er colour change hoy
glColor3f(0.0f, 0.0f, 0.0f);
glPointSize(4.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 1080.0, 0.0, 720.0); // point gula x axis a ar y axis a koi jaabe ta
}









void triDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3f (0.0, 0.0, 0.0);
glPointSize(6.0);
glBegin(GL_POINTS);


glVertex2i(420, 286);
glVertex2i(440, 286);
glVertex2i(460, 286);
glVertex2i(480, 286);
glVertex2i(500, 286);
glVertex2i(520, 286);
glVertex2i(540, 286);


glVertex2i(430, 298);
glVertex2i(440, 304);
glVertex2i(450, 312);
glVertex2i(460, 316);
glVertex2i(470, 320);
glVertex2i(480, 324);



glEnd();
glFlush ();
}








int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (820, 568);
glutInitWindowPosition (0,0);
glutCreateWindow ("my first points");
glutDisplayFunc(myDisplay);
myInit ();


glutInitWindowSize (820, 568);
glutInitWindowPosition (820,0);
glutCreateWindow ("my first points");
glutDisplayFunc(triDisplay);
myInit ();
glutMainLoop();
return 0;
}
