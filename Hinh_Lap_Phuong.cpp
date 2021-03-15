#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
GLuint MakeCube(const float& size)
{
  GLuint dp_list;
  dp_list = glGenLists(1);
  glNewList(dp_list, GL_COMPILE);
  glBegin(GL_QUADS);
  // Front Face
  glNormal3f(0.0, 0.0, 1.0);
  glVertex3f(-size, -size, size);
  glVertex3f( size, -size, size);
  glVertex3f( size, size, size);
  glVertex3f(-size, size, size);
  // Back Face
  glNormal3f(0.0, 0.0, -1.0);
  glVertex3f(-size, -size, -size);
  glVertex3f(-size, size, -size);
  glVertex3f(size, size, -size);
  glVertex3f(size, -size, -size);
  // Top Face
  glNormal3f(0.0, 1.0, 0.0);
  glVertex3f(-size, size, -size);
  glVertex3f(-size, size, size);
  glVertex3f( size, size, size);
  glVertex3f( size, size, -size);
  // Bottom Face
  glNormal3f(0.0, -1.0, 0.0);
  glVertex3f(-size, -size, -size);
  glVertex3f( size, -size, -size);
  glVertex3f( size, -size, size);
  glVertex3f(-size, -size, size);
  // Right face
  glNormal3f(1.0, 0.0, 0.0);
  glVertex3f( size, -size, -size);
  glVertex3f( size, size, -size);
  glVertex3f( size, size, size);
  glVertex3f( size, -size, size);
  // Left Face
  glNormal3f(-1.0, 0.0, 0.0);
  glVertex3f(-size, -size, -size);
  glVertex3f(-size, -size, size);
  glVertex3f(-size, size, size);
  glVertex3f(-size, size, -size);
 
  glEnd();
  glEndList();
  return dp_list;
}
int main(int argc, char** argv) {
	MakeCube(5.0);
	return 0;
}
