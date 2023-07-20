#include<graphics.h>

int boatColor;
int circleColor;
int flagColor;
void ship(int speed)
{
    setColor(boatColor);
    int s = speed;
    setFillStyle(SOLID_FILL,boatColor);
    for(int i=0;i<3;i++){
        int points[10]={};
        drawpoly(5,points);
    }
    floodFill(0+s,350,boatColor);

    setColor(circleColor);
        circle(0+s,337,20);
        circle(-70+s,337,20);
        circle(70+s,337,20);

    setFillStyle(SOLID_FILL,circleColor);
    floodFill(0+s,337,circleColor);
    floodFill(-70+s,337,circleColor);
    floodFill(70+s,337,circleColor);

    setColor(flagColor);
    int flagPoint[8]={};
    drawpoly(4,flagPoint);
    setFillStyle(SOLID_FILL,flagColor);
    floodFill(2+s,200,flagColor);
    line(0+s,260,0+s,298);
}

void river(int color){
    setcolor(boatColor);
    setFillStyle(SOLID_FILL,color);
    rectangle(-10,360,710,640);
    floodFill(300,500,boatColor);
}