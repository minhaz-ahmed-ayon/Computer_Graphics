#include <windows.h>
#include <stdio.h>
#include <GL/glut.h>


void myDisplay(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (1.0, 0.0, 0.0);
    glPointSize(5.0);


    glColor3f (0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2i(200, 30);
    glVertex2i(440, 30);
    glVertex2i(440, 53);
    glVertex2i(474, 53);
    glVertex2i(474, 76);
    glVertex2i(508, 76);
    glVertex2i(508, 99);
    glVertex2i(542, 99);
    glVertex2i(542, 122);
    glVertex2i(576, 122);
    glVertex2i(576, 145);
    glVertex2i(610, 145);
    glVertex2i(610, 345);
    glVertex2i(576, 345);
    glVertex2i(576, 368);
    glVertex2i(542, 368);
    glVertex2i(542, 391);
    glVertex2i(508, 391);
    glVertex2i(508, 414);
    glVertex2i(474, 414);
    glVertex2i(474, 437);
    glVertex2i(440, 437);
    glVertex2i(440, 460);
    glVertex2i(200, 460);
    glEnd();


    glColor3f (0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2i(440, 460);
    glVertex2i(200, 460);
    glVertex2i(200, 437);
    glVertex2i(166, 437);
    glVertex2i(166, 414);
    glVertex2i(132, 414);
    glVertex2i(132, 391);
    glVertex2i(98, 391);
    glVertex2i(98, 368);
    glVertex2i(64, 368);
    glVertex2i(64, 345);
    glVertex2i(30, 345);
    glVertex2i(30, 145);
    glEnd();


    glColor3f (0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2i(440, 460);
    glVertex2i(30, 145);
    glVertex2i(64, 145);
    glVertex2i(64, 122);
    glVertex2i(98, 122);
    glVertex2i(98, 99);
    glVertex2i(132, 99);
    glVertex2i(132, 76);
    glVertex2i(166, 76);
    glVertex2i(166, 53);
    glVertex2i(200, 53);
    glVertex2i(200, 30);
    glEnd();

    glColor4f (1.0, 1.0, 0.0,1.0);
    glBegin(GL_POLYGON);
    glVertex2i(210, 40);
    glVertex2i(430, 40);
    glVertex2i(430, 63);
    glVertex2i(464, 63);
    glVertex2i(464, 86);
    glVertex2i(498, 86);
    glVertex2i(498, 109);
    glVertex2i(532, 109);
    glVertex2i(532, 132);
    glVertex2i(566, 132);
    glVertex2i(566, 155);
    glVertex2i(600, 155);
    glVertex2i(600, 335);
    glVertex2i(566, 335);
    glVertex2i(566, 358);
    glVertex2i(532, 358);
    glVertex2i(532, 381);
    glVertex2i(498, 381);
    glVertex2i(498, 404);
    glVertex2i(464, 404);
    glVertex2i(464, 427);
    glVertex2i(430, 427);
    glVertex2i(430, 450);
    glVertex2i(210, 450);
    glEnd();

    glColor4f (1.0, 1.0, 0.0,1.0);
    glBegin(GL_POLYGON);
    glVertex2i(430, 450);
    glVertex2i(210, 450);
    glVertex2i(210, 427);
    glVertex2i(176, 427);
    glVertex2i(176, 404);
    glVertex2i(142, 404);
    glVertex2i(142, 381);
    glVertex2i(108, 381);
    glVertex2i(108, 358);
    glVertex2i(74, 358);
    glVertex2i(74, 335);
    glVertex2i(40, 335);
    glVertex2i(40, 155);
    glEnd();

    glColor4f (1.0,1.0,0.0,1.0);
    glBegin(GL_POLYGON);
    glVertex2i(430, 450);
    glVertex2i(40, 155);
    glVertex2i(74, 155);
    glVertex2i(74, 132);
    glVertex2i(108, 132);
    glVertex2i(108, 109);
    glVertex2i(142, 109);
    glVertex2i(142, 86);
    glVertex2i(176, 86);
    glVertex2i(176, 63);
    glVertex2i(210, 63);
    glVertex2i(210, 40);
    glEnd();

    glColor3f (0.0, 0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2i(90,155);
    glVertex2i(550,155);
    glVertex2i(550,335);
    glVertex2i(90,335);
    glEnd();

    glColor3f (0.0, 0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2i(270,155);
    glVertex2i(370,155);
    glVertex2i(370,345);
    glVertex2i(270,345);
    glEnd();

    glColor3f (0.0, 0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2i(280,155);
    glVertex2i(360,155);
    glVertex2i(360,400);
    glVertex2i(280,400);
    glEnd();

    glColor3f (0.0, 0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2i(280,155);
    glVertex2i(295,155);
    glVertex2i(295,415);
    glVertex2i(280,415);
    glEnd();

    glColor3f (0.0, 0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2i(345,155);
    glVertex2i(360,155);
    glVertex2i(360,415);
    glVertex2i(345,415);
    glEnd();


    glColor3f (0.0, 0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2i(295,70);
    glVertex2i(345,70);
    glVertex2i(345,400);
    glVertex2i(295,400);
    glEnd();

    glColor3f (0.0, 0.0,0.0);
glBegin(GL_POLYGON);
glVertex2i(310,60);
glVertex2i(330,60);
glVertex2i(330,400);
glVertex2i(310,400);
glEnd();


glColor3f (0.0, 0.0,0.0);
glBegin(GL_POLYGON);
glVertex2i(285,140);
glVertex2i(355,140);
glVertex2i(355,400);
glVertex2i(285,400);
glEnd();


glColor3f (0.0, 0.0,0.0);
glBegin(GL_POLYGON);
glVertex2i(265,140);
glVertex2i(275,140);
glVertex2i(275,250);
glVertex2i(265,250);
glEnd();


glColor3f (0.0, 0.0,0.0);
glBegin(GL_POLYGON);
glVertex2i(365,140);
glVertex2i(375,140);
glVertex2i(375,250);
glVertex2i(365,250);
glEnd();


glColor3f (0.0, 0.0,0.0);
glBegin(GL_POLYGON);
glVertex2i(255,110);
glVertex2i(265,110);
glVertex2i(265,250);
glVertex2i(255,250);
glEnd();


glColor3f (0.0, 0.0,0.0);
glBegin(GL_POLYGON);
glVertex2i(375,110);
glVertex2i(385,110);
glVertex2i(385,250);
glVertex2i(375,250);
glEnd();


glColor3f (0.0, 0.0,0.0);
glBegin(GL_POLYGON);
glVertex2i(245,60);
glVertex2i(255,60);
glVertex2i(255,250);
glVertex2i(245,250);
glEnd();


glColor3f (0.0, 0.0,0.0);
glBegin(GL_POLYGON);
glVertex2i(395,60);
glVertex2i(385,60);
glVertex2i(385,250);
glVertex2i(395,250);
glEnd();


glColor3f (0.0, 0.0,0.0);
glBegin(GL_POLYGON);
glVertex2i(110,160);
glVertex2i(245,160);
glVertex2i(245,345);
glVertex2i(110,345);
glEnd();


glColor3f (0.0, 0.0,0.0);
glBegin(GL_POLYGON);
glVertex2i(395,160);
glVertex2i(530,160);
glVertex2i(530,345);
glVertex2i(395,345);
glEnd();


glColor3f (0.0, 0.0,0.0);
glBegin(GL_POLYGON);
glVertex2i(215,345);
glVertex2i(235,345);
glVertex2i(235,400);
glVertex2i(215,400);
glEnd();


glColor3f (0.0, 0.0,0.0);
glBegin(GL_POLYGON);
glVertex2i(405,345);
glVertex2i(425,345);
glVertex2i(425,400);
glVertex2i(405,400);
glEnd();


glColor3f (0.0, 0.0,0.0);
glBegin(GL_POLYGON);
glVertex2i(235,390);
glVertex2i(240,390);
glVertex2i(240,400);
glVertex2i(235,400);
glEnd();


glColor3f (0.0, 0.0,0.0);
glBegin(GL_POLYGON);
glVertex2i(400,390);
glVertex2i(405,390);
glVertex2i(405,400);
glVertex2i(400,400);
glEnd();


glColor3f (0.0, 0.0,0.0);
glBegin(GL_POLYGON);
glVertex2i(180,250);
glVertex2i(215,250);
glVertex2i(215,390);
glVertex2i(180,390);
glEnd();


glColor3f (0.0, 0.0,0.0);
glBegin(GL_POLYGON);
glVertex2i(425,250);
glVertex2i(460,250);
glVertex2i(460,390);
glVertex2i(425,390);
glEnd();


glColor3f (0.0, 0.0,0.0);
glBegin(GL_POLYGON);
glVertex2i(145,250);
glVertex2i(180,250);
glVertex2i(180,380);
glVertex2i(145,380);
glEnd();


glColor3f (0.0, 0.0,0.0);
glBegin(GL_POLYGON);
glVertex2i(460,250);
glVertex2i(495,250);
glVertex2i(495,380);
glVertex2i(460,380);
glEnd();


glColor3f (0.0, 0.0,0.0);
glBegin(GL_POLYGON);
glVertex2i(110,250);
glVertex2i(145,250);
glVertex2i(145,370);
glVertex2i(110,370);
glEnd();


glColor3f (0.0, 0.0,0.0);
glBegin(GL_POLYGON);
glVertex2i(495,250);
glVertex2i(530,250);
glVertex2i(530,370);
glVertex2i(495,370);
glEnd();


glColor3f (0.0, 0.0,0.0);
glBegin(GL_POLYGON);
glVertex2i(210,70);
glVertex2i(245,70);
glVertex2i(245,250);
glVertex2i(210,250);
glEnd();


glColor3f (0.0, 0.0,0.0);
glBegin(GL_POLYGON);
glVertex2i(395,70);
glVertex2i(430,70);
glVertex2i(430,250);
glVertex2i(395,250);
glEnd();


glColor3f (0.0, 0.0,0.0);
glBegin(GL_POLYGON);
glVertex2i(185,80);
glVertex2i(210,80);
glVertex2i(210,250);
glVertex2i(185,250);
glEnd();


glColor3f (0.0, 0.0,0.0);
glBegin(GL_POLYGON);
glVertex2i(430,80);
glVertex2i(455,80);
glVertex2i(455,250);
glVertex2i(430,250);
glEnd();


glColor3f (0.0, 0.0,0.0);
glBegin(GL_POLYGON);
glVertex2i(150,90);
glVertex2i(185,90);
glVertex2i(185,250);
glVertex2i(150,250);
glEnd();


glColor3f (0.0, 0.0,0.0);
glBegin(GL_POLYGON);
glVertex2i(455,90);
glVertex2i(490,90);
glVertex2i(490,250);
glVertex2i(455,250);
glEnd();


glColor3f (0.0, 0.0,0.0);
glBegin(GL_POLYGON);
glVertex2i(115,115);
glVertex2i(150,115);
glVertex2i(150,250);
glVertex2i(115,250);
glEnd();


glColor3f (0.0, 0.0,0.0);
glBegin(GL_POLYGON);
glVertex2i(490,115);
glVertex2i(525,115);
glVertex2i(525,250);
glVertex2i(490,250);
glEnd();


glFlush ();

}

void myInit (void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 640.0, 0.0, 480.0);
    }


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (640, 480);
    glutInitWindowPosition (300, 200);
    glutCreateWindow ("BATMAN");
    glutDisplayFunc(myDisplay);
    myInit ();
    glutMainLoop();

    }
