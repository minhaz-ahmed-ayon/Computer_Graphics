#include<windows.h>
#include <GL/glut.h>


#include <stdlib.h>

void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);

	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0, 350.0, 0.0, 350.0);
}

void display (void)
{
	glClear(GL_COLOR_BUFFER_BIT);

	glPointSize(10.0);

	glBegin(GL_LINES);

        glColor3f(1.0, 0.0, 0.0);

		glVertex2i(70, 20);
		glVertex2i(270,20);

		glVertex2i(70, 170);
		glVertex2i(70,20);

		glVertex2i(270, 20);
		glVertex2i(270,170);

		glVertex2i(270,170);
		glVertex2i(70,170);

		glVertex2i(70, 170);
		glVertex2i(120,200);

		glVertex2i(320, 200);
		glVertex2i(270,170);

		glVertex2i(270, 20);
		glVertex2i(320,50);

		glVertex2i(120,200);
		glVertex2i(320, 200);

		glVertex2i(320, 200);
		glVertex2i(320,50);


	glEnd();

	glFlush();
}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowPosition(150, 100);
	glutInitWindowSize(500, 600);
	glutCreateWindow("ID: 20-41859-1");


	init();
	glutDisplayFunc(display);
	glutMainLoop();

	return 0;
}
