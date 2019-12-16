#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <dos.h>




void get_Z();
void zebra();


int main(){
  int gdriver = DETECT, gmode;
  initgraph(&gdriver, &gmode, "..\\bgi");
  char ch;
  setcolor(14);
  settextstyle(2,HORIZ_DIR,6);
  outtextxy(206, 0, ".....Welcome to My project.....");
  settextstyle(2,HORIZ_DIR,4);
  outtextxy(212, 20, "In this project I am going to draw a Zebra.");
  printf("\n\n\n  Enter z to see Zebra: ");
  scanf("%c",&ch);

  if(ch=='Z' || ch=='z'){
        get_Z();
  }
  else {
    printf("\n\n....Please enter Z.");
  }


    getch();
    return 0;
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

void zebra(){
   
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
