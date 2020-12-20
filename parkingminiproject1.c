#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int menu();
void bus();
void car();
void bike();
void riksha();
void cycle();
void showstatus();
void delete();
int nob=0,noc=0,nobi=0,nor=0,nocy=0,amount=0,count=0;
/* here nob= number of buses
        noc= number of cars
        nobi=number of bikes
        nor= number of riksha
        nocy=number of cycle
*/
void main()
{
	while(1)
{
	switch(menu())
{
	case 1:
		bus();
		break;
	case 2:
		car();
		break;
	case 3:
	    bike();
	    break;
	case 4:
	    riksha();
	    break;
	case 5:
		 cycle();
		break;
	case 6:
		showstatus();
		break;
	case 7:
		delete();
		break;
	case 8:
		exit(0);
	default :
		printf("\n invalid choice:");
	}
	getch();
}
			
}
int menu()
{

int ch;
printf("\n1. enter bus:");
printf("\n2. enter car:");
printf("\n3. enter bike:");
printf("\n4. enter riksha:");
printf("\n5. enter cycle:");
printf("\n6. show status:");
printf("\n7. delete data ");
printf("\n8. exit:");
printf("\n\nenter your choice:");
scanf("%d",&ch);
return(ch);
}
void showstatus()
{
	printf("\n number of buses=%d",nob);
	printf("\n number of cars=%d",noc);
	printf("\n number of bikes=%d",nobi);
	printf("\n number of riksha=%d",nor);
	printf("\n number of cycle=%d",nocy);
	printf("\n total no. of vehicle=%d",count);
	printf("\n total amount=%d",amount);
}
void delete()
{
	nob=0;
	noc=0;
	nobi=0;
	nor=0;
	nocy=0;
	amount=0;
	count=0;
}
void bus()
{
	printf("\n entry successful");
	nob++;
	amount=amount+100;
}
void car()
{
	printf("\n entry successful");
	noc++;
	amount=amount+70;
}
void bike()
{
    printf("\n entry successful");
    nobi++;
    amount=amount+50;
}
void riksha()
{
	printf("\n entry successful");
	nor++;
	amount=amount+30;
}
void cycle()
{
	printf("\n entry successful");
	nocy++;
	amount=amount+20;
}

