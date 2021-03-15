#include "Gl/glut.h"

 static int year = 0, day = 0; /* Thong so chi thoi gian trong nam va thoi gian trong ngay de xac dinh vi tri cua trai dat tren quy dao va xac dinh goc quay cua no quanh tam */

 

/* Khoi tao */

void init(void) 

{

   glClearColor (0.0, 0.0, 0.0, 0.0);

// Chuc nang cho phep loai bo mot phan cua doi tuong bi che boi doi tuong khac

   glEnable(GL_DEPTH_TEST);     

glShadeModel (GL_FLAT);

}

 

void display(void)

{

// xoa color buffer va depth buffer

glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

glPushMatrix(); // luu lai ma tran hien hanh   

glColor3f (1.0, 0, 0); // thiet lap mau ve la mau do

// ve mat troi la mot luoi cau co tam tai goc toa do

glutWireSphere(1.0, 20, 16);  

 

/* di chuyen den vi tri moi de ve trai dat */

// quay mot goc tuong ung voi thoi gian trong nam

   glRotatef ((GLfloat) year, 0.0, 1.0, 0.0);

// tinh tien den vi tri hien tai cua trai dat tren quy dao quanh mat troi

   glTranslatef (2.0, 0.0, 0.0);

// quay trai dat tuong ung voi thoi gian trong ngay

   glRotatef ((GLfloat) day, 0.0, 1.0, 0.0);

   glColor3f (0, 0, 1.0); // thiet lap mau ve la mau blue    

glutWireSphere(0.2, 10, 8);    // ve trai dat

// phuc hoi lai ma tran hien hanh cu: tuong ung voi quay lai vi tri ban dau

   glPopMatrix(); 

    glutSwapBuffers();

}

 

/* xu ly khi cua so bi thay doi */

void reshape (int w, int h)

{

// Thay doi kich thuoc viewport 

glViewport (0, 0, (GLsizei) w, (GLsizei) h); 

/* Thao tac tren chieu */    

glMatrixMode (GL_PROJECTION);   

glLoadIdentity ();

// Chieu phoi canh

gluPerspective(60.0, (GLfloat) w/(GLfloat) h, 1.0, 20.0);

 

/* Thao tac tren ModelView */    

glMatrixMode(GL_MODELVIEW);   

glLoadIdentity();

// Thiet lap view

gluLookAt (0.0, 0.0, 5.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);

}

 

/* xu ly su kien keyboard */

void keyboard (unsigned char key, int x, int y)

{   

switch (key) {      

case 'd':  day = (day + 10) % 360;         

glutPostRedisplay();         

break;      

case 'D': day = (day - 10) % 360;         

glutPostRedisplay();         

break;      

case 'y':  year = (year + 5) % 360;         

glutPostRedisplay();         

break;      

case 'Y':         

year = (year - 5) % 360;         

glutPostRedisplay();         

break;      

default:         

break;

   }

} 

 

int main(int argc, char** argv)

{

glutInit(&argc, argv);

glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);   

glutInitWindowSize (500, 500);    

glutInitWindowPosition (100, 100);   

glutCreateWindow (argv[0]);   

init ();

glutDisplayFunc(display);    

glutReshapeFunc(reshape);   

glutKeyboardFunc(keyboard);   

glutMainLoop();   

return 0;

}
