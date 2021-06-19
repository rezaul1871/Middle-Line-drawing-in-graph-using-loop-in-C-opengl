#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
    float increment;
    increment=0.01;
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (0.0, 0.0, 0.0);

  glBegin(GL_LINES);
  glVertex3f(0.0f, 0.05f,0.0f);
  glVertex3f(0.35f, 0.05f,0.0f);

  glVertex3f(0.05f, 0.00f, 0.0f);
  glVertex3f(0.05f, 0.35f, 0.0f); //Begin triangle coordinates

    for (int i=0;i<20;i++){
  //Triangle
  glVertex3f(0.05f+i*increment, 0.05f+i*increment, 0.0f);
  glVertex3f(0.06f+i*increment, 0.06f+i*increment, 0.0f);

    }

  glEnd();


glFlush ();
}
void init (void)
{
glClearColor (1.0, 1.0, 1.0, 0.0); //select clearing (background) color
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0, 0.35, 0.0, 0.35, -10.0, 10.0);
}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (600, 600);
glutInitWindowPosition (100, 100);
glutCreateWindow ("Line Drawing using Loop");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
