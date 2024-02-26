#include<windows.h>
#ifdef APPLE
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
#include<cmath>
#include<math.h>

char title[]= "Basic Code";
double rotate_c=0;
double rotate_d=0;
float x,y,z=-7,sx=1,sy=1,sz=1;

void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glBegin(GL_QUADS);
    {
        glColor3f(1,0.5,0) ;      ///Road left sideLight 1
        glVertex3f(-10,4.5,-15);
        glVertex3f(-10.1 ,4.5  ,-15);
        glVertex3f(-10.1   ,-3,-15);
        glVertex3f(-10  ,-3,-15);

        glColor3f(1,0.5,0) ;      ///Road left sideLight 1 light
        glVertex3f(-10,4.5,-15);
        glVertex3f(-9 ,4.5  ,-15);
        glVertex3f(-9   ,4.4,-15);
        glVertex3f(-10  ,4.4,-15);

         glColor3f(1,0.5,0) ;      ///Road left sideLight 2
        glVertex3f(-7,4.5,-15);
        glVertex3f(-7.1 ,4.5  ,-15);
        glVertex3f(-7.1   ,-3,-15);
        glVertex3f(-7 ,-3,-15);

         glColor3f(1,0.5,0) ;      ///Road left sideLight 2 light
        glVertex3f(-7,4.5,-15);
        glVertex3f(-6 ,4.5  ,-15);
        glVertex3f(-6   ,4.4,-15);
        glVertex3f(-7  ,4.4,-15);

 glColor3f(1,0.5,0) ;      ///Road left sideLight3
        glVertex3f(-4,4.5,-15);
        glVertex3f(-4.1 ,4.5  ,-15);
        glVertex3f(-4.1   ,-3,-15);
        glVertex3f(-4 ,-3,-15);

         glColor3f(1,0.5,0) ;      ///Road left sideLight 3 light
        glVertex3f(-4,4.5,-15);
        glVertex3f(-3.5 ,4.5  ,-15);
        glVertex3f(-3.5   ,4.4,-15);
        glVertex3f(-4  ,4.4,-15);

         glColor3f(1,0.5,0) ;      ///Road left sideLight4
        glVertex3f(-2,4.5,-15);
        glVertex3f(-2.1 ,4.5  ,-15);
        glVertex3f(-2.1   ,-3,-15);
        glVertex3f(-2 ,-3,-15);

glColor3f(1,0.5,0) ;      ///Road left sideLight 7 light
        glVertex3f(-2,4.5,-15);
        glVertex3f(-1.8 ,4.5  ,-15);
        glVertex3f(-1.8   ,4.4,-15);
        glVertex3f(-2  ,4.4,-15);

        glColor3f(1,0.5,0) ;      ///Road Right sideLight 1
        glVertex3f(10,4.5,-15);
        glVertex3f(10.1 ,4.5  ,-15);
        glVertex3f(10.1   ,-3,-15);
        glVertex3f(10  ,-3,-15);

        glColor3f(1,0.5,0) ;      ///Road Right sideLight 1 light
        glVertex3f(10,4.5,-15);
        glVertex3f(9 ,4.5  ,-15);
        glVertex3f(9   ,4.4,-15);
        glVertex3f(10  ,4.4,-15);
 glColor3f(1,0.5,0) ;      ///Road right sideLight 2
        glVertex3f(7,4.5,-15);
        glVertex3f(7.1 ,4.5  ,-15);
        glVertex3f(7.1   ,-3,-15);
        glVertex3f(7 ,-3,-15);
        glColor3f(1,0.5,0) ;      ///Road right sideLight 2 light
        glVertex3f(7,4.5,-15);
        glVertex3f(6 ,4.5  ,-15);
        glVertex3f(6   ,4.4,-15);
        glVertex3f(7  ,4.4,-15);

 glColor3f(1,0.5,0) ;      ///Road right sideLight3
        glVertex3f(4,4.5,-15);
        glVertex3f(4.1 ,4.5  ,-15);
        glVertex3f(4.1   ,-3,-15);
        glVertex3f(4 ,-3,-15);

        glColor3f(1,0.5,0) ;      ///Road Right sideLight 3 light
        glVertex3f(4,4.5,-15);
        glVertex3f(3.5 ,4.5  ,-15);
        glVertex3f(3.5   ,4.4,-15);
        glVertex3f(4  ,4.4,-15);

         glColor3f(1,0.5,0) ;      ///Road Right sideLight4
        glVertex3f(2,4.5,-15);
        glVertex3f(2.1 ,4.5  ,-15);
        glVertex3f(2.1   ,-3,-15);
        glVertex3f(2 ,-3,-15);

glColor3f(1,0.5,0) ;      ///Road Right sideLight 7 light
        glVertex3f(2,4.5,-15);
        glVertex3f(1.8 ,4.5  ,-15);
        glVertex3f(1.8   ,4.4,-15);
        glVertex3f(2  ,4.4,-15);

        glColor3f(0.75,0.75,2.75);  ///Road
        glVertex3f(-2.8,10.5,-35);
        glVertex3f(2.8,10.5,-35);
        glVertex3f(2.8,-1.5,-1);
        glVertex3f(-2.8,-1.5,-1);

        glColor3f(0.5,10,1);          ///middle 1
        glVertex3f(-0.5,-9 ,-15);
        glVertex3f(0.5 ,-9  ,-15);
        glVertex3f(0.5   ,-5.1,-15);
        glVertex3f(-0.5  ,-5.1,-15);

         glColor3f(0.5,10,1);          ///middle2
        glVertex3f(-0.5,-0 ,-15);
        glVertex3f(0.5 ,-0  ,-15);
        glVertex3f(0.5   ,-3,-15);
        glVertex3f(-0.5  ,-3,-15);

         glColor3f(0.5,10,1);          ///middle3
        glVertex3f(-0.5,4.5,-15);
        glVertex3f(0.5 ,4.5  ,-15);
        glVertex3f(0.5   ,3,-15);
        glVertex3f(-0.5  ,3,-15);



    }
    glEnd();

    glColor3f(1,1,1);       ///light right-0
    glBegin(GL_POLYGON);
    {
        for(int i=0; i<50; i++)
        {
            float angle = 2.0 * M_PI * i /50;
            glVertex3f(0.2 * sin(angle)+5.5, 0.2 * cos(angle)+13,-45);
        }
    }
    glEnd();

    glColor3f(1,1,1);       ///light right-1
    glBegin(GL_POLYGON);
    {
        for(int i=0; i<50; i++)
        {
            float angle = 2.0 * M_PI * i /50;
            glVertex3f(0.6 * sin(angle)+11, 0.6 * cos(angle)+12.7,-45);
        }
    }
    glEnd();

    glColor3f(1,1,1);       ///light right-2
    glBegin(GL_POLYGON);
    {
        for(int i=0; i<50; i++)
        {
            float angle = 2.0 * M_PI * i /50;
            glVertex3f(0.7 * sin(angle)+18.8, 0.7 * cos(angle)+12.7,-45);
        }
    }
    glEnd();

    glColor3f(1,1,1);       ///light right-3
    glBegin(GL_POLYGON);
    {
        for(int i=0; i<50; i++)
        {
            float angle = 2.0 * M_PI * i /50;
            glVertex3f(0.8 * sin(angle)+28, 0.8 * cos(angle)+12.5,-45);
        }
    }
    glEnd();


    glColor3f(1,1,1);       ///light left-0
    glBegin(GL_POLYGON);
    {
        for(int i=0; i<50; i++)
        {
            float angle = 2.0 * M_PI * i /50;
            glVertex3f(0.2 * sin(angle)-5.5, 0.2 * cos(angle)+13,-45);
        }
    }
    glEnd();

    glColor3f(1,1,1);       ///light right-1
    glBegin(GL_POLYGON);
    {
        for(int i=0; i<50; i++)
        {
            float angle = 2.0 * M_PI * i /50;
            glVertex3f(0.6 * sin(angle)-11, 0.6 * cos(angle)+12.7,-45);
        }
    }
    glEnd();

    glColor3f(1,1,1);       ///light right-2
    glBegin(GL_POLYGON);
    {
        for(int i=0; i<50; i++)
        {
            float angle = 2.0 * M_PI * i /50;
            glVertex3f(0.7 * sin(angle)-18.8, 0.7 * cos(angle)+12.7,-45);
        }
    }
    glEnd();

    glColor3f(1,1,1);       ///light right-3
    glBegin(GL_POLYGON);
    {
        for(int i=0; i<50; i++)
        {
            float angle = 2.0 * M_PI * i /50;
            glVertex3f(0.8 * sin(angle)-28, 0.8 * cos(angle)+12.5,-45);
        }
    }
    glEnd();


    glLoadIdentity();

    glPushMatrix();
    glTranslated(x,y,z);
    glRotatef( rotate_c, 1.0, 0.0, 0.0);
    glRotatef( rotate_d, 0.0, 1.0, 0.0);
    glScaled(sx, sy, sz);

    glBegin(GL_QUADS);
    {



       glColor3f(0,0,0);          ///chaka 1
       glVertex3f(-1,-6 ,-15);
        glVertex3f(-0.5  ,-7,-15);
        glVertex3f(-0.5 ,-6  ,-15);
        glVertex3f(-1   ,-7,-15);

glColor3f(0,0,0);          ///chaka 2
       glVertex3f(0.8,-6 ,-15);
        glVertex3f(1.3  ,-7,-15);
        glVertex3f(1.3 ,-6  ,-15);
        glVertex3f(0.8  ,-7,-15);

        glColor3f(0,0,18);     //Body
        glVertex3f(-2,-6,-15);
        glVertex3f(2,-6,-15);
        glVertex3f(2,-6.8,-15);
        glVertex3f(-2,-6.8,-15);

        glColor3f(0,0,18);          ///matha
        glVertex3f(-1.5,-6 ,-15);
        glVertex3f(1.5 ,-6  ,-15);
        glVertex3f(0.7   ,-5.2,-15);
        glVertex3f(-0.8  ,-5.2,-15);

        glColor3f(0,0,0);          ///matha glass
        glVertex3f(-1.3,-5.9 ,-15);
        glVertex3f(1.3 ,-5.9  ,-15);
        glVertex3f(0.6   ,-5.3,-15);
        glVertex3f(-0.7  ,-5.3,-15);


    }

    glEnd();

    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    {
        for(int i=0; i<50; i++)
        {
            float angle = 2.0 * M_PI * i /50;
            glVertex3f(0.6 * sin(angle)-4, 0.6 * cos(angle)-15,-45);
        }
    }
    glEnd();


    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    {
        for(int i=0; i<50; i++)
        {
            float angle = 2.0 * M_PI * i /50;
            glVertex3f(0.6 * sin(angle)+4.1, 0.6 * cos(angle)-15,-45);
        }
    }
    glEnd();
    glPopMatrix();

    glutSwapBuffers();
}

void reshape(GLsizei width,GLsizei height)
{
    if(height == 0) height = 1;
    GLfloat aspect = (GLfloat)width / (GLfloat)height;

    glViewport(0,0,width,height);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0f, aspect, 0.1f, 100.0f);

}

float move_unit=0.05;
void windowKey(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 'C':
        z+=move_unit;
        break;

    case 'D':
        z-=move_unit;
        break;

    case 'A':
        sx*=2;
        break;

    case 'B':
        sx*=move_unit;;
        break;
    case 'X':
        rotate_c+= 5;
        break;
    case 'Y':
        rotate_d+= 5;
        break;
    default:
        break;
    }
    glutPostRedisplay();
}

int main(int argc, char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE);
    glutInitWindowSize(1500,1000);
    glutInitWindowPosition(0,0);

    glutCreateWindow ("Car Animation...");
    glutDisplayFunc(display);
    glutKeyboardFunc(windowKey);
    glutReshapeFunc(reshape);
    glutMainLoop();
return 0;


}
