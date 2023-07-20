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
        int points[10]={-150+i+s,300-i,150-i+s,300};
        drawpoly(5,points);
    }
    floodFill(0+s,350,boatColor);
}