#include<stdio.h>
int main()
{
  int l,b,w,c,nl,nb,area,parea,tarea,cost;
  scanf("%d%d%d%d",&l,&b,&w,&c);
  area=l*b;
  nl=l+(2*w);
  nb=b+(2*w);
  parea=nl*nb;
  tarea=parea-area;
  cost=c*tarea;
  printf("%d",cost);
  return 0;
}