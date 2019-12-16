#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <dos.h>



void get_U();
void get_V();
void get_W();
void get_X();
void get_Y();
void get_Z();

void umbrella();
void vollyball();
void wheel();
void xray();
void yacht();
void zebra();





int main(){
    int gdriver = DETECT, gmode;
    initgraph(&gdriver, &gmode, "..\\bgi");
    char ch;
    setcolor(14);
   settextstyle(2,HORIZ_DIR,6);
  outtextxy(206, 0, ".....Welcome to Our project.....");
  settextstyle(2,HORIZ_DIR,4);
  outtextxy(212, 20, "In this project we show U,V,W,X,Y,Z alphabet");
  printf("\n\n\n  Enter a letter what you want to see: ");
  scanf("%c",&ch);

  if(ch=='U' || ch=='u'){
         get_U();
  }
  else if(ch=='V' || ch=='v'){
        get_V();
  }
  else if(ch=='W' || ch=='w'){
        get_W();
  }
  else if(ch=='X' || ch=='x'){
        get_X();
  }
  else if(ch=='Y' || ch=='y'){
        get_Y();
  }
  else if(ch=='Z' || ch=='z'){
        get_Z();
  }
  else {
    printf("\n\n....Please chose letter in U-V-W-X-Y-Z.Otherwise program has invalided....");
  }


    getch();
    return 0;
}

void get_U(){

  float r=70,h=300,k=135,y,x;
   float a = r/(sqrt(2));
    for( x=0; x<=a; x++){

       y=sqrt(r*r - x*x);
       putpixel(x+h,y+k,15);
       putpixel(-x+h,y+k,15);

       delay(20);
    }
    line(250,168+15,250,60+15);
    line(350,168+15,350,60+15);
    line(246,60+15,256,60+15);
    line(346,60+15,356,60+15);
    setcolor(14);
    settextstyle(2,HORIZ_DIR,5);
  outtextxy(270, 212, "Figure: U");
  outtextxy(150, 235, "...U for Umbrella Now see the Umbrella...");
  delay(1000);

  umbrella();
}

void get_V(){

     int x1 =250,y1=90,x2=300,y2=205;
  int xx1=350,yy1=90;
line(x1,y1,x2,y2);
line(xx1,yy1,x2,y2);
setcolor(14);
settextstyle(2,HORIZ_DIR,5);
  outtextxy(270, 212, "Figure: V");
  outtextxy(150, 235, "...V for Volleyball Now see the Volleyball...");
  delay(1000);

  vollyball();
}



void get_W()
{

line(250,90,275,205);
line(300,90,275,205);
line(300,90,325,205);
line(350,90,325,205);
setcolor(14);
settextstyle(2,HORIZ_DIR,5);
outtextxy(270, 212, "Figure: W");
outtextxy(150, 235, "Wheel for W and Below is the Wheel");
delay(1000);

 wheel();


}


void get_X(){

  setcolor(14);
    line(198,50,290,158);
    line(290,50,198,158);


    settextstyle(2,HORIZ_DIR,5);

    outtextxy(220, 180, "Figure: X");
    settextstyle(2,HORIZ_DIR,5);
    outtext(" ");
    outtextxy(155, 210, "...X for X-ray Now see the X-ray...");
    delay(1000);
  xray();

}


void get_Y(){


      int x1 =250,y1=75,x2=285,y2=145;
      setcolor(15);
   line(x1,y1,x2,y2);
  line(320,y1,x2,y2);
  line(x2,y2,x2,205);
  setcolor(14);
settextstyle(2,HORIZ_DIR,5);
  outtextxy(256, 209, "Figure: Y");
  outtextxy(165, 232, "...Y for Yacht Now see the Yacht...");
delay(1000);
  yacht();

}

void get_Z(){

   setcolor(10);
    line(300,50,380,50);
    line(380,50,300,130);
    line(300,130,380,130);

    setcolor(15);
    outtext(" ");
    settextstyle(3,HORIZ_DIR,2);
    outtextxy(300,150, "figure: Z");
    outtextxy(410, 60, "Zebra for Z");
    delay(2000);

    zebra();

}


void umbrella()
{
    pieslice(300, 320, 0, 180, 50);
    line(50+200,99+220,150+200,99+220);
    line(100+200,100+220,100+200,175+220);
    arc(80+200, 175+220, 180, 360, 20);
    setcolor(14);
    outtextxy(230, 175+248, "Figure: Umbrella");

}


void vollyball()
{

     setcolor(14);
   circle(300,360,80);
   setfillstyle(8,3);
   floodfill(300,360,14);

   setcolor(13);
   circle(300,360,53);
   setfillstyle(6,14);
   floodfill(300,360,13);

   setcolor(12);
   circle(300,360,19);
   setfillstyle(1,3);
   floodfill(305,360,12);
   setcolor(14);
   outtextxy(230, 455, "Figure: Volleyball");

}


void wheel()
{

     setcolor(4);
   circle(300,350,85);
   circle(300,350,65);
   setfillstyle(2,5);
   floodfill(380,350,4);
   circle(300,350,40);
   circle(300,350,20);
   setfillstyle(3,6);
   floodfill(335,350,4);
   setfillstyle(5,5);
   floodfill(301,350,4);
   line(340,350,365,350);
   line(260,350,235,350);
   line(300,310,300,285);
   line(300,390,300,415);

   delay(300);
   for(int i=0; i<=100; i++)
   {
       line(100+i,435,400+i,435);
       line(100+i,437,400+i,437);
        outtext(" ");
   settextstyle(4,HORIZ_DIR,3);
   outtextxy(250+i, 438, "Wheel");
       delay(200);
   }


}

void xray()
{
     setcolor(2);
    rectangle(250,250,400,450); /* increasing x coordinate by 150 and y coordinate by 200*/
    rectangle(270,270,380,430); /* decreasing x coordinate by 20 and y coordinate by 20 */
    line(250,250,270,270);
    line(400,250,380,270); /* Right up coordinate value of first rectangle is 400,250 */
    line(250,450,270,430); /* left down coordinate value of first rectangle is 250,450 */
    line(400,450,380,430);

    /*straight lines */

    line(280,270,280,430); /* y always starts from 270 and ends at 430 */
    line(290,270,290,430);
    line(300,270,300,430);
    line(310,270,310,430);
    line(320,270,320,430);       /* x starts from 280 and ends at 370 */
    line(330,270,330,430);
    line(340,270,340,430);
    line(350,270,350,430);
    line(360,270,360,430);
    line(370,270,370,430);

    setcolor(4);
    settextstyle(5,HORIZ_DIR,4);
    outtext(" ");
    outtextxy(290, 350, "X-Ray");
    delay(1000);


}
void yacht()
{

     int x1=250+50,y1=175+170;

    arc(x1,y1,180,360,100);

    int xx1=190+50,yy1=203+170,xx2=310+50;
    line(xx1,yy1,xx2,yy1);
    line(xx1,yy1,x1-100,y1);
    line(xx2,yy1,x1+100,y1);
    setcolor(14);
    line(x1-100,y1,x1-50,y1+60);
    line(x1+100,y1,xx2-10,y1+60);
    line(x1-50,y1+60,xx2-10,y1+60);


    setcolor(14);
    rectangle(xx1+40,yy1-110,xx1+43,yy1);
    floodfill(xx1+41,yy1-40,14);


    setcolor(15);
    circle(xx1+40,yy1-110,8);
    floodfill(xx1+40,yy1-110,15);

     setcolor(14);

    line(xx1,yy1,xx1+40,yy1-110);


    line(xx1+43,yy1-28,xx2-15,yy1-45);
    line(xx1+43,yy1-110,xx2-15,yy1-45);


    line(xx1+43,yy1-110,320,yy1-40);
    line(xx1+43,yy1-110,300,yy1-34);

    settextstyle(2,HORIZ_DIR,5);
  outtextxy(255, 455, "Figure: Yacht");

}

void zebra()
{
   setcolor(6);
    line(70,250,115,170);
    line(90,270,145,245);
    ellipse(92,242,-156,-90,23,30);
    ellipse(135,188,0,360,11,5); //eye
    circle(135,188,3);
    ellipse(155,205,5,130,90,59);
    ellipse(326,215,180,360,80,20);
    ellipse(475,215,13,182,70,40);
    ellipse(447,215,3,10,100,40);
    ellipse(470,223,0,10,80,40);
    ellipse(555,308,-50,90,10,80);
    ellipse(550,308,-50,87,10,80);
    line(555,227,548,222);
    line(553,234,546,229);
    line(559,315,559,370); //tail line
    line(564,315,564,370); //tail line
    ellipse(562,388,0,360,6,23); //tail ellipse
    ellipse(544,231,-70,0,5,30);
    ellipse(320,340,-160,-10,110,20);
    line(548,244,548,265);
    ellipse(539,265,-75,0,10,30);
    line(545,288,543,300);
    ellipse(533,296,-75,-20,10,20); //
    ellipse(145,275,10,90,40,30);
    line(184,269,200,320);
    ellipse(225,315,-170,-110,25,35);
    ellipse(240,324,-140,-90,40,30);
    ellipse(400,318,-90,-25,60,35);
    line(536,315,520,450); //second leg
    line(490,300,510,450); //second leg
    line(495,346,490,450); //second leg
    line(455,338,480,450); //second leg
    line(230,300,250,450); //first leg
    line(270,300,260,450); //first leg
    line(269,358,275,450); //first leg
    line(300,360,285,450); //first leg
    line(447,340,457,335);
    line(112,155,112,175);
    line(243,198,246,215);
    line(457,335,492,325);
    ellipse(256,455,0,360,9,10);
    ellipse(282,455,0,360,9,10);
    ellipse(485,455,0,360,9,10);
    ellipse(516,455,0,360,9,10);


      ellipse(83,210,260,270,4,60);
     ellipse(92,210,240,270,2,60);
     ellipse(92,210,-80,59,12,88);
     ellipse(100,193,-80,68,18,88);

     ellipse(107,163,-38,28,25,88);
     ellipse(107,182,-80,-25,25,88);

    ellipse(118,170,-84,38,30,88);
    ellipse(115,170,-80,28,45,88);
    ellipse(130,163,-80,19,45,88);
    ellipse(138,160,-86,9,55,88);
    ellipse(150,158,-90,0,58,88);
    ellipse(170,168,-90,0,55,85);
    ellipse(186,186,-90,0,54,84);
    ellipse(194,210,-90,0,52,84);
    ellipse(200,227,-90,0,62,92);
    ellipse(185,230,-77,0,95,120);
    ellipse(205,230,-77,-3,95,130);
    ellipse(225,230,-84,-3,95,140);
    ellipse(225,250,-83,-72,95,140);
    ellipse(225,290,-64,-45,95,100);
    ellipse(245,230,-73,-3,95,150);
    ellipse(265,230,-67,-3,95,160);
    ellipse(285,230,-64,0,95,170);
    ellipse(305,230,-62,5,95,180);
    ellipse(325,230,-62,22,95,180);
    ellipse(345,230,-60,27,95,180);
    ellipse(365,230,-58,30,95,180);
    ellipse(385,230,-53,31,95,180);
    ellipse(405,230,-51,30,95,180);
    ellipse(425,230,-58,28,95,180);
    ellipse(443,230,-68,20,95,180);
    ellipse(453,230,-72,-44,95,180);

    line(245,400,265,395);
     line(245,415,264,410);
      line(247,430,263,425);
      line(270,392,292,385);
      line(270,408,292,402);
      line(272,427,290,422);

      line(460,350,500,340);
      line(465,370,500,360);
       line(470,390,500,380);
       line(473,410,495,404);
        line(475,430,495,425);

         line(503,396,530,370);
          line(505,410,525,401);
           line(507,428,525,423);

          setcolor(6);
          outtext(" ");
          settextstyle(3,HORIZ_DIR,3);
          outtextxy(350, 400, "Zebra");

}

