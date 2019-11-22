#include<windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.1416

float SPEED =10.0;
float i=0.0;
float m=0.0;
int a=1;
float carstrtagain;
int c1px1=-8+65;
int c1py1=-15;
int c1px2=-8+65;
int c1py2=-25;
int c1px3=15+65;
int c1py3=-25;
int c1px4=15+65;
int c1py4=-15;


int c1px7=-3.5+65;
int c1py7=-15;
int c1px8=0+65;
int c1py8=-6;
int c1px9=10+65;
int c1py9=-6;
int c1px10=12+65;
int c1py10=-15;

int c1w1px1=-2.5+65;
int c1w1py1=-15;
int c1w1px2=0+65;
int c1w1py2=-7;
int c1w1px3=4.5+65;
int c1w1py3=-7;
int c1w1px4=4.5+65;
int c1w1py4=-15;

int c1w2px1=5.5+65;
int c1w2py1=-15;
int c1w2px2=5.5+65;
int c1w2py2=-7;
int c1w2px3=10+65;
int c1w2py3=-7;
int c1w2px4=11+65;
int c1w2py4=-15;

int car1c1px=-2.5+65;
int car1c1py=-25;

int car1c2px=11.5+65;
int car1c2py=-25;

int fx=-27.5;
int fy=-47.25;
float fi=0.0;
float f=1.0;


int day=1;
int play=1;
int stop=0;

int rm=70;
int rmh=9;
int rmt=6;
int rml=6;
int rmtoe=10;

void circle(float radius_x, float radius_y)
{
	int i = 0;
	float angle = 0.0;

	glBegin(GL_POLYGON);

		for(i = 0; i < 100; i++)
		{
			angle = 2 * PI * i / 100;
			glVertex3f (cos(angle) * radius_x, sin(angle) * radius_y, 0);
		}

	glEnd();
}



void drawing()
{
        if(day == 1)
        {
            glPushMatrix(); // sky
            //glColor3f(0.0, 0.8039, 0.0);
            glBegin(GL_POLYGON);
                glColor3f(1.0, 1.0, 1.0);
                glVertex2f(-50, 50);

                glColor3f(0.0, 154.0/255.0, 205.0/255.0);
                glVertex2f(-50, -5);

               glColor3f(0.0, 154.0/255.0, 205.0/255.0);
                glVertex2f(50, -5);

                glColor3f(1.0, 1.0, 1.0);
                glVertex2f(50, 50);
            glEnd();
            glPopMatrix();








             glPushMatrix(); // sun

            glColor3f(1.0, 1.0, 0.0);

            glTranslatef(-23.75,40, 0);
            circle(4,6);

            glPopMatrix();











            glPushMatrix(); // field upper road
            glColor3f(0.0, 0.8039, 0.0);
            glBegin(GL_POLYGON);
                glVertex2f(-50, 5);
                glVertex2f(-50, -5);
                glVertex2f(50, -5);
                glVertex2f(50, 5);
            glEnd();
            glPopMatrix();



             glPushMatrix(); // field below road
            glColor3f(0.0, 0.8039, 0.0);
            glBegin(GL_POLYGON);
                glVertex2f(-50, -35);
                glVertex2f(-50, -50);
                glVertex2f(50, -50);
                glVertex2f(50, -35);
            glEnd();
            glPopMatrix();
            glPushMatrix(); //man head

            glColor3f(1.0, 1.0, 1.0);

            glTranslatef(20.75,-30, 0);
            circle(1,3.25);

            glPopMatrix();



        glPushMatrix(); // road
            glColor3f(0.411, 0.411, 0.411);
            glBegin(GL_POLYGON);
                glVertex2f(-50, -5);
                glVertex2f(-50, -35);
                glVertex2f(50, -35);
                glVertex2f(50, -5);
            glEnd();
        glPopMatrix();

        glPushMatrix();
            glColor3f(255.0, 255.0, 255.0); //road divider left most 1
            glBegin(GL_POLYGON);
                glVertex2f(-45, -19);
                glVertex2f(-45, -21);
                glVertex2f(-35, -21);
                glVertex2f(-35, -19);
            glEnd();
        glPopMatrix();

       glPushMatrix();
            glColor3f(255.0, 255.0, 255.0); //road divider 2
            glBegin(GL_POLYGON);
                glVertex2f(-25, -19);
                glVertex2f(-25, -21);
                glVertex2f(-15, -21);
                glVertex2f(-15, -19);
            glEnd();
        glPopMatrix();

         glPushMatrix();
            glColor3f(255.0, 255.0, 255.0); //road divider 3
            glBegin(GL_POLYGON);
                glVertex2f(-5, -19);
                glVertex2f(-5, -21);
                glVertex2f(5, -21);
                glVertex2f(5, -19);
            glEnd();
        glPopMatrix();

         glPushMatrix();
            glColor3f(255.0, 255.0, 255.0); //road divider 4
            glBegin(GL_POLYGON);
                glVertex2f(15, -19);
                glVertex2f(15, -21);
                glVertex2f(25, -21);
                glVertex2f(25, -19);
            glEnd();
        glPopMatrix();

        glPushMatrix();
            glColor3f(255.0, 255.0, 255.0); //road divider 5
            glBegin(GL_POLYGON);
                glVertex2f(35, -19);
                glVertex2f(35, -21);
                glVertex2f(45, -21);
                glVertex2f(45, -19);
            glEnd();
        glPopMatrix();

         glPushMatrix();
           // glColor3f(1.0, 0.0, 0.0); //lamppost 1
            glBegin(GL_POLYGON);
                glColor3f(0.827, 0.827, 0.827);
                glVertex2f(29.5, 25);

                glColor3f(0.439, 0.501, 0.564);
                glVertex2f(29.5, -5);

                glColor3f(0.184, 0.309, 0.309);
                glVertex2f(31, -5);

                glColor3f(0.0, 0.0, 0.0);
                glVertex2f(31, 25);



            glEnd();
        glPopMatrix();

        glPushMatrix();
            glColor3f(255.0, 255.0, 255.0); //lamppost divider
            glBegin(GL_POLYGON);
                glVertex2f(29, -4);
                glVertex2f(29, -5);
                glVertex2f(31.5, -5);
                glVertex2f(31.5, -4);

            glEnd();
        glPopMatrix();

         glPushMatrix();
           // glColor3f(1.0, 0.0, 0.0); //lamppost 1
            glBegin(GL_POLYGON);
                glColor3f(0.827, 0.827, 0.827);
                glVertex2f(19.5, 35);

                glColor3f(0.439, 0.501, 0.564);
                glVertex2f(19.5, 33.5);

                glColor3f(0.184, 0.309, 0.309);
                glVertex2f(22, 33.5);

                glColor3f(0.0, 0.0, 0.0);
                glVertex2f(22, 35);



            glEnd();
        glPopMatrix();


          glPushMatrix();
           // glColor3f(1.0, 0.0, 0.0); //lamppost 1
            glBegin(GL_POLYGON);
                glColor3f(0.827, 0.827, 0.827);
                glVertex2f(22, 35);

                glColor3f(0.439, 0.501, 0.564);
                glVertex2f(22, 33.5);

                glColor3f(0.184, 0.309, 0.309);
                glVertex2f(29.5, 25);

                glColor3f(0.0, 0.0, 0.0);
                glVertex2f(31, 25);



            glEnd();
        glPopMatrix();

    glPushMatrix(); //lamppost 1 light

	glColor3f(1.0, 1.0, 1.0);

	glTranslatef(20.75,30, 0);
	circle(1,3.25);

	glPopMatrix();


	//lamppos 2 srt



	glPushMatrix();
           // glColor3f(1.0, 0.0, 0.0); //lamppost 1
            glBegin(GL_POLYGON);
                glColor3f(0.827, 0.827, 0.827);
                glVertex2f(-31, 25);

                glColor3f(0.439, 0.501, 0.564);
                glVertex2f(-31, -5);

                glColor3f(0.184, 0.309, 0.309);
                glVertex2f(-29.5, -5);

                glColor3f(0.0, 0.0, 0.0);
                glVertex2f(-29.5, 25);



            glEnd();
        glPopMatrix();

        glPushMatrix();
            glColor3f(255.0, 255.0, 255.0); //lamppost divider
            glBegin(GL_POLYGON);
                glVertex2f(-29, -4);
                glVertex2f(-29, -5);
                glVertex2f(-31.5, -5);
                glVertex2f(-31.5, -4);

            glEnd();
        glPopMatrix();

         glPushMatrix();
           // glColor3f(1.0, 0.0, 0.0); //lamppost 1
            glBegin(GL_POLYGON);
                glColor3f(0.827, 0.827, 0.827);
                glVertex2f(-41, 35);

                glColor3f(0.439, 0.501, 0.564);
                glVertex2f(-41, 33.5);

                glColor3f(0.184, 0.309, 0.309);
                glVertex2f(-38.5, 33.5);

                glColor3f(0.0, 0.0, 0.0);
                glVertex2f(-38.5, 35);



            glEnd();
        glPopMatrix();


          glPushMatrix();
           // glColor3f(1.0, 0.0, 0.0); //lamppost 2
            glBegin(GL_POLYGON);
                glColor3f(0.827, 0.827, 0.827);
                glVertex2f(-38.5, 35);

                glColor3f(0.439, 0.501, 0.564);
                glVertex2f(-38.5, 33.5);

                glColor3f(0.184, 0.309, 0.309);
                glVertex2f(-31, 25);

                glColor3f(0.0, 0.0, 0.0);
                glVertex2f(-29.5, 25);



            glEnd();
        glPopMatrix();

        glPushMatrix(); //lamppost 2 light

	glColor3f(1.0, 1.0, 1.0);

	glTranslatef(-39.75,30,5);
	circle(1,3.25);

	glPopMatrix();

	//car strt...............

	  glPushMatrix(); // car1
            glColor3f(1.0, 0.0, 0.0);
            glBegin(GL_POLYGON);
                glVertex2f(c1px1-i, c1py1);
                glVertex2f(c1px2-i, c1py2);
                 glVertex2f(c1px3-i, c1py3);
                glVertex2f(c1px4-i, c1py4);


            glEnd();
        glPopMatrix();




         glPushMatrix(); // car1
            glColor3f(1.0, 0.0, 0.0);
            glBegin(GL_POLYGON);

                 glVertex2f(c1px7-i, c1py7);
                 glVertex2f(c1px8-i, c1py8);
                 glVertex2f(c1px9-i, c1py9);
                glVertex2f(c1px10-i, c1py10);


            glEnd();
        glPopMatrix();

        glPushMatrix(); // car1 window 1
            glColor3f(0.0, 0.0, 0.0);
            glBegin(GL_POLYGON);

                 glVertex2f(c1w1px1-i, c1w1py1);
                 glVertex2f(c1w1px2-i, c1w1py2);
                 glVertex2f(c1w1px3-i, c1w1py3);
                glVertex2f(c1w1px4-i, c1w1py4);


            glEnd();
        glPopMatrix();


        glPushMatrix(); // car1 window 2
            glColor3f(0.0, 0.0, 0.0);
            glBegin(GL_POLYGON);

                 glVertex2f(c1w2px1-i, c1w2py1);
                 glVertex2f(c1w2px2-i, c1w2py2);
                 glVertex2f(c1w2px3-i, c1w2py3);
                glVertex2f(c1w2px4-i, c1w2py4);


            glEnd();
        glPopMatrix();

    glPushMatrix(); //wheel left
    glColor3f(0.0, 0.0, 0.0);

	glTranslatef(car1c1px-i,car1c1py,0);
	circle(2.25,3.5);

	glPopMatrix();


	 glPushMatrix(); //wheel right
    glColor3f(0.0, 0.0, 0.0);

	glTranslatef(car1c2px-i,car1c2py,0);
	circle(2.25,3.5);

	glPopMatrix();


	 glPushMatrix(); //man head

	 glColor3f(244.0/255.0, 164.0/255.0, 96.0/255.0);

	glTranslatef(-36.25,-15, 0);
	circle(1.25,3.25);

	glPopMatrix();

	 glPushMatrix(); // man body
            glColor3f(0.0/255.0, 205.0/255, 205.0/255.0);
            glBegin(GL_POLYGON);
                glVertex2f(-37, -18.25);
                glVertex2f(-38.5, -19.25);
                glVertex2f(-38.5, -31);
                glVertex2f(-34, -31);
                glVertex2f(-34, -19.25);
                glVertex2f(-35.5, -18.25);
            glEnd();
            glPopMatrix();
             glPushMatrix(); // man shoulder
         //glColor3f(0.0/255.0, 205.0/255, 205.0/255.0);
            glBegin(GL_POLYGON);
            glColor3f(0.0/255.0, 205.0/255, 205.0/255.0);
                glVertex2f(-37, -20.25);
                glColor3f(0.0/255.0, 139.0/255, 139.0/255.0);
                glVertex2f(-37, -26.25);
                glColor3f(0.0/255.0, 139.0/255, 139.0/255.0);
                glVertex2f(-35.85, -26.25);
                glColor3f(0.0/255.0, 205.0/255, 205.0/255.0);
                glVertex2f(-35.85, -20.25);
            glEnd();
            glPopMatrix();
            glPushMatrix(); // man hand
            glColor3f(244.0/255.0, 164.0/255.0, 96.0/255.0);
            glBegin(GL_POLYGON);
                glVertex2f(-37, -26.25);
                glVertex2f(-32, -32.25);

                glVertex2f(-32, -30.75);
                glVertex2f(-35.85, -26.25);
            glEnd();
            glPopMatrix();







         glPushMatrix(); // man trouser
            //glColor3f(1.0, 1.0, 1.0);
            glBegin(GL_POLYGON);
                glColor3f(1.0, 1.0, 1.0);
                glVertex2f(-38.5, -31);
                glColor3f(1.0, 1.0, 1.0);
                glVertex2f(-38.5, -40.25);
                 glColor3f(139.0/255.0, 139.0/255.0, 131.0/255.0);
                glVertex2f(-36, -40.25);
                 glColor3f(139.0/255.0, 139.0/255.0, 131.0/255.0);
                glVertex2f(-34, -31);

            glEnd();
            glPopMatrix();
            glPushMatrix(); // man leg
            glColor3f(244.0/255.0, 164.0/255.0, 96.0/255.0);
            glBegin(GL_POLYGON);
                glVertex2f(-38.25, -40.25);
                glVertex2f(-38.25, -48.25);
                glVertex2f(-36.5, -48.25);
                glVertex2f(-36.5, -40.25);

            glEnd();
            glPopMatrix();


         glPushMatrix(); // man toe
           glColor3f(0.0/255.0, 0.0/255, 0.0/255.0);
            glBegin(GL_POLYGON);
                glVertex2f(-38.25, -48.25);
                glVertex2f(-38.25, -49.25);
                glVertex2f(-34.5, -49.25);
                glVertex2f(-36.5, -47.25);

            glEnd();
            glPopMatrix();






       glPushMatrix(); // man trouser play
            //glColor3f(1.0, 1.0, 1.0);
            glBegin(GL_POLYGON);
             glColor3f(1.0, 1.0, 1.0);
                glVertex2f(-38.5, -31);
                 glColor3f(1.0, 1.0, 1.0);
                glVertex2f(-35, -40.25);
                glColor3f(139.0/255.0, 139.0/255.0, 131.0/255.0);
                glVertex2f(-32.5, -40.25);
                glColor3f(139.0/255.0, 139.0/255.0, 131.0/255.0);
                glVertex2f(-34, -31);

            glEnd();
            glPopMatrix();


         glPushMatrix(); // man leg play
             glColor3f(244.0/255.0, 164.0/255.0, 96.0/255.0);
            glBegin(GL_POLYGON);
                glVertex2f(-37.25+2.5, -40.25);
                glVertex2f(-37.25+4.5, -48.25);
                glVertex2f(-35.5+4.5, -48.25);
                glVertex2f(-35.5+2.5, -40.25);

            glEnd();
            glPopMatrix();


         glPushMatrix(); // man toe play
            glColor3f(0.0/255.0, 0.0/255, 0.0/255.0);
            glBegin(GL_POLYGON);
                glVertex2f(-37.25+4.5, -48.25);
                glVertex2f(-37.25+4.5, -49.25);
                glVertex2f(-34+4.5, -47.25);
                glVertex2f(-35.5+4, -46.25);

            glEnd();
            glPopMatrix();

            /*if(stop == 0 )
            {
                glPushMatrix(); //football
                glColor3f(0.0, 0.8039, 0.0);

                glTranslatef(fx,fy,0);
                circle(2.25,3.5);
                glPopMatrix();
            }
            else
            {
                glPushMatrix(); //football
                 glColor3f(0.0, 0.8039, 0.0);

                glTranslatef(fx+fi,fy,0);
                circle(2.25,3.5);
                glPopMatrix();
            }*/






            if(play == 1 || stop == 0 )
            {
                glPushMatrix(); //football
                glColor3f(0.0, 0.0, 0.0);

                glTranslatef(fx,fy,0);
                circle(2.25,3.5);
                glPopMatrix();
            }
            else if(play == 0 || stop == 1)
            {
                glPushMatrix(); //football
                glColor3f(0.0, 0.0, 0.0);

                glTranslatef(fx+fi,fy,0);
                circle(2.25,3.5);
                glPopMatrix();
            }








	glPushMatrix(); //man head

	 glColor3f(244.0/255.0, 164.0/255.0, 96.0/255.0);

	glTranslatef(-36.25+rm,-15, 0);
	circle(1.25,3.25);

	glPopMatrix();

	 glPushMatrix(); // man body
            glColor3f(0.0, 0.0, 1.0);
            glBegin(GL_POLYGON);
                glVertex2f(-37+rm, -18.25);
                glVertex2f(-38.5+rm, -19.25);
                glVertex2f(-38.5+rm, -31);
                glVertex2f(-34+rm, -31);
                glVertex2f(-34+rm, -19.25);
                glVertex2f(-35.5+rm, -18.25);
            glEnd();
            glPopMatrix();
             glPushMatrix(); // man shoulder
           glColor3f(244.0/255.0, 164.0/255.0, 96.0/255.0);
            glBegin(GL_POLYGON);
                glVertex2f(-37+rm, -20.25);
                glVertex2f(-37+rm, -26.25);

                glVertex2f(-35.85+rm, -26.25);
                glVertex2f(-35.85+rm, -20.25);
            glEnd();
            glPopMatrix();
            glPushMatrix(); // man hand
           glColor3f(244.0/255.0, 164.0/255.0, 96.0/255.0);
            glBegin(GL_POLYGON);
                glVertex2f(-37+rm, -26.25);
                glVertex2f(-32+rm-rmh, -32.25);

                glVertex2f(-32+rm-rmh, -30.75);
                glVertex2f(-35.85+rm, -26.25);
            glEnd();
            glPopMatrix();







         glPushMatrix(); // man trouser
           // glColor3f(1.0, 1.0, 1.0);
            glBegin(GL_POLYGON);
            glColor3f(1.0, 1.0, 1.0);
                glVertex2f(-38.5+rm, -31);
                glColor3f(1.0, 1.0, 1.0);
                glVertex2f(-38.5+rm+2, -40.25);
                 glColor3f(139.0/255.0, 139.0/255.0, 131.0/255.0);
                glVertex2f(-36+rm+2, -40.25);
                 glColor3f(139.0/255.0, 139.0/255.0, 131.0/255.0);
                glVertex2f(-34+rm, -31);

            glEnd();
            glPopMatrix();
            glPushMatrix(); // man leg
            glColor3f(244.0/255.0, 164.0/255.0, 96.0/255.0);
            glBegin(GL_POLYGON);
                glVertex2f(-38.25+rm+2, -40.25);
                glVertex2f(-38.25+rm+2, -48.25);
                glVertex2f(-36.5+rm+2, -48.25);
                glVertex2f(-36.5+rm+2, -40.25);

            glEnd();
            glPopMatrix();


         glPushMatrix(); // man toe
             glColor3f(0.0/255.0, 0.0/255.0, 0.0/255.0);
            glBegin(GL_POLYGON);
                glVertex2f(-38.25+rm+2+2, -48.25);
                glVertex2f(-38.25+rm+2+2, -49.25);
                glVertex2f(-34.5+rm-4, -49.25);
                glVertex2f(-36.5+rm, -47.25);

            glEnd();
            glPopMatrix();






       glPushMatrix(); // man trouser play
            //glColor3f(1.0, 0.0, 1.0);
            glBegin(GL_POLYGON);
            glColor3f(139.0/255.0, 139.0/255.0, 131.0/255.0);
                glVertex2f(-38.5+rm, -31);
                glColor3f(139.0/255.0, 139.0/255.0, 131.0/255.0);
                glVertex2f(-35+rm-rmt, -40.25);
                 glColor3f(1.0, 1.0, 1.0);
                glVertex2f(-32.5+rm-rmt, -40.25);
                 glColor3f(1.0, 1.0, 1.0);
                glVertex2f(-34+rm, -31);

            glEnd();
            glPopMatrix();


         glPushMatrix(); // man leg play
             glColor3f(244.0/255.0, 164.0/255.0, 96.0/255.0);
            glBegin(GL_POLYGON);
                glVertex2f(-37.25+2.5+rm-rml, -40.25);
                glVertex2f(-37.25+4.5+rm-rml-5, -48.25);
                glVertex2f(-35.5+4.5+rm-rml-5, -48.25);
                glVertex2f(-35.5+2.5+rm-rml, -40.25);

            glEnd();
            glPopMatrix();


         glPushMatrix(); // man toe play
            glColor3f(0.0/255.0, 0.0/255.0, 0.0/255.0);
            glBegin(GL_POLYGON);
                glVertex2f(-37.25+4.5+rm-rmtoe, -48.25);
                glVertex2f(-37.25+4.5+rm-rmtoe, -49.25);
                glVertex2f(-34+4.5+rm-rmtoe-7, -47.25);
                glVertex2f(-35.5+4+rm-rmtoe, -46.25);

            glEnd();
            glPopMatrix();











        }
    else // night....................................
    {
        glPushMatrix(); // sky
            //glColor3f(0.0, 0.0, 0.55);
            glBegin(GL_POLYGON);
 glColor3f(0.0, 0.0, 0.55);
                glVertex2f(-50, 50);

 glColor3f(0.0, 0.0, 0.0);
                glVertex2f(-50, -5);

 glColor3f(0.0, 0.0, 0.0);
                glVertex2f(50, -5);

 glColor3f(0.0, 0.0, 0.55);
                glVertex2f(50, 50);
            glEnd();
            glPopMatrix();


             glPushMatrix(); // moon

            glColor3f(1.0, 1.0, 1.0);

            glTranslatef(-13.75,45, 0);
            circle(2,4);

            glPopMatrix();

             glPushMatrix(); // moon

            glColor3f(0.0, 0.0, 0.55);

            glTranslatef(-14.95,49, 0);
            circle(3,6.9);

            glPopMatrix();








         glPushMatrix(); // field upper road
            glColor3f(0.0, 0.545, 0.0);
            glBegin(GL_POLYGON);
                glVertex2f(-50, 5);
                glVertex2f(-50, -5);
                glVertex2f(50, -5);
                glVertex2f(50, 5);
            glEnd();
            glPopMatrix();



             glPushMatrix(); // field below road
            glColor3f(0.0, 0.545, 0.0);
            glBegin(GL_POLYGON);
                glVertex2f(-50, -35);
                glVertex2f(-50, -50);
                glVertex2f(50, -50);
                glVertex2f(50, -35);
            glEnd();
            glPopMatrix();








        glPushMatrix(); // road
            glColor3f(0.411, 0.411, 0.411);
            glBegin(GL_POLYGON);
                glVertex2f(-50, -5);
                glVertex2f(-50, -35);
                glVertex2f(50, -35);
                glVertex2f(50, -5);
            glEnd();
        glPopMatrix();

        glPushMatrix();
            glColor3f(255.0, 255.0, 255.0); //road divider left most 1
            glBegin(GL_POLYGON);
                glVertex2f(-45, -19);
                glVertex2f(-45, -21);
                glVertex2f(-35, -21);
                glVertex2f(-35, -19);
            glEnd();
        glPopMatrix();

       glPushMatrix();
            glColor3f(255.0, 255.0, 255.0); //road divider 2
            glBegin(GL_POLYGON);
                glVertex2f(-25, -19);
                glVertex2f(-25, -21);
                glVertex2f(-15, -21);
                glVertex2f(-15, -19);
            glEnd();
        glPopMatrix();

         glPushMatrix();
            glColor3f(255.0, 255.0, 255.0); //road divider 3
            glBegin(GL_POLYGON);
                glVertex2f(-5, -19);
                glVertex2f(-5, -21);
                glVertex2f(5, -21);
                glVertex2f(5, -19);
            glEnd();
        glPopMatrix();

         glPushMatrix();
            glColor3f(255.0, 255.0, 255.0); //road divider 4
            glBegin(GL_POLYGON);
                glVertex2f(15, -19);
                glVertex2f(15, -21);
                glVertex2f(25, -21);
                glVertex2f(25, -19);
            glEnd();
        glPopMatrix();

        glPushMatrix();
            glColor3f(255.0, 255.0, 255.0); //road divider 5
            glBegin(GL_POLYGON);
                glVertex2f(35, -19);
                glVertex2f(35, -21);
                glVertex2f(45, -21);
                glVertex2f(45, -19);
            glEnd();
        glPopMatrix();

         glPushMatrix();
           // glColor3f(1.0, 0.0, 0.0); //lamppost 1
            glBegin(GL_POLYGON);
                glColor3f(0.827, 0.827, 0.827);
                glVertex2f(29.5, 25);

                glColor3f(0.439, 0.501, 0.564);
                glVertex2f(29.5, -5);

                glColor3f(0.184, 0.309, 0.309);
                glVertex2f(31, -5);

                glColor3f(0.0, 0.0, 0.0);
                glVertex2f(31, 25);



            glEnd();
        glPopMatrix();

        glPushMatrix();
            glColor3f(255.0, 255.0, 255.0); //lamppost divider
            glBegin(GL_POLYGON);
                glVertex2f(29, -4);
                glVertex2f(29, -5);
                glVertex2f(31.5, -5);
                glVertex2f(31.5, -4);

            glEnd();
        glPopMatrix();

         glPushMatrix();
           // glColor3f(1.0, 0.0, 0.0); //lamppost 1
            glBegin(GL_POLYGON);
                glColor3f(0.827, 0.827, 0.827);
                glVertex2f(19.5, 35);

                glColor3f(0.439, 0.501, 0.564);
                glVertex2f(19.5, 33.5);

                glColor3f(0.184, 0.309, 0.309);
                glVertex2f(22, 33.5);

                glColor3f(0.0, 0.0, 0.0);
                glVertex2f(22, 35);



            glEnd();
        glPopMatrix();


          glPushMatrix();
           // glColor3f(1.0, 0.0, 0.0); //lamppost 1
            glBegin(GL_POLYGON);
                glColor3f(0.827, 0.827, 0.827);
                glVertex2f(22, 35);

                glColor3f(0.439, 0.501, 0.564);
                glVertex2f(22, 33.5);

                glColor3f(0.184, 0.309, 0.309);
                glVertex2f(29.5, 25);

                glColor3f(0.0, 0.0, 0.0);
                glVertex2f(31, 25);



            glEnd();
        glPopMatrix();

        glPushMatrix(); //lamppost 1 light

	glColor3f(1.0, 0.843, 0.0);

	glTranslatef(20.75,30,5);
	circle(1,3.25);

	glPopMatrix();

	//car strt...............
   glPushMatrix(); // car1
            glColor3f(1.0, 0.0, 0.0);
            glBegin(GL_POLYGON);
                glVertex2f(c1px1-i, c1py1);
                glVertex2f(c1px2-i, c1py2);
                 glVertex2f(c1px3-i, c1py3);
                glVertex2f(c1px4-i, c1py4);


            glEnd();
        glPopMatrix();

         glPushMatrix(); // car1
            glColor3f(1.0, 0.0, 0.0);
            glBegin(GL_POLYGON);

                 glVertex2f(c1px7-i, c1py7);
                 glVertex2f(c1px8-i, c1py8);
                 glVertex2f(c1px9-i, c1py9);
                glVertex2f(c1px10-i, c1py10);


            glEnd();
        glPopMatrix();

        glPushMatrix(); // car1 window 1
            glColor3f(0.0, 0.0, 0.0);
            glBegin(GL_POLYGON);

                 glVertex2f(c1w1px1-i, c1w1py1);
                 glVertex2f(c1w1px2-i, c1w1py2);
                 glVertex2f(c1w1px3-i, c1w1py3);
                glVertex2f(c1w1px4-i, c1w1py4);


            glEnd();
        glPopMatrix();


        glPushMatrix(); // car1 window 2
            glColor3f(0.0, 0.0, 0.0);
            glBegin(GL_POLYGON);

                 glVertex2f(c1w2px1-i, c1w2py1);
                 glVertex2f(c1w2px2-i, c1w2py2);
                 glVertex2f(c1w2px3-i, c1w2py3);
                glVertex2f(c1w2px4-i, c1w2py4);


            glEnd();
        glPopMatrix();

    glPushMatrix(); //wheel left
    glColor3f(0.0, 0.0, 0.0);

	glTranslatef(car1c1px-i,car1c1py,0);
	circle(2.25,3.5);

	glPopMatrix();


	 glPushMatrix(); //wheel right
    glColor3f(0.0, 0.0, 0.0);

	glTranslatef(car1c2px-i,car1c2py,0);
	circle(2.25,3.5);

	glPopMatrix();


	//lamppos 2 srt



	glPushMatrix();
           // glColor3f(1.0, 0.0, 0.0); //lamppost 1
            glBegin(GL_POLYGON);
                glColor3f(0.827, 0.827, 0.827);
                glVertex2f(-31, 25);

                glColor3f(0.439, 0.501, 0.564);
                glVertex2f(-31, -5);

                glColor3f(0.184, 0.309, 0.309);
                glVertex2f(-29.5, -5);

                glColor3f(0.0, 0.0, 0.0);
                glVertex2f(-29.5, 25);



            glEnd();
        glPopMatrix();

        glPushMatrix();
            glColor3f(255.0, 255.0, 255.0); //lamppost divider
            glBegin(GL_POLYGON);
                glVertex2f(-29, -4);
                glVertex2f(-29, -5);
                glVertex2f(-31.5, -5);
                glVertex2f(-31.5, -4);

            glEnd();
        glPopMatrix();

         glPushMatrix();
           // glColor3f(1.0, 0.0, 0.0); //lamppost 1
            glBegin(GL_POLYGON);
                glColor3f(0.827, 0.827, 0.827);
                glVertex2f(-41, 35);

                glColor3f(0.439, 0.501, 0.564);
                glVertex2f(-41, 33.5);

                glColor3f(0.184, 0.309, 0.309);
                glVertex2f(-38.5, 33.5);

                glColor3f(0.0, 0.0, 0.0);
                glVertex2f(-38.5, 35);



            glEnd();
        glPopMatrix();


          glPushMatrix();
           // glColor3f(1.0, 0.0, 0.0); //lamppost 2
            glBegin(GL_POLYGON);
                glColor3f(0.827, 0.827, 0.827);
                glVertex2f(-38.5, 35);

                glColor3f(0.439, 0.501, 0.564);
                glVertex2f(-38.5, 33.5);

                glColor3f(0.184, 0.309, 0.309);
                glVertex2f(-31, 25);

                glColor3f(0.0, 0.0, 0.0);
                glVertex2f(-29.5, 25);
            glEnd();
        glPopMatrix();

        glPushMatrix(); //lamppost 2 light

	glColor3f(1.0, 0.843, 0.0);

	glTranslatef(-39.75,30,5);
	circle(1,3.25);

	glPopMatrix();

	if(c1px1-i >= -20 && c1px1-i <= 33)
    {
        glPushMatrix(); // light 1
           // glColor3f(1.0, 0.843, 0.0);
            glBegin(GL_POLYGON);
                glColor3f(1.0, 0.843, 0.0);
                glVertex2f(20.75, 33.5);
                glColor4f(1.0, 1.0, 0.878, 0.5);
                glVertex2f(0.75, -30);
                glColor4f(1.0, 1.0, 0.878, 0.5);
                glVertex2f(40.75, -30);

            glEnd();
        glPopMatrix();

    }



    if(c1px1-i >= -79.5 && c1px1-i <= -30)
    {

	glPushMatrix(); // light 2
           // glColor3f(1.0, 0.843, 0.0);
            glBegin(GL_POLYGON);
                glColor3f(1.0, 0.843, 0.0);
                glVertex2f(-39.75, 33.5);
                glColor4f(1.0, 1.0, 0.878, 0.5);
                glVertex2f(-59.5, -30);
                glColor4f(1.0, 1.0, 0.878, 0.5);
                glVertex2f(-19.75, -30);

            glEnd();
        glPopMatrix();

    }












        }



}




void idle()
{
    i+=SPEED/500;
    m+=0.25;
    if(i>140)
        i=0.0;
    if(m>1100)
        m=0.0;

if(play == 0 || stop == 1)
{
    if(f == 1)
    {
        fi+=SPEED/200;
            if(fi>=49)
            {
                f = 0;
            }
    }






    if(f == 0)
    {
        fi-=SPEED/200;
        if(fi<=0)
         {
             f = 1;
         }

    }



}
else if(play == 1 || stop == 0)
    {
        fi=0.0;
    }




    glutPostRedisplay();

}



void keyboardFunc( unsigned char key, int x, int y )
{
    switch( key )
    {

    case 'd':
    case 'D':
        day=1;
        glutPostRedisplay();
        break;

    case 'n':
    case 'N':
        day=0;
        glutPostRedisplay();
        break;
    case 'P':
    case 'p':
        play=0;
        stop=1;
        glutPostRedisplay();
          break;
    case 'S':
    case 's':
        stop=0;
        play=1;
        glutPostRedisplay();
        break;

    };

}

void init(void)
{
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glOrtho(-50.0, 50.0, -50.0, 50.0, -50.0, 50.0);
}



void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    drawing();

    glFlush();


}
int main(int argc,char** argv)
{
     glutInit(&argc,argv);
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize (1400, 700);
	glutInitWindowPosition (0, 0);
	glutCreateWindow ("Final Project");
	 /// Enable Transparency
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glEnable(GL_BLEND);

	glutDisplayFunc(display);
    glutIdleFunc(idle);
    glutKeyboardFunc(keyboardFunc);
	init();


	glutMainLoop();
	return 0;   /* ANSI C requires main to return int. */
}

