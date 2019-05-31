#include <stdio.h>　

#include <stdlib.h> 

int main(int argc, char *argv[]) {

	int a[5]={0};

	int x=0, min;



	printf("             找尋陣列中最小值的程式              \n");

	printf("-------------------------------------------------\n");   

	printf("請連續輸入五個數值：\n");

	for(x=0;x<5;x++)

	{

	   printf("第%d筆資料：", x+1 );

	   scanf("%d", &a[x]);

	}

	min=a[0];

	for(x=0;x<5;x++)

	{

	  if (min>a[x])	

	  {

		  min=a[x];

	  }

	}

	printf("最小值是：%d\n\n",min); 

	system("PAUSE");	

	return 0;

}

