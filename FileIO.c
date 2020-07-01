#include <stdio.h>
#include <string.h>

int item_exists(int item_id);

int main()
{
	int id;
	scanf("%d",&id);
	item_exists(id);
	return 0;
}

int item_exists(int item_id)
{
	FILE *fp;
	fp = fopen("myfile.txt","r");
	int Line = 47;
	fseek(fp,(item_id-1)*Line,SEEK_SET);
	int id,count,discnt;float price;
	char sen[50];
	fscanf(fp,"%d%s%d%f%d",&id,sen,&count,&price,&discnt);
	// sen[46]='\0';
	printf("Cursor at :%d\n",SEEK_CUR );
	printf("ID : %d\n",id );
	printf("String is : %s\n",sen );
	// fscanf(fp,"%6d",&id);
	// printf("%d %d\n",item_id,id );
	// if(id==item_id)
	// 	return 1;
	// else
	// 	return 0;
	fclose(fp);
}