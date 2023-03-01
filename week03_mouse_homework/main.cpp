#include <GL/glut.h>
#include <stdio.h>
void display()
{
    glBegin(GL_POLYGON);
        glVertex2f(-0.040, 0.172);
        glVertex2f(-0.084, 0.164);
        glVertex2f(-0.160, 0.160);
        glVertex2f(-0.216, 0.140);
        glVertex2f(-0.248, 0.112);
        glVertex2f(-0.264, 0.012);
        glVertex2f(-0.292, -0.060);
        glVertex2f(-0.296, -0.136);
        glVertex2f(-0.260, -0.164);
        glVertex2f(-0.216, -0.216);
        glVertex2f(-0.116, -0.232);
        glVertex2f(0.004, -0.236);
        glVertex2f(0.124, -0.228);
        glVertex2f(0.212, -0.228);
        glVertex2f(0.264, -0.152);
        glVertex2f(0.280, -0.044);
        glVertex2f(0.272, 0.016);
        glVertex2f(0.228, 0.120);
        glVertex2f(0.200, 0.176);
        glVertex2f(0.132, 0.148);
        glVertex2f(0.052, 0.184);
        glVertex2f(0.032, 0.184);
        glVertex2f(-0.052, 0.152);
        glVertex2f(-0.116, 0.140);
    glEnd();

    glutSwapBuffers();
}
void mouse (int button , int state , int x , int y)
{
    float X= (x-250)/250.0;
    float Y= -(y-250)/250.0;
    if(state == GLUT_DOWN)
    {
        printf("    glVertex2f(%.3f, %.3f);\n" ,X ,Y );
    }
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutInitWindowSize(500,500);
    glutCreateWindow("Week03");


    glutDisplayFunc(display);
    glutMouseFunc(mouse); ///½Ðmouse¨ç¦¡À°¦£

    glutMainLoop();
}
