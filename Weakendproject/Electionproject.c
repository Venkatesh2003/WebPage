#include<stdio.h>

#define CANDIDATE_COUNT

#define FristCandidate "Venkatesh Raichur"
#define SecondCandidate "Sangamesh Vakkar"
#define ThirdCandidate "Mihir Kulkarni"
#define FourthCandidate "Salanadar M"

int votesCount1=0, votesCount2=0, votesCount3=0, votesCount4=0, spoiledtvotes=0;

void castVote(){
int choice;    

printf("\n\n ### Please choose your Candidate ####\n\n");
printf("\n 1. %s", FristCandidate);
printf("\n 2. %s", SecondCandidate);
printf("\n 3. %s", ThirdCandidate);
printf("\n 4. %s", FourthCandidate);
printf("\n 5. %s", "None of These");

printf("\n\n Input your choice (1 - 4) : ");
scanf("%d",&choice);

switch(choice){
    case 1: votesCount1++; break;
    case 2: votesCount2++; break;
    case 3: votesCount3++; break;
    case 4: votesCount4++; break;
    case 5: spoiledtvotes++; break;
    default: printf("\n Error: Wrong Choice !! Please retry");
             //hold the screen
             getchar();
}
printf("\n thanks for vote !!");
}

void votesCount(){
printf("\n\n ##### Voting Stats as per the voters ####");
printf("\n %s - %d ", FristCandidate, votesCount1);
printf("\n %s - %d ", SecondCandidate, votesCount2);
printf("\n %s - %d ", ThirdCandidate, votesCount3);
printf("\n %s - %d ", FourthCandidate, votesCount4);
printf("\n %s - %d ", "Spoiled Votes", spoiledtvotes); 
}

void getLeadingCandidate(){
    printf("\n\n  #### Leading Candiate ####\n\n");
    if(votesCount1>votesCount2 && votesCount1>votesCount3 && votesCount1 >votesCount4)
    printf("[%s]",FristCandidate);
    else if (votesCount2>votesCount3 && votesCount2>votesCount4 && votesCount2 >votesCount1)
    printf("[%s]",SecondCandidate);
    else if(votesCount3>votesCount4 && votesCount3>votesCount2 && votesCount3 >votesCount1)
    printf("[%s]",ThirdCandidate);
    else if(votesCount4>votesCount1 && votesCount4>votesCount2 && votesCount4 >votesCount3)
    printf("[%s]",FourthCandidate);
    else
    printf("----- Warning !!! No-win situation----");    
    
    
    
}

int main()
{
int i;
int choice;

do{
printf("##############3Welcome To My Frist Weakend Project");
printf("\n\n ###### Welcome to Election/Voting Project 2022 Of NEC0819066 Venkatesh Raichur#####");
printf("\n\n 1. Cast the Vote");
printf("\n 2. Find Vote Count");
printf("\n 3. Find leading Candidate");
printf("\n 0. Exit");

printf("\n\n Please enter your choice : ");
scanf("%d", &choice);

switch(choice)
{
case 1: castVote();break;
case 2: votesCount();break;
case 3: getLeadingCandidate();break;
default: printf("\n Error: Invalid Choice");
}
}while(choice!=0);

//hold the screen
getchar();

return 0;
}