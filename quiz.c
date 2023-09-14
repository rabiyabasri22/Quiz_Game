#include<stdio.h>
int main()
{
    int i;
    int ans1,ans2,ans3,ans4,ans5;
    int p1,p2,p3,p4,p5,p6,p7,p8,p9,p10;
    int p01,p02,p03,p04,p05,p06,p07,p08,p09,p010;
    time_t t;
	 time(&t);
	 int count=0;
	 mainhome:system("cls");
	 printf("\n\t\t________________________________________");

     printf("\n\t\t\t        WELCOME ");
     printf("\n\t\t\t          TO ");
     printf("\n\t\t\t       QUIZ GAME ");
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t    TEST YOUR GK..SET YOUR HIGHSCORES!!    ") ;
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");

printf("\n\t\t>>>Press 7 to start the game\n");
printf("\t\t>>>Press 0 to quit the game\n");

     printf("\n\t\t________________________________________\n\n");
     printf("\t");
     	for(i=0;i<80;i++)
		printf("=");
	    printf("\n\t\tCurrent date and time : %s",ctime(&t));
	    printf("\t");
	    for(i=0;i<80;i++)
		printf("=");
    printf("\n");

scanf("%d", &i);

    if(i==7)
    {
printf("The game has started\n\n");
    }
    else if(i==0)
    {
printf("The game has ended\n\n");
    }
    else
    {
printf("invalid\n\n");
    }

    if(i==7)
    {
        system("cls");
printf("\n\n\n1)Which one is the first search engine in internet?\n\n");
printf("1)Google\n");
printf("2)Archie\n");
printf("3)Wais\n");
printf("4)Altavista\n");

printf("Enter Your Answer : ");
scanf("%d", &ans1);

         if(ans1==2)
         {
printf("\n\t**Correct Answer**\n");
              p1 = 5;
              count+=1;
printf("\n\tYou have scored %d points\n", p1);
         }
         else
         {
printf("\n\t**Wrong Answer**\n");
              p01 = 0;
printf("\n\tYou have scored %d points\n", p01);
         }

printf("\n\n\n2)Which one is the first web browser invented in 1990?\n\n");
printf("1)Internet Explorer\n");
printf("2)Mosaic\n");
printf("3)Mozilla\n");
printf("4)Nexus\n");

printf("Enter Your Answer : ");
scanf("%d", &ans2);

         if(ans2==4)
         {
printf("\n\t**Correct Answer**\n");
              p2 = 5;
              count+=1;
printf("\n\tYou have scored %d points\n", p2);
         }
         else
         {
printf("\n\t**Wrong Answer**\n");
              p02 = 0;
printf("\n\tYou have scored %d points\n", p02);
         }

printf("\n\n\n3)First computer virus is known as?\n\n");
printf("1)Rabbit\n");
printf("2)Creeper Virus\n");
printf("3)Elk Cloner\n");
printf("4)SCA Virus\n");

printf("Enter Your Answer : ");
scanf("%d", &ans3);

         if(ans3==2)
         {
printf("\n\t**Correct Answer**\n");
              p3 = 5;
              count+=1;
printf("\n\tYou have scored %d points\n", p3);
         }
         else
         {
printf("\n\t**Wrong Answer**\n");
              p03 = 0;
printf("\n\tYou have scored %d points\n", p03);
         }

printf("\n\n\n4)Firewall in computer is used for?\n\n");
printf("1)Security\n");
printf("2)Data Transmission\n");
printf("3)Monitoring\n");
printf("4)Authentication\n");

printf("Enter Your Answer : ");
scanf("%d", &ans4);

         if(ans4==1)
         {
printf("\n\t**Correct Answer**\n");
              p4 = 5;
              count+=1;
printf("\n\tYou have scored %d points\n", p4);
         }
         else
         {
printf("\n\t**Wrong Answer**\n");
              p04 = 0;
printf("\n\tYou have scored %d points\n", p04);
         }

printf("\n\n\n5)Which of the following is not a database management software?\n\n");
printf("1)Mysql\n");
printf("2)Oracle\n");
printf("3)cobal\n");
printf("4)Sybase\n");

printf("Enter Your Answer : ");
scanf("%d", &ans5);

         if(ans5==3)
         {
printf("\n\t**Correct Answer**\n");
              p5 = 5;
              count+=1;
printf("\n\tYou have scored %d points\n", p5);
         }
         else
         {
printf("\n\t**Wrong Answer**\n");
              p05 = 0;
printf("\n\tYou have scored %d points\n", p05);
         }
    }
    int r=count*5;
    if(r==25)
    printf("\n\nCongrats! you have scored %d points **WELL DONE**\n ",r);
    else if(r>=10)
        printf("\n\nYou have scored %d points **BETTER LUCK NEXT TIME**\n ",r);
    else printf("\n\nCongrats! You have scored %d points **GIVE A BETTER TRY NEXT TIME**\n ",r);
    return 0;
}