/* Name: Muhammad Fahad Bin Ashraf
   ROll# 1163
   Sec-A
   Sem-2
   Teacher:Sir Rao
   Assignment: Five river manegment system
   */

#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
union REGS i,o; ///To control mouse
void map();// function to show the map of pakistan
void barrage();//function to show the barrages
void pre(int x2[100],int y2[100],int col[100]);///function to print the condition of previous enter values
void show_mouse();///////to show mouse pointer
void get_mouse_pos(int &x,int &y,int &button);//// to get mouse position
int graph(int x,int y);//// To get the Graph
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\tc\\bgi");
int a,cha,x1,y1,button;
//////////////////FRONT PAGE/////////////////
int bb=0;
for(int r=1;r<=30;r=r+5){
setcolor(r+4);
rectangle(222-r,120-r,422+r,320+r);}
outtextxy(230,143," :::::Created By:::::");
outtextxy(230,173,"  Abu Bakar Hameed       ");
outtextxy(230,203,"Roll# 1163::Sec-A::Sem-1");
outtextxy(230,233,"   Teacher:: Sir Rao");
outtextxy(230,263,"  GARRISON UNIVERSITY");

for(int c=1;c<=70;c=c+5){
setcolor(c);
circle(90,90,20+c);
circle(550,90,20+c);
circle(90,390,20+c);
circle(550,390,20+c);}
for(int c1=1;c1<=40;c1=c1+5){
setcolor(c1);
circle(60,240,20+c1);
circle(582,240,20+c1);}
for(int c2=1;c2<=23;c2=c2+5){
setcolor(c2+8);
circle(155,240,15+c2);
circle(487,240,15+c2);}
for(int c3=1;c3<=16;c3=c3+4){
setcolor(c3+13);
circle(163,177,10+c3);
circle(478,177,10+c3);
circle(163,302,10+c3);
circle(478,302,10+c3);}
settextstyle(7,0,4);
setcolor(YELLOW);
outtextxy(175,20,"Flood Managment ");
settextstyle(7,0,2);
outtextxy(200,360,"System of : ");
outtextxy(190,390,"Five rivers of pakistan");

while(!kbhit())
{

bb++;
setcolor(bb);
outtextxy(230,290," Press Any Key  ");
}
getch();
cleardevice();   //////////////End of front page/////////
//////////////////PAKISTAN MAP//////////////////////////////////
settextstyle(0,0,0);
map();   /////////////////////printed the map
int x2[100],y2[100],col[100];
int cou=0;
///////////////////barrages on indus river /////////////////////
show_mouse();
do/////////////To blink the circles utill the click of mouse
{

get_mouse_pos(x1,y1,button);  ///gets the position of mouse pointer
for(int c=1;c<5&&button!=1;c++)
{
get_mouse_pos(x1,y1,button);

 if(c==1)
 a=4;
 if(c==2)
 a=6;
 if(c==3)
 a=14;
 if(c==4)
 a=2;
 if(button==1)
 a=11;
////////////////////////////barrages on indus river////////////////
setcolor(a);
setfillstyle(1,a);

circle(118,110,3);
floodfill(118,110,a);
circle(108,140,3);
floodfill(108,140,a);
circle(94,173,3);
floodfill(94,173,a);
circle(94,210,3);
floodfill(94,210,a);
circle(95,240,3);
floodfill(95,240,a);
//////////////////////barrages on jehlum river////////////////////
circle(142,100,3);
floodfill(142,100,a);
circle(129,137,3);
floodfill(129,137,a);
/////////////////////barrage on chenab river///////////////////
circle(152,110,3);
floodfill(152,110,a);
//////////////////////barrage on ravi//////////
circle(165,127,3);
floodfill(165,127,a);
circle(138,150,3);
floodfill(138,150,a);
///////////////////////barrages on satluj////////////
circle(110,189,3);
floodfill(110,189,a);
circle(145,172,3);
floodfill(145,172,a);
delay(100);
}}
while(button!=1); //if mouse is clicked

do//To get the values,print the graph,save condition of previous barrages
{
 if(button==1)
 {
if(x1>116&&x1<120&&y1>108&&y1<112)
{
a=graph(x1,y1);//prints the graph gets the condition on barrage and clears the screen
map();
barrage();
setcolor(a);
setfillstyle(1,a);
circle(118,110,3);
floodfill(118,110,a);
cou++;
x2[cou-1]=x1;x2[cou]=NULL;
y2[cou-1]=y1;y2[cou]=NULL;    //saving the condition of barrages
col[cou-1]=a;col[cou]=NULL;
pre(x2,y2,col);              //prints the condition of all prevous barrages
}
if(x1>106&&x1<110&&y1>138&&y1<142)
{
a=graph(x1,y1);
map();
barrage();
setcolor(a);
setfillstyle(1,a);
circle(108,140,3);
floodfill(108,140,a);
cou++;
x2[cou-1]=x1;x2[cou]=NULL;
y2[cou-1]=y1;y2[cou]=NULL;
col[cou-1]=a;col[cou]=NULL;
pre(x2,y2,col);
}
if(x1>92&&x1<96&&y1>171&&y1<175)
{
a=graph(x1,y1);
map();
barrage();
setcolor(a);
setfillstyle(1,a);
circle(94,173,3);
floodfill(94,173,a);
cou++;
x2[cou-1]=x1;x2[cou]=NULL;
y2[cou-1]=y1;y2[cou]=NULL;
col[cou-1]=a;col[cou]=NULL;
pre(x2,y2,col);
}
if(x1>92&&x1<96&&y1>208&&y1<212)
{
a=graph(x1,y1);
map();
barrage();
setcolor(a);
setfillstyle(1,a);
circle(94,210,3);
floodfill(94,210,a);
cou++;
x2[cou-1]=x1;x2[cou]=NULL;
y2[cou-1]=y1;y2[cou]=NULL;
col[cou-1]=a;col[cou]=NULL;
pre(x2,y2,col);
}
if(x1>93&&x1<97&&y1>238&&y1<242)
{
a=graph(x1,y1);
map();
barrage();
setcolor(a);
setfillstyle(1,a);
circle(95,240,3);
floodfill(95,240,a);
cou++;

x2[cou-1]=x1;x2[cou]=NULL;
y2[cou-1]=y1;y2[cou]=NULL;
col[cou-1]=a;col[cou]=NULL;
pre(x2,y2,col);}
//////////////////////barrages on jehlum river////////////////////
if(x1>=140&&x1<=144&&y1>=98&&y1<=102)
{
a=graph(x1,y1);
map();
barrage();
setcolor(a);
setfillstyle(1,a);
circle(142,100,3);
floodfill(142,100,a);
cou++;
x2[cou-1]=x1;x2[cou]=NULL;
y2[cou-1]=y1;y2[cou]=NULL;
col[cou-1]=a;col[cou]=NULL;
pre(x2,y2,col);
}
if(x1>=127&&x1<=131&&y1>=135&&y1<=139)
{
a=graph(x1,y1);
map();
barrage();
setcolor(a);
setfillstyle(1,a);
circle(129,137,3);
floodfill(129,137,a);
cou++;
x2[cou-1]=x1;x2[cou]=NULL;
y2[cou-1]=y1;y2[cou]=NULL;
col[cou-1]=a;col[cou]=NULL;
pre(x2,y2,col);
}
/////////////////////barrage on chenab river///////////////////
if(x1>=150&&x1<=154&&y1>=108&&y1<=112)
{
a=graph(x1,y1);
map();
barrage();
setcolor(a);
setfillstyle(1,a);
circle(152,110,3);
floodfill(152,110,a);
cou++;
x2[cou-1]=x1;x2[cou]=NULL;
y2[cou-1]=y1;y2[cou]=NULL;
col[cou-1]=a;col[cou]=NULL;
pre(x2,y2,col);
}
//////////////////////barrage on ravi//////////
if(x1>=163&&x1<=167&&y1>=125&&y1<=129)
{
a=graph(x1,y1);
map();
barrage();
setcolor(a);
setfillstyle(1,a);
circle(165,127,3);
floodfill(165,127,a);
cou++;
x2[cou-1]=x1;x2[cou]=NULL;
y2[cou-1]=y1;y2[cou]=NULL;
col[cou-1]=a;col[cou]=NULL;
pre(x2,y2,col);
}
if(x1>=136&&x1<=140&&y1>=148&&y1<=152)
{
a=graph(x1,y1);
map();
barrage();
setcolor(a);
setfillstyle(1,a);
circle(138,150,3);
floodfill(138,150,a);
cou++;
x2[cou-1]=x1;x2[cou]=NULL;
y2[cou-1]=y1;y2[cou]=NULL;
col[cou-1]=a;col[cou]=NULL;
pre(x2,y2,col);
}
///////////////////////barrages on satluj////////////
if(x1>=108&&x1<=112&&y1>=187&&y1<=191)
{
a=graph(x1,y1);
map();
barrage();
setcolor(a);
setfillstyle(1,a);
circle(110,189,3);
floodfill(110,189,a);
cou++;
x2[cou-1]=x1;x2[cou]=NULL;
y2[cou-1]=y1;y2[cou]=NULL;
col[cou-1]=a;col[cou]=NULL;
pre(x2,y2,col);
}
if(x1>=143&&x1<=147&&y1>=170&&y1<=174)
{
a=graph(x1,y1);
map();
barrage();
setcolor(a);
setfillstyle(1,a);
circle(145,172,3);
floodfill(145,172,a);
cou++;
x2[cou-1]=x1;x2[cou]=NULL;
y2[cou-1]=y1;y2[cou]=NULL;
col[cou-1]=a;col[cou]=NULL;
pre(x2,y2,col);
}}

get_mouse_pos(x1,y1,button);            // again gets the position
if(x1>70&&x1<122&&y1>325&&y1<331&&button==1)//if mousee is clicked on the certain location only then the program will terminate
break;
}
while(1);

}

int graph(int x1,int y1)
{
int a1,a2,a3,a4,a5,a6,a7,a8;
int d,cx1=0,cy1=0,cx2=0,cy2=0,cx3=0,cy3=0,cy4=0,cy5=0,cy6=0,cx4=0,cx5=0,cx6=0,cx7=0,cy7=0,cx8=0,cy8=0;
int a,b,c;
struct date e;
getdate(&e);
a=e.da_day;
b=e.da_mon;     ////////// GETS DATE
c=e.da_year;
setcolor(14);
 int ch;                  //////GETS VALUES
outtextxy(300,52,"Enter 1st Value:");
gotoxy(55,4);
scanf("%d",&a1);

 if(a1<2000) //if less than 2000 gets 3 more values
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

else          // else  gets 7 more values
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
if(a1<2000) {            ///////SETTING THE RANGE = HIGH MEDIUM DANGER NORMAL
if(a4>=0&&a4<4500)
{
ch=2; setcolor(ch);
outtextxy(410,150," [ NORMAL ]");
}
if(a4>=4500&&a4<9000)
{
ch=6; setcolor(ch);
outtextxy(410,150," [ MEDIUM ]");
}
if(a4>=9000&&a4<13500)
{
ch=14;setcolor(ch);
outtextxy(410,150," [ HIGH ]");
}

if(a4>=13500&&a4<=18000)
{ch=4;setcolor(ch);
outtextxy(410,150," [ DANGER ]");
   }    }

else
{
if(a8>=0&&a8<4500)
{
ch=2;setcolor(ch);
outtextxy(410,150," [ NORMAL ]");
}
if(a8>=4500&&a8<9000)
{
ch=6;setcolor(ch);
outtextxy(410,150," [ MEDIUM ]");
}
if(a8>=9000&&a8<13500)
{
ch=14;setcolor(ch);
outtextxy(410,150," [ HIGH ]");
}
if(a8>=13500&&a8<=18000)
{
ch=4;setcolor(ch);
outtextxy(410,150," [ DANGER ]");
}
}
setcolor(14);
///////////x-axis//////////////////////
line(300,370,510,370);
line(510,370,505,365);
line(510,370,505,375);
line(318,370,318,375);         ////////// GRAPH OUTLINE
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
//setbkcolor(9);
setcolor(7);
//////////////////////LEVEL//////////////////////
////////LEVEL 1
for(int lev=1;lev<=45;lev++)
{
setcolor(2);
rectangle(515,370-lev,525,370-lev);
///////////LEVEL 2
setcolor(6);
rectangle(515,325-lev,525,325-lev);     ///////PRINTING LEVEL ALONGEITH THE GRAPH
//////////LEVEL 3
setcolor(14);
rectangle(515,280-lev,525,280-lev);
//////////LEVEL 4
setcolor(4);
rectangle(515,235-lev,525,235-lev);
}
/////////////////////////////////scale on y//////////////
setcolor(7);
line(302,370,302,170);
line(306,370,306,170);
line(310,370,310,170);
line(314,370,314,170);
line(318,370,318,170);
line(322,370,322,170);
line(326,370,326,170);     //////////PRINTING THE SCALE ON GRAPH
line(330,370,330,170);
line(334,370,334,170);
setcolor(14);
line(338,370,338,170);
setcolor(7);
line(342,370,342,170);
line(346,370,346,170);
line(350,370,350,170);
line(354,370,354,170);
line(358,370,358,170);
line(362,370,362,170);
line(366,370,366,170);
line(370,370,370,170);
line(374,370,374,170);
setcolor(14);
line(378,370,378,170);
setcolor(7);
line(382,370,382,170);
line(386,370,386,170);
line(390,370,390,170);
line(394,370,394,170);
line(398,370,398,170);
line(402,370,402,170);
line(406,370,406,170);
line(410,370,410,170);
line(414,370,414,170);
setcolor(14);
line(418,370,418,170);
setcolor(7);
line(422,370,422,170);
line(426,370,426,170);
line(430,370,430,170);
line(434,370,434,170);
line(438,370,438,170);
line(442,370,442,170);
line(446,370,446,170);
line(450,370,450,170);
line(454,370,454,170);
setcolor(14);
line(458,370,458,170);
setcolor(7);
line(462,370,462,170);
line(466,370,466,170);
line(470,370,470,170);
line(474,370,474,170);
line(478,370,478,170);
line(482,370,482,170);
line(486,370,486,170);
line(490,370,490,170);
line(494,370,494,170);
setcolor(14);
line(498,370,498,170);
setcolor(7);
line(502,370,502,170);
line(506,370,506,170);
line(510,370,510,170);

///////////////////////////scale on x
line(300,368,510,368);
line(300,364,510,364);
line(300,360,510,360);
line(300,356,510,356);
line(300,352,510,352);
line(300,348,510,348);
line(300,344,510,344);
line(300,340,510,340);
line(300,336,510,336);
setcolor(14);
line(300,332,510,332);
setcolor(7);
line(300,328,510,328);
line(300,324,510,324);
line(300,320,510,320);
line(300,316,510,316);
line(300,312,510,312);
line(300,308,510,308);
line(300,304,510,304);
line(300,300,510,300);
line(300,296,510,296);
setcolor(14);
line(300,292,510,292);
setcolor(7);
line(300,288,510,288);
line(300,284,510,284);
line(300,280,510,280);
line(300,276,510,276);
line(300,272,510,272);
line(300,268,510,268);
line(300,264,510,264);
line(300,260,510,260);
line(300,256,510,256);
setcolor(14);
line(300,252,510,252);
setcolor(7);
line(300,248,510,248);
line(300,244,510,244);
line(300,240,510,240);
line(300,236,510,236);
line(300,232,510,232);
line(300,228,510,228);
line(300,224,510,224);
line(300,220,510,220);
line(300,216,510,216);
setcolor(14);
line(300,212,510,212);
setcolor(7);
line(300,208,510,208);
line(300,204,510,204);
line(300,200,510,200);
line(300,196,510,196);
line(300,192,510,192);
line(300,188,510,188);
line(300,184,510,184);
line(300,180,510,180);
line(300,176,510,176);
setcolor(14);
line(300,172,510,172);



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
outtextxy(245,350,"2000");
outtextxy(245,330,"4000");
outtextxy(245,310,"6000");
outtextxy(245,290,"8000");
outtextxy(240,270,"10,000");
outtextxy(240,250,"12,000");
outtextxy(240,230,"14,000");
outtextxy(240,210,"16,000");
outtextxy(240,190,"18,000");
setcolor(15);
		  /// DOING CALCULATIONS
if(a1>=2000)
{    /////////////ALONG X_AXIS W.R.T TIME OF TODAYS DATE///
for( d=6;d<=60;d=d+6)
cx1=cx1+2;
for( d=6;d<=120;d=d+6)
cx2=cx2+2;
for( d=6;d<=180;d=d+6)
cx3=cx3+2;
for( d=6;d<=240;d=d+6)
cx4=cx4+2;
for( d=6;d<=300;d=d+6)
cx5=cx5+2;
for( d=6;d<=360;d=d+6)
cx6=cx6+2;
for( d=6;d<=420;d=d+6)
cx7=cx7+2;
for( d=6;d<=480;d=d+6)
cx8=cx8+2;
////////////ALONG Y_AXIS GIVEN BY USER/////////
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
//////////////PRINTIG CIRCLES AND LINES ACCORDING TO THE CALCULATIONS
setfillstyle(1,15);
circle(300+cx1,370-cy1,2);
floodfill(300+cx1,370-cy1,15);
circle(300+cx2,370-cy2,2);
floodfill(300+cx2,370-cy2,15);
circle(300+cx3,370-cy3,2);
floodfill(300+cx3,370-cy3,15);
circle(300+cx4,370-cy4,2);
floodfill(300+cx4,370-cy4,15);
circle(300+cx5,370-cy5,2);
floodfill(300+cx5,370-cy5,15);
circle(300+cx6,370-cy6,2);
floodfill(300+cx6,370-cy6,15);
circle(300+cx7,370-cy7,2);
floodfill(300+cx7,370-cy7,15);
circle(300+cx8,370-cy8,2);
floodfill(300+cx8,370-cy8,15);
line(300+cx1,370-cy1,300+cx2,370-cy2);
line(300+cx2,370-cy2,300+cx3,370-cy3);
line(300+cx3,370-cy3,300+cx4,370-cy4);
line(300+cx4,370-cy4,300+cx5,370-cy5);
line(300+cx5,370-cy5,300+cx6,370-cy6);
line(300+cx6,370-cy6,300+cx7,370-cy7);
line(300+cx7,370-cy7,300+cx8,370-cy8);


}
else  ////SAME PROCEDURE FOR 4 VALUES
{
for( d=6;d<=60;d=d+6)
cx1=cx1+2;
for( d=6;d<=120;d=d+6)
cx2=cx2+2;
for( d=6;d<=180;d=d+6)
cx3=cx3+2;
for( d=6;d<=240;d=d+6)
cx4=cx4+2;

for(d=200;d<=a1;d=d+200)
cy1=cy1+2;
for(d=200;d<=a2;d=d+200)
cy2=cy2+2;
for(d=200;d<=a3;d=d+200)
cy3=cy3+2;
for(d=200;d<=a4;d=d+200)
cy4=cy4+2;

setfillstyle(1,15);
circle(300+cx1,370-cy1,2);
floodfill(300+cx1,370-cy1,15);
circle(300+cx2,370-cy2,2);
floodfill(300+cx2,370-cy2,15);
circle(300+cx3,370-cy3,2);
floodfill(300+cx3,370-cy3,15);
circle(300+cx4,370-cy4,2);
floodfill(300+cx4,370-cy4,15);
line(300+cx1,370-cy1,300+cx2,370-cy2);
line(300+cx2,370-cy2,300+cx3,370-cy3);
line(300+cx3,370-cy3,300+cx4,370-cy4);

}

a=ch;   ////// CHANGING THE COLOR OF THE BARRAGE ACCORDING TO THE RANGE/
if(x1>116&&x1<120&&y1>108&&y1<112)
{
setcolor(a);
setfillstyle(1,a);
circle(118,110,3);
floodfill(118,110,a);
outtextxy(350,150,"KALA BAG");
}
if(x1>106&&x1<110&&y1>138&&y1<142)
{
setcolor(a);
setfillstyle(1,a);
circle(108,140,3);
floodfill(108,140,a);
outtextxy(350,150,"CHASMA");
}
if(x1>92&&x1<96&&y1>171&&y1<175)
{
setcolor(a);
setfillstyle(1,a);
circle(94,173,3);
floodfill(94,173,a);
outtextxy(350,150,"TAUNSA");
}
if(x1>92&&x1<96&&y1>208&&y1<212)
{
setcolor(a);
setfillstyle(1,a);
circle(94,210,3);
floodfill(94,210,a);
outtextxy(350,150,"SUKKAR");

}
if(x1>93&&x1<97&&y1>238&&y1<242)
{
setcolor(a);
setfillstyle(1,a);
circle(95,240,3);
floodfill(95,240,a);
outtextxy(350,150,"KOTRI");
}
//////////////////////barrages on jehlum river////////////////////
if(x1>=140&&x1<=144&&y1>=98&&y1<=102)
{
setcolor(a);
setfillstyle(1,a);
circle(142,100,3);
floodfill(142,100,a);
outtextxy(350,150,"RASUL");
}
if(x1>=127&&x1<=131&&y1>=135&&y1<=139)
{
setcolor(a);
setfillstyle(1,a);
circle(129,137,3);
floodfill(129,137,a);
outtextxy(350,150,"TRIMU");
}
/////////////////////barrage on chenab river///////////////////
if(x1>=150&&x1<=154&&y1>=108&&y1<=112)
{
setcolor(a);
setfillstyle(1,a);
circle(152,110,3);
floodfill(152,110,a);
outtextxy(350,150,"MARALA");

}
//////////////////////barrage on ravi//////////
if(x1>=163&&x1<=167&&y1>=125&&y1<=129)
{
setcolor(a);
setfillstyle(1,a);
circle(165,127,3);
floodfill(165,127,a);
outtextxy(350,150,"BALOKI");
}
if(x1>=136&&x1<=140&&y1>=148&&y1<=152)
{
setcolor(a);
setfillstyle(1,a);
circle(138,150,3);
floodfill(138,150,a);
outtextxy(350,150,"SDHANI");
}
///////////////////////barrages on satluj////////////
if(x1>=108&&x1<=112&&y1>=187&&y1<=191)
{
setcolor(a);
setfillstyle(1,a);
circle(110,189,3);
floodfill(110,189,a);
outtextxy(350,150,"PANJNAD");
}
if(x1>=143&&x1<=147&&y1>=170&&y1<=174)
{
setcolor(a);
setfillstyle(1,a);
circle(145,172,3);
floodfill(145,172,a);
outtextxy(350,150,"ISLAM");
}

int button;

while(button!=1)  //// UNTILL MOUSE IS CLICKED IT WILL NOT CLEAR SCREEN
{
get_mouse_pos(x1,y1,button);
}
cleardevice();
return ch;
}
void map()
{

/////////////////////PAKISTAN MAP//////////////////////////
setcolor(10);
line(220,70,230,77);
line(230,77,235,83);
line(235,83,232,92);
line(232,92,227,98);
line(227,98,220,95);
line(220,95,212,99);
line(212,99,210,98);
line(210,98,208,95);
line(208,95,205,94);
line(205,94,202,95);
line(203,95,200,101);
line(200,101,194,104);
line(194,104,190,103);
line(190,103,186,102);
line(186,102,182,104);
line(182,104,176,113);
line(176,113,173,113);
line(173,113,176,120);
line(176,120,174,124);
line(174,124,175,131);
line(175,131,170,140);
line(170,140,167,144);
line(167,144,167,150);
line(167,150,162,160);
line(162,160,162,165);
line(162,165,157,175);
line(157,175,152,178);
line(152,178,153,187);
line(153,187,148,197);
line(148,197,142,199);
line(142,199,140,197);
line(140,197,136,199);
arc(154,223,125,175,30);
line(124,222,126,228);
line(126,228,130,232);
line(130,232,131,240);
line(131,240,137,242);
line(137,242,142,256);
line(142,256,148,261);
line(148,261,142,268);
line(142,268,136,270);
line(136,270,130,272);
line(130,272,124,278);
line(124,278,105,276);

line(105,276,96,262);
line(96,262,91,261);
line(91,261,88,262);
line(88,262,82,264);
line(82,264,72,267);
line(72,267,53,266);

line(53,266,42,265);
line(42,265,30,268);
line(30,268,16,270);
line(16,270,25,250);

line(25,250,24,240);
line(24,240,36,216);
line(36,216,36,208);
line(36,208,32,198);
line(32,198,28,191);
line(28,191,10,185);
line(10,185,2,181);
line(2,181,14,178);
line(14,178,37,175);
line(37,175,42,175);
line(42,175,56,172);
line(56,172,65,165);
line(65,165,67,156);
line(67,156,73,146);
line(73,146,78,140);
line(78,140,79,132);
line(79,132,82,129);
line(82,129,81,120);
line(81,120,90,108);
line(90,108,90,100);
line(90,100,100,88);
line(100,88,106,86);
line(106,86,105,80);
line(105,80,103,75);
line(103,75,102,70);
line(102,70,102,66);
line(102,66,98,60);
line(98,60,100,50);
line(100,50,106,42);
line(106,42,114,36);
line(114,36,125,28);
line(125,28,138,24);
line(138,24,150,22);
line(150,22,160,20);
line(160,20,166,16);
line(166,16,176,17);
line(176,17,180,20);
line(180,20,185,22);
line(185,22,192,23);
line(192,23,196,30);
line(196,30,198,42);
line(198,42,206,48);
line(206,48,211,50);
line(211,50,213,64);
line(213,64,220,70);
setcolor(BLUE);
///////////////////////////RIVERS//////////////////////
///////////////indus river//////////////
line(130,90,128,96);
line(128,96,124,102);
line(124,102,116,112);
line(116,112,114,122);
line(114,122,108,135);
line(108,135,105,150);
line(105,150,98,160);
line(98,160,94,170);
line(94,170,92,185);
line(92,185,91,190);
line(91,190,94,210);
line(94,210,98,230);
line(98,230,96,240);
line(96,240,94,246);
line(94,246,92,252);
line(92,252,87,261);
/////////////////////jehlum river////////////////////
line(145,90,142,100);
line(142,100,134,110);
line(134,110,130,115);
line(130,115,128,123);
line(128,123,129,138);
//////////////////////chenab river/////////////////////
line(160,90,150,115);
line(150,115,142,125);
line(142,125,130,138);
line(130,138,128,144);
line(128,144,127,148);
line(127,148,128,156);
//////////////////////ravi river/////////////////////
line(172,116,170,120);
line(170,120,158,135);
line(158,135,140,150);
line(140,150,130,155);
line(130,155,124,162);
line(124,162,116,169);
line(116,169,113,176);
line(113,176,112,180);
line(112,180,111,189);
////////////////////////sutluj  river//////////////////////
line(160,160,152,168);
line(152,168,142,175);
line(142,175,126,184);
line(126,184,114,188);
line(114,188,110,190);
line(110,190,105,195);
line(105,195,102,200);
line(102,200,100,205);
line(100,205,94,210);

/////////////////////////names///////////////
setcolor(14);
outtextxy(10,40,"KALA BAG");
line(70,40,116,106);
outtextxy(10,70,"CHASHMA");
line(65,76,106,136);
outtextxy(10,100,"TAUNSA");
line(56,106,92,170);
outtextxy(10,130,"SUKKAR");
line(56,136,91,206);
outtextxy(10,160,"KOTRI");
line(46,166,92,236);
outtextxy(150,220,"PANJNAD");
line(150,220,114,192);
outtextxy(170,200,"ISLAM");
line(170,200,148,176);
outtextxy(180,165,"SDHNAI");
line(179,165,142,152);
outtextxy(180,147,"TRIMMU");
line(180,149,134,137);
outtextxy(200,109,"BALOKI");
line(200,109,170,127);
outtextxy(240,60,"MARALA");
line(240,60,157,109);
outtextxy(240,30,"RASUL");
line(240,30,146,98);
outtextxy(30,290,"ARABIAN SEA");
/////////////////////////////////instructions/////////////////
outtextxy(20,420,"RESULT =>");
settextstyle(0,0,1);
setcolor(4);
outtextxy(20,325,"click [here] to exit");
setcolor(2);
outtextxy(20,340,"INSTRUCTIONS:-");
setcolor(14);
outtextxy(20,355,"\"CLICK\" on any \"BARRAGE\"");
outtextxy(20,369,"\"ENTER\" the \"VALUES\"");
outtextxy(20,382,"\"GET\" the \"GRAPH\"");
//////////////////danger///////////
setcolor(4);
setfillstyle(1,4);
circle(130,401,3);
floodfill(130,401,4);
outtextxy(140,400,"DANGER");
//////////////////high/////////////
setcolor(14);
setfillstyle(1,14);
circle(130,421,3);
floodfill(130,421,14);
outtextxy(140,420,"HIGH");
/////////////////medium////////////
setcolor(6);
setfillstyle(1,6);
circle(130,441,3);
floodfill(130,441,6);
outtextxy(140,440,"MEDIUM");
//////////////////normal////////////
setcolor(2);
setfillstyle(1,2);
circle(130,461,3);
floodfill(130,461,2);
outtextxy(140,460,"NORMAL");

}
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
button=o.x.bx;
}
void barrage()
{
int a;
 a=11;
////////////////////////////barrages on indus river////////////////
setcolor(a);
setfillstyle(1,a);

circle(118,110,3);
floodfill(118,110,a);
circle(108,140,3);
floodfill(108,140,a);
circle(94,173,3);
floodfill(94,173,a);
circle(94,210,3);
floodfill(94,210,a);
circle(95,240,3);
floodfill(95,240,a);
//////////////////////barrages on jehlum river////////////////////
circle(142,100,3);
floodfill(142,100,a);
circle(129,137,3);
floodfill(129,137,a);
/////////////////////barrage on chenab river///////////////////
circle(152,110,3);
floodfill(152,110,a);
//////////////////////barrage on ravi//////////
circle(165,127,3);
floodfill(165,127,a);
circle(138,150,3);
floodfill(138,150,a);
///////////////////////barrages on satluj////////////
circle(110,189,3);
floodfill(110,189,a);
circle(145,172,3);
floodfill(145,172,a);

		      }
void pre(int x2[100],int y2[100],int col[100])
{
for(int p=0;x2[p]!=NULL;p++) ////TO PRINT THE CONDITION OF ALL PREVIOUS BARRAGES UNTILL "NULL"
{ int a;
 a=col[p];
if(x2[p]>116&&x2[p]<120&&y2[p]>108&&y2[p]<112)
{
setcolor(a);
setfillstyle(1,a);
circle(118,110,3);
floodfill(118,110,a);

}
if(x2[p]>106&&x2[p]<110&&y2[p]>138&&y2[p]<142)
{
setcolor(a);
setfillstyle(1,a);
circle(108,140,3);
floodfill(108,140,a);

}
if(x2[p]>92&&x2[p]<96&&y2[p]>171&&y2[p]<175)
{
setcolor(a);
setfillstyle(1,a);
circle(94,173,3);
floodfill(94,173,a);

}
if(x2[p]>92&&x2[p]<96&&y2[p]>208&&y2[p]<212)
{
setcolor(a);
setfillstyle(1,a);
circle(94,210,3);
floodfill(94,210,a);

}
if(x2[p]>93&&x2[p]<97&&y2[p]>238&&y2[p]<242)
{
setcolor(a);
setfillstyle(1,a);
circle(95,240,3);
floodfill(95,240,a);

}
//////////////////////barrages on jehlum river////////////////////
if(x2[p]>=140&&x2[p]<=144&&y2[p]>=98&&y2[p]<=102)
{
setcolor(a);
setfillstyle(1,a);
circle(142,100,3);
floodfill(142,100,a);

}
if(x2[p]>=127&&x2[p]<=131&&y2[p]>=135&&y2[p]<=139)
{
setcolor(a);
setfillstyle(1,a);
circle(129,137,3);
floodfill(129,137,a);

}
/////////////////////barrage on chenab river///////////////////
if(x2[p]>=150&&x2[p]<=154&&y2[p]>=108&&y2[p]<=112)
{
setcolor(a);
setfillstyle(1,a);
circle(152,110,3);
floodfill(152,110,a);

}
//////////////////////barrage on ravi//////////
if(x2[p]>=163&&x2[p]<=167&&y2[p]>=125&&y2[p]<=129)
{
setcolor(a);
setfillstyle(1,a);
circle(165,127,3);
floodfill(165,127,a);

}
if(x2[p]>=136&&x2[p]<=140&&y2[p]>=148&&y2[p]<=152)
{
setcolor(a);
setfillstyle(1,a);
circle(138,150,3);
floodfill(138,150,a);
}
///////////////////////barrages on satluj////////////
if(x2[p]>=108&&x2[p]<=112&&y2[p]>=187&&y2[p]<=191)
{
setcolor(a);
setfillstyle(1,a);
circle(110,189,3);
floodfill(110,189,a);

}
if(x2[p]>=143&&x2[p]<=147&&y2[p]>=170&&y2[p]<=174)
{
setcolor(a);
setfillstyle(1,a);
circle(145,172,3);
floodfill(145,172,a);

}
}}
/////////////////////THATS ALLLLLLLLL