#include<GL/gl.h>
#include<iostream>
#include <GL/glut.h>
int posx=0,posy=0;
int day = 1;        //1 for day ,0 for night

///tree

void tree()
{

///tree1

glBegin(GL_POLYGON);
glColor3f(0.57, 0.28, 0.16);
    glVertex3i(50, 350, 0);
    glVertex3i(50, 500, 0);

   glColor3f(0.9, 0.49, 0.32);

    glVertex3i(70, 500, 0);
    glVertex3i(70, 350, 0);




glEnd();



glBegin(GL_POLYGON);
glColor3f(0, 0.44, 0);
    glVertex3i(10, 500, 0);
    glColor3f(0, 0.79, 0);
    glVertex3i(60, 600, 0);
    glVertex3i(110, 500, 0);

glEnd();
glBegin(GL_POLYGON);

glColor3f(0, 0.44, 0);
    glVertex3i(15, 550, 0);
    glColor3f(0, 0.79, 0);
    glVertex3i(60, 650, 0);
    glVertex3i(105, 550, 0);






glEnd();

///tree2


glBegin(GL_POLYGON);

glColor3f(0.57, 0.28, 0.16);
    glVertex3i(150, 350, 0);
    glVertex3i(150, 500, 0);
    glColor3f(0.9, 0.49, 0.32);
    glVertex3i(170, 500, 0);
    glVertex3i(170, 350, 0);






glEnd();



glBegin(GL_POLYGON);

glColor3f(0, 0.44, 0);
    glVertex3i(10+100, 500, 0);
     glColor3f(0, 0.79, 0);
    glVertex3i(60+100, 600, 0);
    glVertex3i(110+100, 500, 0);






glEnd();
glBegin(GL_POLYGON);

glColor3f(0, 0.44, 0);
    glVertex3i(15+100, 550, 0);
     glColor3f(0, 0.79, 0);
     glVertex3i(60+100, 650, 0);
    glVertex3i(105+100, 550, 0);






glEnd();
///tree3
glColor3f(0.6156863,0,0);

glBegin(GL_POLYGON);

    glColor3f(0.57, 0.28, 0.16);

    glVertex3i(1050, 450, 0);
    glVertex3i(1050, 500+100, 0);
    glColor3f(0.9, 0.49, 0.32);
    glVertex3i(1070, 500+100, 0);
    glVertex3i(1070, 450, 0);




glEnd();



glBegin(GL_POLYGON);
glColor3f(0.0, 0.44, 0.0);

    glVertex3i(10+1000, 500+100, 0);
    glVertex3i(110+1000, 500+100, 0);

    glVertex3i(60+1000, 600+100, 0);



glEnd();
glBegin(GL_POLYGON);

glColor3f(0.0, 0.44, 0.0);

    glVertex3i(15+1000, 550+100, 0);
    glVertex3i(105+1000, 550+100, 0);

glColor3f(0, 0.79, 0);

    glVertex3i(60+1000, 650+100, 0);



glEnd();
///tree4

glBegin(GL_POLYGON);

glColor3f(0.57, 0.28, 0.16);
    glVertex3i(1150, 550, 0);
    glVertex3i(1150, 700, 0);
        glColor3f(0.9, 0.49, 0.32);
    glVertex3i(1170, 700, 0);
    glVertex3i(1170, 550, 0);




glEnd();


glBegin(GL_POLYGON);

glColor3f(0.0, 0.44, 0.0);

    glVertex3i(10+1100, 500+200, 0);
    glVertex3i(110+1100, 500+200, 0);

    glVertex3i(60+1100, 600+200, 0);



glEnd();
glBegin(GL_POLYGON);


    glVertex3i(15+1100, 550+200, 0);
    glVertex3i(105+1100, 550+200, 0);
    glColor3f(0, 0.79, 0);

    glVertex3i(60+1100, 650+200, 0);



glEnd();
///tree5
glColor3f(0.6156863,0,0);

glBegin(GL_POLYGON);

glColor3f(0.57, 0.28, 0.16);

    glVertex3i(50+900, 350+200, 0);
    glVertex3i(50+900, 500+200, 0);
    glColor3f(0.9, 0.49, 0.32);
    glVertex3i(70+900, 500+200, 0);
    glVertex3i(70+900, 350+200, 0);




glEnd();



glBegin(GL_POLYGON);

glColor3f(0.0, 0.44, 0.0);

    glVertex3i(10+900, 500+200, 0);
    glVertex3i(110+900, 500+200, 0);


    glVertex3i(60+900, 600+200, 0);



glEnd();
glBegin(GL_POLYGON);


    glVertex3i(15+900, 550+200, 0);
    glVertex3i(105+900, 550+200, 0);
    glColor3f(0, 0.79, 0);

    glVertex3i(60+900, 650+200, 0);

glEnd();


}
///river
void river()
{
    glColor3f(0, 0.75, 1);
glBegin(GL_POLYGON);

    glVertex3i(0, 0, 0);
    glVertex3i(1200, 0, 0);
    glVertex3i(1200, 300, 0);
    glVertex3i(0, 300, 0);
glEnd();

glBegin(GL_POLYGON);
    glVertex3i(680, 300, 0);
    glVertex3i(460, 600, 0);
    glVertex3i(620, 600, 0);
    glVertex3i(860, 300, 0);


glEnd();



}
//land
void land()
{
    glColor3f(0.46, 0.34, 0.16);
    glBegin(GL_POLYGON);

    glVertex3i(0, 300, 0);
    glVertex3i(1200, 300, 0);
    glVertex3i(1200, 600, 0);
    glVertex3i(0, 600, 0);


glEnd();

}



///hill
void hill()
{

    glBegin(GL_TRIANGLES);
glColor3f(0.47, 0.76, 0.86);
    glVertex3i(600, 600, 0);
    glVertex3i(800, 740, 0);
    glVertex3i(940, 600, 0);

    glBegin(GL_TRIANGLES);
glColor3f(0.47, 0.76, 0.86);
    glVertex3i(200, 600, 0);
    glVertex3i(400, 800, 0);
    glVertex3i(700, 600, 0);

    glBegin(GL_TRIANGLES);
glColor3f(0.47, 0.76, 0.86);
    glVertex3i(0, 600, 0);
    glVertex3i(100, 940, 0);
    glVertex3i(520, 600, 0);

    glBegin(GL_TRIANGLES);
glColor3f(0.33, 0.7, 0.84);
    glVertex3i(300, 600, 0);
    glVertex3i(460, 800, 0);
    glVertex3i(600, 600, 0);

    glBegin(GL_TRIANGLES);
glColor3f(0.33, 0.7, 0.84);
    glVertex3i(0, 600, 0);
    glVertex3i(0, 900, 0);
    glVertex3i(400, 600, 0);


    glBegin(GL_TRIANGLES);
glColor3f(0.33, 0.7, 0.84);
    glVertex3i(860, 600, 0);
    glVertex3i(1000, 800, 0);
    glVertex3i(1120, 600, 0);


    glBegin(GL_TRIANGLES);
glColor3f(0.17, 0.59, 0.75);
    glVertex3i(980, 600, 0);
    glVertex3i(1200, 800, 0);
    glVertex3i(1200, 600, 0);

    glBegin(GL_TRIANGLES);
glColor3f(0.17, 0.59, 0.75);
    glVertex3i(0, 600, 0);
    glVertex3i(200, 800, 0);
    glVertex3i(400, 600, 0);


    glBegin(GL_TRIANGLES);
glColor3f(0.17, 0.59, 0.75);
    glVertex3i(240, 600, 0);
    glVertex3i(400, 760, 0);
    glVertex3i(580, 600, 0);




glEnd();

}


///house

void house()
{

///house1
glColor3f(0.5411764705882353, 0.0, 0.5411764705882353);

glBegin(GL_POLYGON);

    glVertex3i(220, 350, 0);
    glVertex3i(220, 450, 0);
    glVertex3i(380, 450, 0);
    glVertex3i(380, 350, 0);



glEnd();


glBegin(GL_POLYGON);
    glColor3f(0.2, 0.2, 1);
    glVertex3i(380, 450, 0);
    glVertex3i(300, 580, 0);
    glColor3f(0.4, 0.4, 1);
    glVertex3i(450, 610, 0);
    glVertex3i(540, 530, 0);

glEnd();

glBegin(GL_POLYGON);
    glColor3f(0.7, 0, 0.7);

    glVertex3i(380, 350, 0);
    glVertex3i(380, 450, 0);
    glColor3f(0.86, 0, 0.86);
    glVertex3i(540, 530, 0);
    glVertex3i(540, 440, 0);

glEnd();

glColor3f(0, 0, 1);
glBegin(GL_POLYGON);

    glVertex3i(220, 450, 0);
    glVertex3i(380, 450, 0);
    glVertex3i(300, 580, 0);



glEnd();


glColor3f(0.59, 0.59, 0);
glBegin(GL_POLYGON);

    glVertex3i(280, 350, 0);
    glVertex3i(320, 350, 0);
    glVertex3i(320, 430, 0);
    glVertex3i(280, 430, 0);


glEnd();

glBegin(GL_POLYGON);

    glVertex3i(440, 380, 0);
    glVertex3i(440, 460, 0);
    glColor3f(1,1,0);
    glVertex3i(480, 480, 0);
    glVertex3i(480, 405, 0);


glEnd();

}





int rad,x,y,a,b,h;
bool SE,E;

void sun()
{

glColor3f(0.9764705882352941, 0.4705882352941176, 0.0196078431372549);
a=1000;
b=1000;
x=0;
rad=50;
y=rad;
h=1-rad;
glBegin(GL_POLYGON);

glVertex3i(x+b,y+b,0);


if(h>=0)
{
    SE=true;
    E=false;
}
else

{
    E=true;
    SE=false;

}

while(y>=x)
{

    if(SE)
    {

        h=h+5+2*(x-y);


        if(h>=0)
{
    SE=true;
    E=false;
}
else

{
    E=true;
    SE=false;

}

x++;
y--;
glVertex3f(x+a, y+b ,0.0);

       glVertex3f(y+a, x+b, 0.0);
       glVertex3f(-y+a, x+b, 0.0);
       glVertex3f(-x+a, -y+b, 0.0);
       glVertex3f(-y+a, -x+b, 0.0);
       glVertex3f(y+a,-x+b , 0.0);
       glVertex3f(x+a, -y+b, 0.0);
       glVertex3f(x+a, y+b, 0.0);
         glVertex3f(-x+a, y+b, 0.0);
    }



    if(E)
    {

        h=h+3+2*x;
        if(h>=0)
{
    SE=true;
    E=false;
}
else

{
    E=true;
    SE=false;

}
x++;
glVertex3f(x+a, y+b,0.0);

       glVertex3i(y+a, x+b, 0.0);
      glVertex3i(-y+a, x+b, 0.0);
       glVertex3i(-x+a, -y+b, 0.0);
       glVertex3i(-y+a, -x+b, 0.0);
       glVertex3i(y+a,-x+b , 0.0);
       glVertex3i(x+a, -y+b, 0.0);
       glVertex3i(x+a, y+b, 0.0);
         glVertex3i(-x+a, y+b, 0.0);
    }




}




glEnd();

glColor3f(0.9764705882352941, 0.4705882352941176, 0.0196078431372549);
glBegin(GL_LINES);
glVertex3i(1000,1000,0);
glVertex3i(1000,950,0);


glEnd();



}

///boat


void boat()
{
    ///boat1
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);


    glVertex3i(30,140,0);
    glVertex3i(170,140,0);
    glVertex3i(170,100,0);
    glVertex3i(30,100,0);
    glEnd();

    glBegin(GL_TRIANGLES);


    glVertex3i(10,150,0);
    glVertex3i(30,140,0);
    glVertex3i(30,100,0);
    glEnd();

    glBegin(GL_TRIANGLES);


    glVertex3i(170,140,0);
    glVertex3i(170,100,0);
    glVertex3i(200,150,0);
    glEnd();

    glBegin(GL_TRIANGLES);


    glVertex3i(30,140,0);
    glVertex3i(60,180,0);
    glVertex3i(80,140,0);
    glEnd();

  glColor3f(1,0,0);
    glBegin(GL_POLYGON);


    glVertex3i(80,140,0);
    glVertex3i(60,180,0);
    glVertex3i(140,180,0);
    glVertex3i(170,140,0);
    glEnd();
    ///boat2
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);


    glVertex3i(230,150,0);
    glVertex3i(230,180,0);
    glVertex3i(120+50+200,180,0);
    glVertex3i(120+50+200,100+50,0);
    glEnd();

    glBegin(GL_TRIANGLES);


    glVertex3i(210,200,0);
    glVertex3i(230,180,0);
    glVertex3i(30+200,100+50,0);

    glEnd();

    glBegin(GL_TRIANGLES);


    glVertex3i(120+50+200,180,0);
    glVertex3i(400,200,0);
    glVertex3i(120+50+200,100+50,0);
    glEnd();

    glBegin(GL_TRIANGLES);


    glVertex3i(230,180,0);
    glVertex3i(260,220,0);
    glVertex3i(280,180,0);
    glEnd();


  glColor3f(1,0,0);
    glBegin(GL_POLYGON);


    glVertex3i(280,180,0);
    glVertex3i(260,220,0);
    glVertex3i(340,220,0);
    glVertex3i(120+50+200,180,0);
    glEnd();



}
//night
void night_effect()
{
     glColor3f(0 ,0 ,0);
    glBegin(GL_POLYGON);

    glVertex3i(0, 300, 0);
    glVertex3i(1200, 300, 0);
    glVertex3i(1200, 1200, 0);
    glVertex3i(0, 1200, 0);


glEnd();

}
//star
void star()
{
    //star1
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);

    glVertex3i(30, 1020, 0);
    glVertex3i(50, 1050, 0);
    glVertex3i(50, 1100, 0);

glEnd();
glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex3i(70, 1020, 0);
    glVertex3i(50, 1100, 0);
    glVertex3i(50, 1050, 0);
glEnd();
glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex3i(50, 1050, 0);
    glVertex3i(80, 1070, 0);
    glVertex3i(20, 1070, 0);
glEnd();

//star2
 glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);

    glVertex3i(30+60+60, 1020+60, 0);
    glVertex3i(50+60+60, 1050+60, 0);
    glVertex3i(50+60+60, 1100+60, 0);

glEnd();
glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex3i(70+60+60, 1020+60, 0);
    glVertex3i(50+60+60, 1100+60, 0);
    glVertex3i(50+60+60, 1050+60, 0);
glEnd();
glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex3i(50+60+60, 1050+60, 0);
    glVertex3i(80+60+60, 1070+60, 0);
    glVertex3i(20+60+60, 1070+60, 0);
glEnd();
//star3
 glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);

    glVertex3i(30+120+120, 1020, 0);
    glVertex3i(50+120+120, 1050, 0);
    glVertex3i(50+120+120, 1100, 0);

glEnd();
glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex3i(70+120+120, 1020, 0);
    glVertex3i(50+120+120, 1100, 0);
    glVertex3i(50+120+120, 1050, 0);
glEnd();
glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex3i(50+120+120, 1050, 0);
    glVertex3i(80+120+120, 1070, 0);
    glVertex3i(20+120+120, 1070, 0);
glEnd();
//star4
glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);

    glVertex3i(30+120+120+120, 1020+60, 0);
    glVertex3i(50+120+120+120, 1050+60, 0);
    glVertex3i(50+120+120+120, 1100+60, 0);

glEnd();
glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex3i(70+120+120+120, 1020+60, 0);
    glVertex3i(50+120+120+120, 1100+60, 0);
    glVertex3i(50+120+120+120, 1050+60, 0);
glEnd();
glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex3i(50+120+120+120, 1050+60, 0);
    glVertex3i(80+120+120+120, 1070+60, 0);
    glVertex3i(20+120+120+120, 1070+60, 0);
glEnd();

}
//moon
void moon()
{


glColor3f(1,1,1);


a=600;
b=1000;
x=0;
rad=50;
y=rad;
h=1-rad;

glVertex3i(x+a,y+b,0);


glBegin(GL_POLYGON);

glVertex3i(x+a,y+b,0);

if(h>=0)
{
    SE=true;
    E=false;
}
else

{
    E=true;
    SE=false;

}

while(y>=x)
{

    if(SE)
    {

        h=h+5+2*(x-y);


        if(h>=0)
{
    SE=true;
    E=false;
}
else

{
    E=true;
    SE=false;

}

x++;
y--;
glVertex3f(x+a, y+b ,0.0);

       glVertex3f(y+a, x+b, 0.0);
       glVertex3f(-y+a, x+b, 0.0);
       glVertex3f(-x+a, -y+b, 0.0);
       glVertex3f(-y+a, -x+b, 0.0);
       glVertex3i(-y+a, x+b, 0.0);
       glVertex3i(-x+a, -y+b, 0.0);
       glVertex3i(-y+a, -x+b, 0.0);
       glVertex3i(y+a,-x+b , 0.0);
       glVertex3i(x+a, -y+b, 0.0);
       glVertex3i(x+a, y+b, 0.0);
         glVertex3i(-x+a, y+b, 0.0);
    }




}




glEnd();

glColor3f(1, 1, 1);
glBegin(GL_LINES);
glVertex3i(601,980,0);
glVertex3i(601,950,0);
glVertex3i(600,980,0);
glVertex3i(600,950,0);



glEnd();


}



///clouds
void draw_object()
{
    if(day==1)
    {
        land();
        hill();
        tree();
        river();
        house();

         sun();



        glPushMatrix();
        glTranslatef(posx,0,0);
        boat();
        glPopMatrix();

    }
    else
    {

        night_effect();
        land();
        star();
        hill();
        tree();
        river();
        house();
        //sun();
        moon();
        glPushMatrix();
        glTranslatef(posx,0,0);
        boat();
        glPopMatrix();

    }
}


void display(void)
{

glClear(GL_COLOR_BUFFER_BIT);



  draw_object();

glFlush();
}
void keyboardFunc(unsigned char key, int x, int y)
{
	switch(key)
	{
    case 'n':
        day=0;
        display();
        break;
	case 'd':
        day=1;
        display();
        break;
        case 'N':
        day=0;
        display();
        break;
	case 'D':
        day=1;
        display();
        break;
	}

}
void update(int value) {


    if(posx>=1200)
    {
        posx=0;
    }
    else{
        posx++;
    }
    glutPostRedisplay();
	glutTimerFunc(10, update, 0);
}
void init(void)
{

glClearColor(0.6196078431372549,0.9333333333333333, 0.996078431372549, 1.0);

glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 1200.0, 0, 1200.0);


}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(1000, 600);
glutInitWindowPosition(0, 0);
glutCreateWindow("Village Scenario");


glutDisplayFunc(display);
glutKeyboardFunc(keyboardFunc);

init();
glutTimerFunc(25, update, 0);
glutMainLoop();
return 0;
}
