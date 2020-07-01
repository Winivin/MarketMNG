#include "FileIO.c"

char pass[100]="asdfgh\0";

void substring(char s[], char sub[], int p, int l) {
   int c = 0;
   
   while (c < l) {
      sub[c] = s[p+c-1];
      c++;
   }
   sub[c] = '\0';
}

int main()
{
	char inp[100];
	printf("Enter Admin Password: ");
	//scanf("%s",inp);
	if(1)//strcmp(pass,inp)==0)
	{
		while(1)
		{
			printf("\n\nADMINISTRATOR\n1. Update Item\n");
			printf("2. Add Item\n");
			printf("3. Delete Item\n");
			printf("4. Add User\n");
			printf("5. Delete User\n");
			printf("6. Update User\n");
			printf("7. Exit\n");
			char ch='0';
			scanf(" %c",&ch);
			if(ch=='1')
			{
				int item_id;
				printf("Enter Item Id: ");
				scanf("%d",&item_id);
				if(item_exists(item_id))
				{
					while(1)
					{
						printf("\n\n1. Update Name\n");
						printf("2. Update Count\n");
						printf("3. Update Price\n");
						printf("4. Update Discount\n");
						printf("5. Exit\n");
						char nch='0';
						scanf(" %c",&nch);
						if(nch=='1')
						{
							char item_name_a[21];//20
							printf("Enter Item Name: ");
							scanf("%s",item_name_a);
							char item_name[20];
							substring(item_name_a,item_name,0,20);
							//update_item_name(item_id,item_name);
						}
						else if(nch=='2')
						{
							int count;//5
							printf("Enter Item Count: ");
							scanf("%d",&count);
							//update_item_count(item_id,count);
						}
						else if(nch=='3')
						{
							float price;//6+3
							printf("Enter Item Price: ");
							scanf("%f",&price);
							//update_item_price(item_id,price);
						}
						else if(nch=='4')
						{
							int disc;//2
							printf("Enter Item Discount: ");
							scanf("%d",&disc);
							//update_item_discount(item_id,disc);
						}
						else
							break;
					}
					printf("Item Id %d Updated\n",item_id);
				}
				else
					printf("Invalid Item Id\n");
			}
			else if(ch=='2')
			{
				int item_id;//6
				printf("Enter Item Id: ");
				scanf("%d",&item_id);
				if(!item_exists(item_id))
				{
					printf("Item Id %d Added\n",item_id);
				}
				else
					printf("Item Id Already Exists\n");
			}
			else if(ch=='3')
			{
				int item_id;
				printf("Enter Item Id: ");
				scanf("%d",&item_id);
				if(item_exists(item_id))
				{
					printf("Item Id %d Deleted\n",item_id);
				}
				else
					printf("Invalid Item Id\n");
			}/*
			else if(ch=='4')
			{
				int user_id;//6
				printf("Enter User Id: ");
				scanf("%d",&user_id);
				if(!user_exists(user_id))
				{
					printf("User Id %d Added\n",user_id);
				}
				else
					printf("User Id Already Exists\n");
			}
			else if(ch=='5')
			{
				int user_id;
				printf("Enter User Id: ");
				scanf("%d",&user_id);
				if(user_exists(user_id))
				{
					printf("User Id %d Deleted\n",user_id);
				}
				else
					printf("Invalid User Id\n");
			}
			else if(ch=='6')
			{
				int user_id;
				printf("Enter User Id: ");
				scanf("%d",&user_id);
				if(user_exists(user_id))
				{
					while(1)
					{
						printf("\n\n1. Update Name\n");
						printf("2. Update Phone Number\n");
						printf("3. Update Status\n");
						printf("4. Change Password\n");
						printf("5. Exit\n");
						char nch='0';
						scanf(" %c",&nch);
						if(nch=='1')
						{
							char user_name_a[21];//20
							printf("Enter User Name: ");
							scanf("%s",user_name_a);
							char user_name[20];
							substring(user_name_a,user_name,0,20);
							update_user_name(user_id,user_name);
						}
						else if(nch=='2')
						{
							char phno[11];//10
							printf("Enter User Phone Number: ");
							scanf("%s",phno);
							char phonenumber[10];
							substring(phno,phonenumber,0,10);
							update_user_phonenumber(user_id,phonenumber);
						}
						else if(nch=='3')
						{
							int status;//1
							printf("Enter User Status: ");
							scanf("%d",&status);
							update_user_status(user_id,status);
						}
						else if(nch=='4')
						{
							char npass[16];//15
							printf("Enter New Password: ");
							scanf("%s",npass);
							char password[15];
							substring(npass,password,0,15);
							update_user_password(user_id,password);
						}
						else
							break;
					}
					printf("User Id %d Updated\n",user_id);
				}
				else
					printf("Invalid User Id\n");
			}*/
			else
				break;
		}
	}
	else
		printf("Wrong Password\n");
	return 0;
}
