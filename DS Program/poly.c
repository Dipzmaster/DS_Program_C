#include<conio.h>
#include<stdio.h>
//STRUCTURE OF POLYMNOMIAL
typedef struct POLYNOMIAL
{
int pow;
int coff;
struct POLYNOMIAL *next; }POLY;
//FUNCTION TO INSERT THE NODE OF POLYNOMIAL
POLY* insert(POLY *NODE,int power,int cof)
{
POLY *item=(POLY *)malloc(sizeof(POLY));
POLY *temp=NODE;
item->pow=power; item->coff=cof;
item->next=NULL;
if(!NODE)
NODE=item;
else
{ while(temp->next!=NULL)
temp=temp->next;
temp->next=item;
}
return NODE;
} //FUNCTION TO DISPLAY POLYNOMIAL
void display(POLY *TEMP)
{
POLY *NODE=TEMP;
if(NODE==NULL)
printf("\n The Polynomial is empty. . "); else
{
while(NODE)
{
printf("%3d(%3d)",NODE->coff,NODE->pow);
NODE=NODE->next; if(NODE)
printf(" -->");
}
}
} //FUNCTION TO ADD TWO POLYNOMIAL
POLY* polyadd(POLY *fst,POLY *snd)
{
POLY *TEMP=NULL;
POLY *item;
int cof,pow; while(fst&&snd)
{
item=(POLY *)malloc(sizeof(POLY));
if(fst->pow==snd->pow)
{
item->pow=fst->pow; item->coff=fst->coff+snd->coff;
item->next=NULL;
fst=fst->next;
snd=snd->next;
}
else {
if(fst->pow>snd->pow)
{
item->pow=fst->pow;
item->coff=fst->coff;
item->next=NULL; fst=fst->next;
}
else
{
item->pow=snd->pow;
item->coff=snd->coff; item->next=NULL;
snd=snd->next;
}
}
if(!TEMP)
TEMP=item; else
{
POLY *temp=TEMP;
while(temp->next!=NULL)
temp=temp->next;
temp->next=item; }
}
while(fst)
{
item=(POLY *)malloc(sizeof(POLY));
item->pow=fst->pow; item->coff=fst->coff;
item->next=NULL;
fst=fst->next;
if(!TEMP)
TEMP=item;
else {
POLY *temp=TEMP;
while(temp->next!=NULL)
temp=temp->next;
temp->next=item;
} }
while(snd)
{
item=(POLY *)malloc(sizeof(POLY));
item->pow=snd->pow;
item->coff=snd->coff; item->next=NULL;
snd=snd->next;
if(!TEMP)
TEMP=item;
else
{ POLY *temp=TEMP;
while(temp->next!=NULL)
temp=temp->next;
temp->next=item;
}
} return TEMP;
} void main()
{
POLY *fst=NULL,*snd=NULL,*trd=NULL;
int cof,pow;
clrscr();
printf("\n Plz enter the first polynomial."); printf("\n Enter power = -1 to stop.");
do
{
printf("\n Coff : ");
scanf("%d",&cof);
printf("Power : "); scanf("%d",&pow);
if(pow!=-1)
fst=insert(fst,pow,cof);
}while(pow!=-1);
printf("\n Plz enter the second polynomial.");
printf("\n Enter power = -1 to stop."); do
{
printf("\n Coff : ");
scanf("%d",&cof);
printf("Power : ");
scanf("%d",&pow); if(pow!=-1)
snd=insert(snd,pow,cof);
}while(pow!=-1);
clrscr();
printf("\n The first polynomial is. . .\n");
display(fst); printf("\n\n The second polynomial is. . .\n");
display(snd);
trd=polyadd(fst,snd);
printf("\n\n The result is. . . \n");
display(trd);
getch();
}
