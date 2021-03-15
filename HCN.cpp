#include <Windows.h>
#include <stdio.h>
#include <gl/glut.h>

void draw()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
	glOrtho(0, 4, 0, 4, -1, 1);
	glBegin(GL_POLYGON);
	glVertex2i(1, 1);
	glVertex2i(3, 1);
	glVertex2i(3, 3);
	glVertex2i(3, 3);
	glVertex2i(1, 3);
	glEnd();
	glFlush();
}
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("whitesquare");
	glutDisplayFunc(draw);
	glutMainLoop();
}
