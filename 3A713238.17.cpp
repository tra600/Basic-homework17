#include <stdio.h>�@

#include <stdlib.h> 

int main(int argc, char *argv[]) {

	int a[5]={0};

	int x=0, min;



	printf("             ��M�}�C���̤p�Ȫ��{��              \n");

	printf("-------------------------------------------------\n");   

	printf("�гs���J���ӼƭȡG\n");

	for(x=0;x<5;x++)

	{

	   printf("��%d����ơG", x+1 );

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

	printf("�̤p�ȬO�G%d\n\n",min); 

	system("PAUSE");	

	return 0;

}
