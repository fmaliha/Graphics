#include <windows.h>
#include <GL/glut.h>

void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINES);


	glEnd();
	glFlush();

	glBegin(GL_LINES);
	glColor3f(128.0f, 0.0f, 0.0f);
	glVertex2f(-.70f, .5f);
	glVertex2f(-.70f, .3f);   //M
	glVertex2f(-.70f, .5f);
	glVertex2f(-.60f, .4f);
	glVertex2f(-.60f, .4f);
	glVertex2f(-.50f, .5f);
	glVertex2f(-.50f, .5f);
	glVertex2f(-.50f, .3f);
	glEnd();
	glFlush();

	glBegin(GL_LINES);
	glColor3f(128.0f, 0.0f, 0.0f);
	glVertex2f(-.32f, .5f);
	glVertex2f(-.36f, .4f);   //A left side
	glVertex2f(-.36f, .4f);
	glVertex2f(-.40f, .3f);
	glEnd();
	glFlush();

	glBegin(GL_LINES);
	glColor3f(128.0f, 0.0f, 0.0f);
	glVertex2f(-.32f, .5f);                //A right side
	glVertex2f(-.28f, .4f);
	glVertex2f(-.28f, .4f);
	glVertex2f(-.24f, .3f);
	glEnd();
	glFlush();

glBegin(GL_LINES);
	glColor3f(128.0f, 0.0f, 0.0f);
	glVertex2f(-.36f, .4f);            //A -
	glVertex2f(-.28f, .4f);
	glEnd();
	glFlush();

glBegin(GL_LINES);                        ////// L
	glColor3f(128.0f, 0.0f, 0.0f);
	glVertex2f(-.20f, .5f);
	glVertex2f(-.20f, .3f);
	glVertex2f(-.20f, .3f);
	glVertex2f(-.10f, .3f);

	glEnd();
	glFlush();


	glBegin(GL_LINES);                                  //I
	glColor3f(128.0f, 0.0f, 0.0f);
	glVertex2f(.0f, .5f);
	glVertex2f(.0f, .3f);
	glVertex2f(.0f, .5f);
	glVertex2f(-.08f, .5f);
	glVertex2f(.0f, .5f);
	glVertex2f(.08f, .5f);
	glVertex2f(.0f, .3f);
	glVertex2f(-.08f, .3f);
	glVertex2f(.0f, .3f);
	glVertex2f(.08f, .3f);

	glEnd();
	glFlush();

glBegin(GL_LINES);                          //////         H
	glColor3f(128.0f, 0.0f, 0.0f);
	glVertex2f(.14f, .5f);
	glVertex2f(.14f, .3f);
	glVertex2f(.30f, .5f);
	glVertex2f(.30f, .3f);
	glVertex2f(.14f, .4f);
	glVertex2f(.30f, .4f);

	glEnd();
	glFlush();



glBegin(GL_LINES);
	glColor3f(128.0f, 0.0f, 0.0f);
	glVertex2f(.44f, .5f);
	glVertex2f(.40f, .4f);   //A left side
	glVertex2f(.40f, .4f);
	glVertex2f(.36f, .3f);
	glEnd();
	glFlush();

	glBegin(GL_LINES);
	glColor3f(128.0f, 0.0f, 0.0f);
	glVertex2f(.44f, .5f);
	glVertex2f(.48f, .4f);   //A right side
	glVertex2f(.48f, .4f);
	glVertex2f(.52f, .3f);
	glEnd();
	glFlush();


glBegin(GL_LINES);
	glColor3f(128.0f, 0.0f, 0.0f);
	glVertex2f(.40f, .4f);            //A -
	glVertex2f(.48f, .4f);
	glEnd();
	glFlush();




}
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("MALIHA");
	glutInitWindowSize(500, 400);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}

