#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <graphics.h>
#include<math.h>
int main(){
    initwindow(1580,920,"Pyramid With Moving Camel");
    int page =0;
    for(int i=0;i<1000;i++){
    setactivepage(page);
    setvisualpage(1-page);
    cleardevice();
    rectangle(0,0,1580,920);
    //SUN
     circle(1200,150,50);
     setfillstyle(SOLID_FILL,YELLOW);
     floodfill(1200,150,WHITE);
     //BACKGROUND 
     line(-1,600,1600,600);
     setfillstyle(SOLID_FILL,BROWN);
     floodfill(1,900,WHITE);
     //SKY
     setfillstyle(SOLID_FILL,LIGHTBLUE);
     floodfill(1,1,WHITE);
    //PYRAMID
    rectangle(50,570,100,600);
    setfillstyle(SOLID_FILL,BROWN);
    floodfill(60,580,WHITE);
    rectangle(100,570,150,600);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(110,580,WHITE);
    rectangle(150,570,200,600);
    setfillstyle(SOLID_FILL,BROWN);
    floodfill(160,580,WHITE);
    rectangle(200,570,250,600);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(210,580,WHITE);
    rectangle(250,570,300,600);
    setfillstyle(SOLID_FILL,BROWN);
    floodfill(260,580,WHITE);
    rectangle(75,540,125,570);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(80,550,WHITE);
    rectangle(125,540,175,570);
    setfillstyle(SOLID_FILL,BROWN);
    floodfill(130,550,WHITE);
    rectangle(175,540,225,570);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(180,550,WHITE);
    rectangle(225,540,275,570);
    setfillstyle(SOLID_FILL,BROWN);
    floodfill(230,550,WHITE);
    rectangle(100,510,150,540);
    setfillstyle(SOLID_FILL,BROWN);
    floodfill(110,520,WHITE);
    rectangle(150,510,200,540);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(160,520,WHITE);
    rectangle(200,510,250,540);
    setfillstyle(SOLID_FILL,BROWN);
    floodfill(210,520,WHITE);
    rectangle(125,480,175,510);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(130,490,WHITE);
    rectangle(175,480,225,510);
    setfillstyle(SOLID_FILL,BROWN);
    floodfill(210,490,WHITE);
    rectangle(150,450,200,480);
    setfillstyle(SOLID_FILL,BROWN);
    floodfill(160,460,WHITE);
     //CLOUDS
         circle(700-i+100,150,30);
         circle(670-i+100,150,25);
         circle(640-i+100,150,30);
         setfillstyle(SOLID_FILL,WHITE);
         floodfill(700-i+100,150,WHITE);
         setfillstyle(SOLID_FILL,WHITE);
         floodfill(660-i+100,150,WHITE);
         setfillstyle(SOLID_FILL,WHITE);
         floodfill(680-i+100,150,WHITE);
         setfillstyle(SOLID_FILL,WHITE);
         floodfill(640-i+100,150,WHITE);
         setfillstyle(SOLID_FILL,WHITE);
         floodfill(670-i+100,160,WHITE);
         setfillstyle(SOLID_FILL,WHITE);
         floodfill(670-i+100,140,WHITE);
         circle(400-i+100,150,30);
         circle(370-i+100,150,25);
         circle(340-i+100,150,30);
         setfillstyle(SOLID_FILL,WHITE);
         floodfill(400-i+100,150,WHITE);
         setfillstyle(SOLID_FILL,WHITE);
         floodfill(360-i+100,150,WHITE);
         setfillstyle(SOLID_FILL,WHITE);
         floodfill(380-i+100,150,WHITE);
         setfillstyle(SOLID_FILL,WHITE);
         floodfill(340-i+100,150,WHITE);
         setfillstyle(SOLID_FILL,WHITE);
         floodfill(370-i+100,160,WHITE);
         setfillstyle(SOLID_FILL,WHITE);
         floodfill(370-i+100,140,WHITE);
         circle(200-i+100,150,30);
         circle(170-i+100,150,25);
         circle(140-i+100,150,30);
         setfillstyle(SOLID_FILL,WHITE);
         floodfill(200-i+100,150,WHITE);
         setfillstyle(SOLID_FILL,WHITE);
         floodfill(160-i+100,150,WHITE);
         setfillstyle(SOLID_FILL,WHITE);
         floodfill(180-i+100,150,WHITE);
         setfillstyle(SOLID_FILL,WHITE);
         floodfill(140-i+100,150,WHITE);
         setfillstyle(SOLID_FILL,WHITE);
         floodfill(170-i+100,160,WHITE);
         setfillstyle(SOLID_FILL,WHITE);
         floodfill(170-i+100,140,WHITE);
 //CAMEL
    setcolor(14);
    rectangle(400+i,510,490+i,555);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(468+i,540,14);
    line(490+i,546,523+i,522);
    line(523+i,522,480+i,522);
    line(490+i,522,490+i,555);
    circle(470+i,510,20);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(470+i,505,14);
    circle(460+i,500,20);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(460+i,481,14);
    rectangle(382+i,510,400+i,540);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(388+i,512,14);
    line(382+i,510,455+i,482);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(430+i,500,14);
    line(382+i,540,400+i,555);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(395+i,548,14);
    line(385+i,510,363+i,518);
    line(363+i,518,385+i,515);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(383+i,511,14);
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(380+i,513,14);
    circle(360+i,520,5);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(360+i,520,14);
    line(520+i,522,524+i,500);
    line(524+i,500,535+i,485);
    line(510+i,522,514+i,500);
    line(514+i,500,525+i,485);
    circle(532+i,472,15);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(532+i,472,14);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(521+i,510,14);
    line(535+i,485,555+i,484);
    line(532+i,459,560+i,473);
    circle(560+i,478,7);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(560+i,478,14);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(544+i,480,14);
    setcolor(YELLOW);
    line(538+i,465,535+i,447);
    line(530+i,465,535+i,447);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(535+i,450,14);
    setcolor(BLACK);
    circle(535+i,470,3);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(535+i,470,BLACK);
    setcolor(YELLOW);
    rectangle(385+i,540,395+i,592);
    rectangle(485+i,540,495+i,592);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(390+i,575,YELLOW);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(490+i,575,YELLOW);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(494+i,542,YELLOW);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(494+i,538,YELLOW);
    setcolor(BLACK);
    rectangle(385+i,592,400+i,599);
    rectangle(485+i,592,500+i,599);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(390+i,595,BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(490+i,595,BLACK);
 //2nd CAMEL
    setcolor(14);
    rectangle(400+i+300,510,490+i+300,555);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(468+300+i,540,14);
    line(490+300+i,546,523+300+i,522);
    line(523+i+300,522,480+i+300,522);
    line(490+i+300,522,490+i+300,555);
    circle(470+i+300,510,20);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(470+i+300,505,14);
    circle(460+i+300,500,20);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(460+i+300,481,14);
    rectangle(382+i+300,510,400+i+300,540);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(388+i+300,512,14);
    line(382+i+300,510,455+i+300,482);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(430+i+300,500,14);
    line(382+i+300,540,400+i+300,555);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(395+i+300,548,14);
    line(385+i+300,510,363+i+300,518);
    line(363+i+300,518,385+i+300,515);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(383+i+300,511,14);
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(380+i+300,513,14);
    circle(360+i+300,520,5);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(360+i+300,520,14);
    line(520+i+300,522,524+i+300,500);
    line(524+i+300,500,535+i+300,485);
    line(510+i+300,522,514+i+300,500);
    line(514+i+300,500,525+i+300,485);
    circle(532+i+300,472,15);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(532+i+300,472,14);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(521+i+300,510,14);
    line(535+i+300,485,555+i+300,484);
    line(532+i+300,459,560+i+300,473);
    circle(560+i+300,478,7);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(560+i+300,478,14);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(544+i+300,480,14);
    setcolor(YELLOW);
    line(538+i+300,465,535+i+300,447);
    line(530+i+300,465,535+i+300,447);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(535+i+300,450,14);
    setcolor(BLACK);
    circle(535+i+300,470,3);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(535+i+300,470,BLACK);
    setcolor(YELLOW);
    rectangle(385+i+300,540,395+i+300,592);
    rectangle(485+i+300,540,495+i+300,592);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(390+i+300,575,YELLOW);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(490+i+300,575,YELLOW);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(494+i+300,542,YELLOW);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(494+i+300,538,YELLOW);
    setcolor(BLACK);
    rectangle(385+i+300,592,400+i+300,599);
    rectangle(485+i+300,592,500+i+300,599);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(390+i+300,595,BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(490+i+300,595,BLACK);
    setcolor(WHITE);
     delay(20);
     page=1-page;
    }    
     getch();
    return 0;
}