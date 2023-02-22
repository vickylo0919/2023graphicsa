#include <GL/glut.h>
void display()
{
    glColor3f(0,1,0);///綠色
    ///glutSolidTeapot(0.5);
    glBegin(GL_POLYGON);///開始畫
        glColor3f(1,0,0);  glVertex2f( 0, 1);///紅色頂點Vertex
        glColor3f(0,1,0);  glVertex2f(-1,-1);///綠色頂點Vertex
        glColor3f(0,0,1);  glVertex2f( 1,-1);///藍色頂點Vertex
    glEnd();///結束畫

    glColor3f(1,1,0);///黃色
    glutSolidTeapot(0.3);///畫出一個實心茶壺，它的大小0.3(這一行原創的，其他行都是複製來的)
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
