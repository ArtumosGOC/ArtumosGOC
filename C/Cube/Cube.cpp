//========================================================================================================
//                           +========================+
//                            based in play-list video
//    https://www.youtube.com/watch?v=3aJ8OR1C6pk&list=PLWzp0Bbyy_3jy34HlDrEWlcG3rF99gkvk
//   +===================================================================================+
//========================================================================================================
#include<iostream>
#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>
using namespace std;

int nlarguratela = 600, nalturatela =  600;
float xPos = -10.0, yPos = 0, zPos=0;
bool nstate = true;

void display();
void reshape(int,int);
void timer(int);

void init()
{
  glClearColor(0, 0, 0, 0);
  glEnable(GL_DEPTH_TEST);
}

int main(int argc,char**argv)
{
  glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
  
  glutInitWindowPosition(200,100);
  glutInitWindowSize(nlarguratela,nalturatela);

  glutCreateWindow("lib OpenGL");

  glutDisplayFunc(display);
  glutReshapeFunc(reshape);

  glutTimerFunc(0, timer, 0);

  init();

  glutMainLoop();
}  

void display()
{
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  glLoadIdentity();

  glTranslatef(0,0,-5.0);
  glRotatef(60,xPos,yPos,zPos);

  glPointSize(40.0);

  glBegin(GL_QUADS);

  glColor3f(0,0,1);

  //front
  glColor3f(1.0,0.0,0.0);
  glVertex3f(-1.0,1.0,1.0);
  glVertex3f(-1.0,-1.0,1.0);
  glVertex3f(1.0,-1.0,1.0);
  glVertex3f(1.0,1.0,1.0);
  //back
  glColor3f(0.0,1.0,0.0);
  glVertex3f(1.0,1.0,-1.0);
  glVertex3f(1.0,-1.0,-1.0);
  glVertex3f(-1.0,-1.0,-1.0);
  glVertex3f(-1.0,1.0,-1.0);
  //right
  glColor3f(0.0,0.0,1.0);
  glVertex3f(1.0,1.0,1.0);
  glVertex3f(1.0,-1.0,1.0);
  glVertex3f(1.0,-1.0,-1.0);
  glVertex3f(1.0,1.0,-1.0);
  //left
  glColor3f(1.0,1.0,0.0);
  glVertex3f(-1.0,1.0,-1.0);
  glVertex3f(-1.0,-1.0,-1.0);
  glVertex3f(-1.0,-1.0,1.0);
  glVertex3f(-1.0,1.0,1.0);
  //top
  glColor3f(0.0,1.0,1.0);
  glVertex3f(-1.0,1.0,-1.0);
  glVertex3f(-1.0,1.0,1.0);
  glVertex3f(1.0,1.0,1.0);
  glVertex3f(1.0,1.0,-1.0);
  //bottom
  glColor3f(1.0,0.0,1.0);
  glVertex3f(-1.0,-1.0,-1.0);
  glVertex3f(-1.0,-1.0,1.0);
  glVertex3f(1.0,-1.0,1.0);
  glVertex3f(1.0,-1.0,-1.0);


  glEnd();

  glutSwapBuffers();
} 
void reshape(int w,int h)
{
  glViewport(0,0,(GLsizei)w,(GLsizei)h);
  glMatrixMode(GL_PROJECTION);

  glLoadIdentity();

  gluPerspective(60,1,2,50);
  glMatrixMode(GL_MODELVIEW);
}

void timer(int)
{
  glutPostRedisplay();
  glutTimerFunc(1000/60,timer,0);

  switch(nstate)
  {
    case true:
          xPos += (xPos<9)? 0.15: 0;
          yPos += (yPos<6)? 0.15: 0;
          zPos += (yPos<6)? 0.15: 0;
          nstate = (xPos>=9)? false:true;
          break;
    case false:
          xPos -= (xPos>-9)? 0.15: 0;
          yPos -= (yPos>-6)? 0.15: 0;
          zPos -= (yPos>-6)? 0.15: 0;
          nstate = (xPos<=-9)? true:false;
          break;
  }
  
}