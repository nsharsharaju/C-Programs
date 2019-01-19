#include<stdio.h>

 void main()

 {
 	int day,month,year,leap;
 	printf("Enter day<space>month<space>year\n");
 	scanf("%d%d%d",&day,&month,&year);
 	leap=0;
 	if(year%4==0&&year%100!=0)
 	leap=1;
 	if(month>12||month<1)
 	{
 		printf("wrong date");
 		return;
	 }
	if(day>31||day<1)
	{
		printf("wrong date");
		return;
	 }

	if(day==31){
		if(month==2||month==4||month==6||month==9||month==11)
		{
		printf("wrong date");
		return;
	}
	}
	if(month==2&&day==30)
	{
		printf("wrong date");
		return;
	}
	if(month==2&&day==29&&leap==0)
	{
		printf("wrong date");
		return;
	}
	printf("The date is valid");
	return;
 }
