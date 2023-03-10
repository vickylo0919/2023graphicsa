#include <GL/glut.h>
#include <math.h>  ///cos() 和 sin()要用
void myCircle(float r,float x,float y)
{
    glBegin(GL_POLYGON);///開始畫
        for(float a = 0; a<2*3.1415926; a+=0.01)
        {
            glVertex2f(r*cos(a)+x, r*sin(a)+y);
        }
    glEnd();///結束畫
}
void display()
{
    glColor3f(1,0,1); myCircle(0.6, 0, 0);///正中間

    glColor3f(1,0,0); myCircle(0.3, 0.5, 0.5);///右上角
    glColor3f(0,1,0); myCircle(0.3,-0.5, 0.5);///左上角
    glColor3f(1,1,0); myCircle(0.3,-0.5,-0.5);///左下角
    glColor3f(0,0,1); myCircle(0.3, 0.5,-0.5);///右下角
    glutSwapBuffers();///請GLUT把畫面swap送到顯示的地方
}

int main(int argc, char *argv[])
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
glutCreateWindow("GLUT Shapes");
glutDisplayFunc(display);
glutMainLoop();
}
