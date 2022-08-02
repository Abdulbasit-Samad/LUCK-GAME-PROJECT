#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
struct member
{
	char name[30];
};
void LUCKGAME();
void LuckBase(int *pt,int n,struct member a[],int k);
main()
{ 
 while(1)
{
  LUCKGAME();
  system("pause");
  system("cls");
}
}
void LUCKGAME()
{
	int i,j,n,k=2,*pt;
     struct member a[k];
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n========================================================================================================================================================================\n\n");
	printf("\n                       >>>>>>>>>>>>>>>>>>>>                     WELCOME TO LUCK GAME             <<<<<<<<<<<<<<<<<<<<<                                        ");
	printf("\n\n\n\n========================================================================================================================================================================\n\n");
	system("pause");
	system("cls");
	printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t>>>>>>>>>>>>>>>> INSTRUCTIONS TO PLAY<<<<<<<<<<<<<<<<<\n\n");
	printf("\t\t\t\t__________________________________________________________________________________________\n");
	printf("\t\t\t\t\t\t_______________________________________________________\n");
	printf("\t\t\t\t\t\t\t\t___________________________\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t>>>>>>     YOU HAVE TO SELECT EVEN NO OF BOXES .........\n\n\n\n");
	printf("\t\t\t\t\t\t>>>>>>     THE DESIRED NO OF BOXES WILL BE GENERATED CONTAINING HIDDEN CASH .........\n\n\n\n");
	printf("\t\t\t\t\t\t>>>>>>     EACH PLAYER HAS TO SELECT THE BOXES ONE BY ONE .........\n\n\n\n");
	printf("\t\t\t\t\t\t>>>>>>     THE CASH WILL BE GIVEN TO THE PLAYERS AFTER EACH TURN .........\n\n\n\n");
	printf("\t\t\t\t\t\t>>>>>>     IN THE END THE PLAYER WHO WILL GET THE GREATER AMOUNT WILL BE DECLARED WINNER .........\n\n\n\n\n");
	printf("\t\t\t\t\t\t***************************** BEST OF LUCK ********************************\n\n");
	system("pause");
	system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                            FOR PLAYER A:\n\n");
    printf("                                            =============\n\n\n\n");
    printf("                                            ENTER YOUR NAME: ");
    fflush(stdin);
    gets(a[0].name);
    printf("\n\n\n\n                                            FOR PLAYER B:\n\n");
    printf("                                            =============\n\n\n\n");
    printf("                                            ENTER YOUR NAME: ");
    fflush(stdin);
    gets(a[1].name);
    system("cls");
    for(i=0;i<2;i++){
    for(j=0;j<strlen(a[i].name);j++){
    if(a[i].name[j]>='a'&& a[i].name[j]<='z')
	a[i].name[j]-=32;	
	}	
	}
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                                       ENTER EVEN NO OF BOXES: ");
    scanf("%d",&n);
    system("cls");
    while(n%2!=0){
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                                             PLEASE CHOOSE EVEN: ");
    scanf("%d",&n);
    system("cls");
	}
	system("cls");
    pt=(int*) calloc(n,sizeof(int));
    if(pt==NULL){
    printf("Memory not allocated");
    exit(0);
    }
    srand(time(0));
    for(i=0;i<n;i++){
    *(pt+i)=rand()/11+100;
    }
     LuckBase(pt,n,a,k);
}
void LuckBase(int *pt,int n,struct member a[],int k)
{    FILE *fp1,*fp2;
     int i=0,cA=0,cB=0,x,y,z,h=0,g=0,e=0,f=0,b[n],p1[n],p2[n],v;
     time_t start,end;
     fp1=fopen("player1(record).txt","w");
     fp2=fopen("player2(record).txt","w");
     fprintf(fp1,"\n\n >>>>>>>>>>> %s'S RECORD <<<<<<<<<<<<<<\n\n",a[0].name);
     fprintf(fp2,"\n\n >>>>>>>>>>> %s'S RECORD <<<<<<<<<<<<<<\n\n",a[1].name);
     for(v=0;v<n;v++){
     b[v]=0;
	 p1[v]=0;
	 p2[n]=0;	
	 }
    while(i<n)
    { 
    start = time(NULL);
    for(x=h;x<n/2;x++){	
    printf("\n\n\n\n\n\n\n\n\n\n\n                     %s'S TURN # %d :\n\n",a[0].name,e+1);
    printf("                    ==========================\n\n\n\n");
    printf("                    BOXES AVAILABLE:  |");
    for(v=0;v<n;v++){
    if(b[v]!=-1)
	printf(" %d |",v+1);	
	}
    printf("\n\n\n\n                    CHOOSE A BOX: ");
    scanf("%d",&z);
    while(z>n || z<1 || p1[z-1]==-1 || p2[z-1]==-2){
    if(z>n || z<1){
    system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n                     %s'S TURN # %d :\n\n",a[0].name,e+1);
    printf("                    ==========================\n\n\n\n");
    printf("                    BOXES AVAILABLE:  |");
    for(v=0;v<n;v++){
    if(b[v]!=-1)
	printf(" %d |",v+1);	
	}	
    printf("\n\n\n\n                    HAVE NO SUCH BOX , CHOOSE ANOTHER: ");
	scanf("%d",&z);	
	}
	else if(p2[z-1]==-2){
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n                     %s'S TURN # %d :\n\n",a[0].name,e+1);
    printf("                    ==========================\n\n\n\n");
    printf("                    BOXES AVAILABLE:  |");
    for(v=0;v<n;v++){
    if(b[v]!=-1)
	printf(" %d |",v+1);	
	}		
	printf("\n\n\n\n                    ALREADY CHOOSEN BY ''%s'', CHOOSE ANOTHER: ",a[1].name);
	scanf("%d",&z);	
	}
	else{
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n                     %s'S TURN # %d :\n\n",a[0].name,e+1);
    printf("                    ==========================\n\n\n\n");
    printf("                    BOXES AVAILABLE:  |");
    for(v=0;v<n;v++){
    if(b[v]!=-1)
	printf(" %d |",v+1);	
	}		
	printf("\n\n\n\n                    ALREADY CHOOSEN BY ''YOU'', CHOOSE ANOTHER: ");
	scanf("%d",&z);		
	}
    }
    printf("\n\n\n                    BOX %d CONTAINS : %d Rs (cash)\n",z,*(pt+(z-1)));
    end = time(NULL);
    fprintf(fp1,"TURN # %d\n\n",e+1);
    fprintf(fp1,"=========\n\n\n");
    fprintf(fp1,"TOOK %f SEC TO DECIDE\n\n",difftime(end,start));
    fprintf(fp1,"SELECTED BOX : %d\n\n",z);
    fprintf(fp1,"BOX %d CONTAINED : %d (cash)\n\n",z,*(pt+(z-1)));
    cA=cA+*(pt+(z-1));
    b[z-1]=-1;
    p1[z-1]=-1;
    i++;
    e++;
    printf("\n\n\n                    YOU HAVE EARNED TILL NOW : %d Rs\n\n\n",cA);
    printf("************************************************************************************************************************************************************************");
    break;
    }
    system("pause");
    system("cls");
    h=x;
    start = time(NULL);
    for(y=g;y<n/2;y++){ 
    printf("\n\n\n\n\n\n\n\n\n\n\n                    %s'S TURN # %d :\n\n",a[1].name,f+1);
    printf("                    ==========================\n\n\n\n");
    printf("                    BOXES AVAILABLE:  |");
    for(v=0;v<n;v++){
    if(b[v]!=-1)
	printf(" %d |",v+1);	
	}
    printf("\n\n\n\n                    CHOOSE A BOX: ");
    scanf("%d",&z);
    while(z>n || z<1 || p1[z-1]==-1 || p2[z-1]==-2){
    if(z>n || z<1){
    system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n                    %s'S TURN # %d :\n\n",a[1].name,f+1);
    printf("                    ==========================\n\n\n\n");
    printf("                    BOXES AVAILABLE:  |");
    for(v=0;v<n;v++){
    if(b[v]!=-1)
	printf(" %d |",v+1);	
	}	
    printf("\n\n\n\n                    HAVE NO SUCH BOX , CHOOSE ANOTHER: ");
	scanf("%d",&z);	
	}
	else if(p1[z-1]==-1){
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n                    %s'S TURN # %d :\n\n",a[1].name,f+1);
    printf("                    ==========================\n\n\n\n");
    printf("                    BOXES AVAILABLE:  |");
    for(v=0;v<n;v++){
    if(b[v]!=-1)
	printf(" %d |",v+1);	
	}		
	printf("\n\n\n\n                    ALREADY CHOOSEN BY ''%s'', CHOOSE ANOTHER: ",a[0].name);
	scanf("%d",&z);	
	}
	else{
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n                    %s'S TURN # %d :\n\n",a[1].name,f+1);
    printf("                    ==========================\n\n\n\n");
    printf("                    BOXES AVAILABLE:  |");
    for(v=0;v<n;v++){
    if(b[v]!=-1)
	printf(" %d |",v+1);	
	}		
	printf("\n\n\n\n                    ALREADY CHOOSEN BY ''YOU'', CHOOSE ANOTHER: ");
	scanf("%d",&z);		
	}	
    }
    printf("\n\n\n                    BOX %d CONTAINS : %d Rs (cash)\n",z,*(pt+(z-1)));
    end = time(NULL);
    fprintf(fp2,"TURN # %d\n\n",f+1);
    fprintf(fp2,"=========\n\n\n");
    fprintf(fp2,"TOOK %f SEC TO DECIDE\n\n",difftime(end,start));
    fprintf(fp2,"SELECTED BOX : %d\n\n",z);
    fprintf(fp2,"BOX %d CONTAINED : %d (cash)\n\n",z,*(pt+(z-1)));
    cB=cB+*(pt+(z-1));
	b[z-1]=-1;
	p2[z-1]=-2; 
    i++;
    f++;
    printf("\n\n\n                    YOU HAVE EARNED TILL NOW : %d Rs\n\n\n",cB);
    printf("************************************************************************************************************************************************************************");
    break;
    }
    system("pause");
    system("cls");
    g=y;
    }
    fprintf(fp1,"__________________________________________________\n\n");
    fprintf(fp1,"      TOTAL: %d\n\n",cA);
    fprintf(fp1,"__________________________________________________\n\n");
    fprintf(fp2,"\n\n");
    fprintf(fp2,"__________________________________________________\n\n");
    fprintf(fp2,"      TOTAL: %d\n\n",cB);
    fprintf(fp2,"__________________________________________________\n\n");
    if(cA>cB){
    	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n           >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>    WINNER OF THE GAME     <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n\n\n\n");
    	printf("________________________________________________________________________________________________________________________________________________________________________\n\n");
    	printf("                                                            ''%s'' (AWARDED CASH OF RS %d)\n\n",a[0].name,cA);
    	printf("________________________________________________________________________________________________________________________________________________________________________");
	}
	else{
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                                             ''WINNER OF THE GAME''\n\n\n\n");
    	printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
    	printf("                                                            ''%s'' (AWARDED CASH OF RS %d)\n\n",a[1].name,cB);
    	printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
	}
    fclose(fp1);
    fclose(fp2);
    free(pt);
}

