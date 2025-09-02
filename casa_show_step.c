#include <stdio.h>

int main()
{
    int pedro, tulio, gabriel, yanka, paloma, vinicius, elias;
    int casa1=0,casa2=0, casa3=0;
    int casa1v=0,casa2v=0,casa3v=0;
    scanf("%d%d%d%d%d%d%d",&pedro, &tulio, &gabriel, &yanka, &paloma, &vinicius, &elias);
    if(pedro>=7600 && pedro<8400)
    {
        casa2++;
    }
    else if(pedro<7600)
    {

    }
    else
    {
        casa1++;
        casa2++;
        casa3++;
    }
    if(tulio>=4800 && tulio<5200)
    {
        casa1++;
    }
    else if(tulio>=5200 && tulio<6000)
    {
        casa1++;
        casa2++;
    }
    else if(tulio<4800)
    {

    }
    else
    {
        casa1++;
        casa2++;
        casa3++;
    }
    if(gabriel>=5600 && gabriel<6400)
    {
        casa1++;
    }
    else if(gabriel>=6400 && gabriel<7200)
    {
        casa1++;
        casa2++;
    }
    else if(gabriel<5600)
    {

    }
    else
    {
        casa1++;
        casa2++;
        casa3++;
    }
    if(yanka>=4400 && yanka<4800)
    {
        casa1++;
    }
    else if(yanka>=4800 & yanka<5200)
    {
        casa1++;
        casa2++;
    }
    else if(yanka<4400)
    {

    }
    else
    {
        casa1++;
        casa2++;
        casa3++;
    }
    if(paloma>=4800 && paloma<5600)
    {
        casa1++;
    }
    else if(paloma<4800)
    {

    }
    else
    {
        casa1++;
        casa2++;
        casa3++;
    }
    if(vinicius>=5600 && vinicius<5800)
    {
        casa1++;
    }
    else if(vinicius>=5800 && vinicius<6000)
    {
        casa1++;
        casa3++;
    }
    else if(vinicius<5600)
    {

    }
    else
    {
        casa1++;
        casa2++;
        casa3++;
    }
    if(elias>=7600 && elias<8400)
    {
        casa1++;
        casa3++;
    }
    else if(elias<7600)
    {

    }
    else
    {
        casa1++;
        casa2++;
        casa3++;
    }
    casa1v = casa1*10;
    casa2v = casa2*20;
    casa3v = casa3*30;
    if(casa1==0 && casa2==0 && casa3==0)
    {
        printf("NAO TERA SHOW!\n");
    }
    else if(casa1v>=casa2v && casa1v>=casa3v)
    {
        printf("CASA 1\n%d\n%d\n",casa1v,casa1);
    }
    else if(casa2v>casa1v && casa2v>=casa3v)
    {
        printf("CASA 2\n%d\n%d\n",casa2v,casa2);
    }
    else 
    {
        printf("CASA 3\n%d\n%d\n",casa3v,casa3);
    }
    return 0;
}