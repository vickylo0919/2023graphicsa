#include <GL/glut.h>
void display()
{
    glColor3f(0,1,0);///���
    ///glutSolidTeapot(0.5);
    glBegin(GL_POLYGON);///�}�l�e
        glColor3f(1,0,0);  glVertex2f( 0, 1);///���⳻�IVertex
        glColor3f(0,1,0);  glVertex2f(-1,-1);///��⳻�IVertex
        glColor3f(0,0,1);  glVertex2f( 1,-1);///�Ŧ⳻�IVertex
    glEnd();///�����e

    glColor3f(1,1,0);///����
    glutSolidTeapot(0.3);///�e�X�@�ӹ�߯����A�����j�p0.3(�o�@���Ъ��A��L�泣�O�ƻs�Ӫ�)
    glutSwapBuffers();///��GLUT��e��swap�e����ܪ��a��
}
int main(int argc, char *argv[])
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
glutCreateWindow("GLUT Shapes");
glutDisplayFunc(display);
glutMainLoop();
}