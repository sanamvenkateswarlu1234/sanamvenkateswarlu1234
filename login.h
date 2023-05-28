void login()
{
	int a=0,i=0;
    char uname[10],c=' ';
    char pword[10],code[10];
    char user[10]="admin";
    char pass[10]="admin";
    do
{
  printf("\n  == LOGIN FORM  == ");
  printf(" \n ENTER USERNAME:-");
	scanf("%s", &uname);
	printf(" \n ENTER PASSWORD:-");
	while(i<10)
	{
	    pword[i]=getch();
	    c=pword[i];
	    if(c==13) break;
	    else printf("*");
	    i++;
	}
	pword[i]='\0';

	i=0;
  
	if(strcmp(uname,"admin")==0 && strcmp(pword,"admin")==0)
	{
	printf("WELCOME TO OUR SYSTEM !!!! LOGIN IS SUCCESSFUL\n");
	printf("\n\tPress any key to continue...");
	getch();//holds the screen
	break;
	}
	else
	{
		printf("\n SORRY !!!!  LOGIN IS UNSUCESSFUL");
		a++;
		getch();//holds the screen
	}
}
	while(a<=2);
	if (a>2)
	{
		printf("\nSorry you have entered the wrong username and password for four times!!!");
		getch();
		}
		system("cls");
}
