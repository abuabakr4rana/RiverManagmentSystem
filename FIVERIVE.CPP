#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
void graph();
union REGS i,o;
void show_mouse()
{
i.x.ax=1;
int86(0x33,&i,&o);
}

void hide_mouse()
{
i.x.ax=2;
int86(0x33,&i,&o);
}
void get_mouse_pos(int &x,int &y,int &button)
{
i.x.ax=3;
int86(0x33,&i,&o);
x=o.x.cx;
y=o.x.dx;
button=o.x.bx&1;
}


void main()
{
int x1,x2,y1,y2,button;
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\tc\\bgi");
setbkcolor(3);
int a;
setcolor(5);
settextstyle(7,0,1);
outtextxy(20,2,"FLOOD MANEGMENT SYSTEM OF FIVE RIVERS OF PAKISTAN");
setcolor(15);
///////////////for line no1
line(49,60,48,75);
line(48,75,50,110);
line(50,110,59,170);
line(59,170,70,230);
line(70,230,80,310);
line(80,310,78,350);
///////////////for line no2
line(100,60,99,75);
line(99,75,104,110);
line(104,110,115,145);
line(115,145,120,180);
line(120,180,115,230);
line(115,230,105,270);
line(105,270,100,280);
line(100,280,90,295);
line(90,295,80,305);
//////////////for line no 3
line(150,60,149,75);
line(149,75,152,125);
line(152,125,150,160);
line(150,160,148,185);
line(148,185,141,210);
line(141,210,134,220);
line(134,220,113,236);
/////////////for line no 4
line(200,60,199,78);
line(199,78,196,132);
line(196,132,193,150);
line(193,150,189,165);
line(189,165,183,195);
line(183,195,173,220);
line(173,220,167,230);
line(167,230,157,242);
line(157,242,147,250);
line(147,250,134,258);
line(134,258,107,265);
/////////////for line no 5
line(250,60,249,78);
line(249,78,242,120);
line(242,120,238,132);
line(238,132,232,142);
line(232,142,216,154);
line(216,154,190,164);
////////blinking circles /////////////////

do
{
show_mouse();

get_mouse_pos(x1,y1,button);
int d;
for(int c=1;c<5&&d!=1;c++)
{
get_mouse_pos(x1,y1,button);
d=button;
 if(c==1)
 a=4;
 if(c==2)
 a=6;
 if(c==3)
 a=14;
 if(c==4)
 a=2;
 ////////////circles on line no1/////////////
setcolor(a);
setfillstyle(SOLID_FILL,a);
circle(49,65,3);
floodfill(49,65,a);
setcolor(a);
setfillstyle(SOLID_FILL,a);
circle(48,85,3);
floodfill(48,85,a);
setcolor(a);
setfillstyle(SOLID_FILL,a);
circle(49,105,3);
floodfill(49,105,a);
setcolor(a);
setfillstyle(SOLID_FILL,a);
circle(52,125,3);
floodfill(52,125,a);
setcolor(a);
setfillstyle(SOLID_FILL,a);
circle(55,145,3);
floodfill(55,145,a);
setcolor(a);
setfillstyle(SOLID_FILL,a);
circle(58,165,3);
floodfill(58,165,a);
setcolor(a);
setfillstyle(SOLID_FILL,a);
circle(61,185,3);
floodfill(61,185,a);
setcolor(a);
setfillstyle(SOLID_FILL,a);
circle(65,205,3);
floodfill(65,205,a);
setcolor(a);
setfillstyle(SOLID_FILL,a);
circle(69,225,3);
floodfill(69,225,a);
setcolor(a);
setfillstyle(SOLID_FILL,a);
circle(72,245,3);
floodfill(72,245,a);
setcolor(a);
setfillstyle(SOLID_FILL,a);
circle(74,265,3);
floodfill(74,265,a);
setcolor(a);
setfillstyle(SOLID_FILL,a);
circle(76,285,3);
floodfill(76,285,a);
setcolor(a);
setfillstyle(SOLID_FILL,a);
circle(79,305,3);
floodfill(79,305,a);
setcolor(a);
setfillstyle(SOLID_FILL,a);
circle(78,325,3);
floodfill(78,325,a);
setcolor(a);
setfillstyle(SOLID_FILL,a);
circle(78,345,3);
floodfill(78,345,a);
////////////circles on line no2////////////////////
setcolor(a);
setfillstyle(SOLID_FILL,a);
circle(100,65,3);
floodfill(100,65,a);
setcolor(a);
setfillstyle(SOLID_FILL,a);
circle(100,85,3);
floodfill(100,85,a);
setcolor(a);
setfillstyle(SOLID_FILL,a);
circle(103,105,3);
floodfill(103,105,a);
setcolor(a);
setfillstyle(SOLID_FILL,a);
circle(108,125,3);
floodfill(108,125,a);
setcolor(a);
setfillstyle(SOLID_FILL,a);
circle(114,145,3);
floodfill(114,145,a);
setcolor(a);
setfillstyle(SOLID_FILL,a);
circle(117,165,3);
floodfill(117,165,a);
setcolor(a);
setfillstyle(SOLID_FILL,a);
circle(120,185,3);
floodfill(120,185,a);
setcolor(a);
setfillstyle(SOLID_FILL,a);
circle(118,205,3);
floodfill(118,205,a);
setcolor(a);
setfillstyle(SOLID_FILL,a);
circle(116,225,3);
floodfill(116,225,a);
setcolor(a);
setfillstyle(SOLID_FILL,a);
circle(111,245,3);
floodfill(111,245,a);
setcolor(a);
setfillstyle(SOLID_FILL,a);
circle(107,265,3);
floodfill(107,265,a);
setcolor(a);
setfillstyle(SOLID_FILL,a);
circle(98,285,3);
floodfill(98,285,a);
/////////////circles for line no 3///////////
setcolor(a);
setfillstyle(SOLID_FILL,a);
circle(150,65,3);
floodfill(150,65,a);
setcolor(a);
setfillstyle(SOLID_FILL,a);
circle(150,85,3);
floodfill(150,85,a);
setcolor(a);
setfillstyle(SOLID_FILL,a);
circle(152,105,3);
floodfill(152,105,a);
setcolor(a);
setfillstyle(SOLID_FILL,a);
circle(153,125,3);
floodfill(153,125,a);
setcolor(a);
setfillstyle(SOLID_FILL,a);
circle(152,145,3);
floodfill(152,145,a);
setcolor(a);
setfillstyle(SOLID_FILL,a);
circle(150,165,3);
floodfill(150,165,a);
setcolor(a);
setfillstyle(SOLID_FILL,a);
circle(148,185,3);
floodfill(148,185,a);
setcolor(a);
setfillstyle(SOLID_FILL,a);
circle(144,205,3);
floodfill(144,205,a);
setcolor(a);
setfillstyle(SOLID_FILL,a);
circle(135,220,3);
floodfill(135,220,a);
//////////////circles for line no 4///////////////
setcolor(a);
setfillstyle(SOLID_FILL,a);
circle(200,65,3);
floodfill(200,65,a);
setcolor(a);
setfillstyle(SOLID_FILL,a);
circle(199,85,3);
floodfill(199,85,a);
setcolor(a);
setfillstyle(SOLID_FILL,a);
circle(198,105,3);
floodfill(198,105,a);
setcolor(a);
setfillstyle(SOLID_FILL,a);
circle(196,125,3);
floodfill(196,125,a);
setcolor(a);
setfillstyle(SOLID_FILL,a);
circle(194,145,3);
floodfill(194,145,a);
setcolor(a);
setfillstyle(SOLID_FILL,a);
circle(190,165,3);
floodfill(190,165,a);
setcolor(a);
setfillstyle(SOLID_FILL,a);
circle(186,185,3);
floodfill(186,185,a);
setcolor(a);
setfillstyle(SOLID_FILL,a);
circle(180,205,3);
floodfill(180,205,a);
setcolor(a);
setfillstyle(SOLID_FILL,a);
circle(171,225,3);
floodfill(171,225,a);
setcolor(a);
setfillstyle(SOLID_FILL,a);
circle(156,244,3);
floodfill(156,244,a);
setcolor(a);
setfillstyle(SOLID_FILL,a);
circle(135,258,3);
floodfill(135,258,a);
/////////////circles for line no 5/////////////

setcolor(a);
setfillstyle(SOLID_FILL,a);
circle(250,65,3);
floodfill(250,65,a);
setcolor(a);
setfillstyle(SOLID_FILL,a);
circle(248,85,3);
floodfill(248,85,a);
setcolor(a);
setfillstyle(SOLID_FILL,a);
circle(245,105,3);
floodfill(245,105,a);
setcolor(a);
setfillstyle(SOLID_FILL,a);
circle(241,125,3);
floodfill(241,125,a);
setcolor(a);
setfillstyle(SOLID_FILL,a);
circle(231,145,3);
floodfill(231,145,a);
setcolor(a);
setfillstyle(SOLID_FILL,a);
circle(214,156,3);
floodfill(214,156,a);

delay(100);
}
}
while(button!=1);
hide_mouse();


setcolor(15);
settextstyle(0,0,0);
graph();

setcolor(5);
setfillstyle(SOLID_FILL,5);
circle(x1,y1,3);
floodfill(x1,y1,5);
getch();
}
void graph()
{
int a1,a2,a3,a4,a5,a6,a7,a8;
int d,cx1=0,cy1=0,cx2=0,cy2=0,cx3=0,cy3=0,cy4=0,cy5=0,cy6=0,cx4=0,cx5=0,cx6=0,cx7=0,cy7=0,cx8=0,cy8=0;
int a,b,c;
struct date e;
getdate(&e);
a=e.da_day;
b=e.da_mon;
c=e.da_year;

outtextxy(300,52,"Enter 1st Value:");
gotoxy(55,4);
scanf("%d",&a1);

 if(a1<2000)
{

outtextxy(300,67,"Enter 2nd value:");
gotoxy(55,5);
scanf("%d",&a2);
outtextxy(300,84,"Enter 3nd value:");
gotoxy(55,6);
scanf("%d",&a3);
outtextxy(300,100,"Enter 4nd value:");
gotoxy(55,7);
scanf("%d",&a4);
}

else
{ if(a1>=2000)
{
outtextxy(300,67,"Enter 2nd value:");
gotoxy(55,5);
scanf("%d",&a2);
outtextxy(300,84,"Enter 3nd value:");
gotoxy(55,6);
scanf("%d",&a3);
outtextxy(300,100,"Enter 4nd value:");
gotoxy(55,7);
scanf("%d",&a4);
outtextxy(300,116,"Enter 5th value:");
gotoxy(55,8);
scanf("%d",&a5);
outtextxy(300,131,"Enter 6th value:");
gotoxy(55,9);
scanf("%d",&a6);
 outtextxy(475,52,"Enter 7th value:");
gotoxy(76,4);
scanf("%d",&a7);
 outtextxy(475,67,"Enter 8th value:");
gotoxy(76,5);
scanf("%d",&a8);
} }

///////////x-axis//////////////////////
line(300,370,510,370);
line(510,370,505,365);
line(510,370,505,375);
line(318,370,318,375);
line(338,370,338,375);
line(358,370,358,375);
line(378,370,378,375);
line(398,370,398,375);
line(418,370,418,375);
line(438,370,438,375);
line(458,370,458,375);
line(478,370,478,375);
////////////y-axis/////////////////////
line(300,370,300,170);
line(300,170,295,175);
line(300,170,305,175);
line(300,350,295,350);
line(300,330,295,330);
line(300,310,295,310);
line(300,290,295,290);
line(300,270,295,270);
line(300,250,295,250);
line(300,230,295,230);
line(300,210,295,210);
line(300,190,295,190);
outtextxy(350,160,"****** Graph ******");
////////////////DATE/////////////
gotoxy(47,25);
printf("%d/%d/%d",a,b,c);
line(438,392,510,392);
line(510,392,505,387);
line(510,392,505,397);
line(358,392,300,392);
line(300,392,305,397);
line(300,392,305,387);

outtextxy(295,375,"0");
outtextxy(285,350,"2");
outtextxy(285,330,"4");
outtextxy(285,310,"6");
outtextxy(285,290,"8");
outtextxy(280,270,"10");
outtextxy(280,250,"12");
outtextxy(280,230,"14");
outtextxy(280,210,"16");
outtextxy(280,190,"18");


if(a1>=2000)
{
for( d=100;d<=1000;d=d+100)
cx1=cx1+2;
for( d=100;d<=2000;d=d+100)
cx2=cx2+2;
for( d=100;d<=3000;d=d+100)
cx3=cx3+2;
for( d=100;d<=4000;d=d+100)
cx4=cx4+2;
for( d=100;d<=5000;d=d+100)
cx5=cx5+2;
for( d=100;d<=6000;d=d+100)
cx6=cx6+2;
for( d=100;d<=7000;d=d+100)
cx7=cx7+2;
for( d=100;d<=8000;d=d+100)
cx8=cx8+2;
for(d=200;d<=a1;d=d+200)
cy1=cy1+2;
for(d=200;d<=a2;d=d+200)
cy2=cy2+2;
for(d=200;d<=a3;d=d+200)
cy3=cy3+2;
for(d=200;d<=a4;d=d+200)
cy4=cy4+2;
for(d=200;d<=a5;d=d+200)
cy5=cy5+2;
for(d=200;d<=a6;d=d+200)
cy6=cy6+2;
for(d=200;d<=a7;d=d+200)
cy7=cy7+2;
for(d=200;d<=a8;d=d+200)
cy8=cy8+2;
circle(300+cx1,370-cy1,2);
circle(300+cx2,370-cy2,2);
circle(300+cx3,370-cy3,2);
circle(300+cx4,370-cy4,2);
circle(300+cx5,370-cy5,2);
circle(300+cx6,370-cy6,2);
circle(300+cx7,370-cy7,2);
circle(300+cx8,370-cy8,2);
line(300+cx1,370-cy1,300+cx2,370-cy2);
line(300+cx2,370-cy2,300+cx3,370-cy3);
line(300+cx3,370-cy3,300+cx4,370-cy4);
line(300+cx4,370-cy4,300+cx5,370-cy5);
line(300+cx5,370-cy5,300+cx6,370-cy6);
line(300+cx6,370-cy6,300+cx7,370-cy7);
line(300+cx7,370-cy7,300+cx8,370-cy8);


}
else
{
for( d=100;d<=1000;d=d+100)
cx1=cx1+2;
for( d=100;d<=2000;d=d+100)
cx2=cx2+2;
for( d=100;d<=3000;d=d+100)
cx3=cx3+2;
for( d=100;d<=4000;d=d+100)
cx4=cx4+2;

for(d=200;d<=a1;d=d+200)
cy1=cy1+2;
for(d=200;d<=a2;d=d+200)
cy2=cy2+2;
for(d=200;d<=a3;d=d+200)
cy3=cy3+2;
for(d=200;d<=a4;d=d+200)
cy4=cy4+2;

circle(300+cx1,370-cy1,2);
circle(300+cx2,370-cy2,2);
circle(300+cx3,370-cy3,2);
circle(300+cx4,370-cy4,2);
line(300+cx1,370-cy1,300+cx2,370-cy2);
line(300+cx2,370-cy2,300+cx3,370-cy3);
line(300+cx3,370-cy3,300+cx4,370-cy4);
}
}