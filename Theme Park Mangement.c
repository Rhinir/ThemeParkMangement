/*c program project-Theme park management*/
#include<stdio.h>
typedef struct entry_fee
{
    int adult,senior_citizen,children;
    char place[20],date[10];
}x;
typedef struct room_booking
{
    int adult,children,days;
    char type[30],place[20],date[10];
}y;
typedef struct member
{
    char name[20],joint[20],address[40],address2[40],dob[10],date[10];
    int phone,joint_phone;
}z;
void park();
void resort();
void timing_rate();
void membership();
void bookings();
void book_now();
int main()
{
    int option;
    char line[40];
    FILE *fp1;
    fp1=fopen("menu.txt","r");
    while(1)
    {
        if(fgets(line,40,fp1)==NULL)
            break;
        printf("%s",line);
    }
    if(fp1==NULL)
    {
        printf("Could not open file menu.txt ");
        return 0;
    }
    choice:
      scanf("%d",&option);
      switch(option)
      {
        case 1:park();
               break;
        case 2:resort();
               break;
        case 3:timing_rate();
               break;
        case 4:membership();
               break;
        case 5:bookings();
               break;
        case 6:book_now();
               break;
        case 7:goto end;break;
        default:printf("Invalid Choice.Enter a valid input:\n");
                goto choice;
      }
    fcloseall();
    end:
    return 0;
}
void park()
{
    int option,option2,option3;
    char line[40];
    FILE *fp2,*fp3,*fp4,*fp5;
    park:
    fp2=fopen("parks.txt","r");
    fp3=fopen("op1.txt","r");
    while(1)
    {
        if(fgets(line,40,fp3)==NULL)
            break;
        printf("%s",line);
    }
    while(1)
    {
        if(fgets(line,40,fp2)==NULL)
            break;
        printf("%s",line);
    }
    if(fp2==NULL)
    {
        printf("Could not open file parks.txt ");
        return 0;
    }
    if(fp3==NULL)
    {
        printf("Could not open file op1.txt ");
        return 0;
    }
    choice:
      scanf("%d",&option);
      switch(option)
      {
        case 1:rides:
               fp5=fopen("rides.txt","r");
               while(1)
                 {
                   if(fgets(line,40,fp5)==NULL)
                      break;
                   printf("%s",line);
                 }
                 if(fp5==NULL)
                 {
                    printf("Could not open file rides.txt ");
                    return 0;
                 }
                 choice2:
                  scanf("%d",&option2);
                  switch(option2)
                  {
                      case 1:fp4=fopen("landr.txt","r");
                             while(1)
                             {
                               if(fgets(line,40,fp4)==NULL)
                                  break;
                               printf("%s",line);
                             }
                             if(fp4==NULL)
                             {
                               printf("Could not open file landr.txt ");
                               return 0;
                             }
                             fclose(fp4);
                             break;
                      case 2:fp4=fopen("waterr.txt","r");
                             while(1)
                             {
                               if(fgets(line,40,fp4)==NULL)
                                  break;
                               printf("%s",line);
                             }
                             if(fp4==NULL)
                             {
                               printf("Could not open file waterr.txt ");
                               return 0;
                             }
                             fclose(fp4);
                             break;
                      case 3:fp4=fopen("highthrillr.txt","r");
                             while(1)
                             {
                               if(fgets(line,40,fp4)==NULL)
                                  break;
                               printf("%s",line);
                             }
                             if(fp4==NULL)
                             {
                               printf("Could not open file highthrillr.txt ");
                               return 0;
                             }
                             fclose(fp4);
                             break;
                      case 4:fp4=fopen("kidsr.txt","r");
                             while(1)
                             {
                               if(fgets(line,40,fp4)==NULL)
                                  break;
                               printf("%s",line);
                             }
                             if(fp4==NULL)
                             {
                                printf("Could not open file kidsr.txt ");
                                return 0;
                             }
                             fclose(fp4);
                             break;
                      case 5:goto park;
                             break;
                      case 6:main();
                             break;
                      default:printf("Invalid Choice.Enter a valid input:\n");
                              goto choice2;
                  }
                 if(option2<=4&&option2>=1)
                 {
                    input:
                    scanf("%d",&option3);
                    if(option3==0)
                       goto rides;
                    else if(option3==1)
                       main();
                    else
                      {printf("Invalid input.Enter valid number:\n");
                       goto input;
                      }
                 }
                 fclose(fp5);
                 break;
        case 2:fp5=fopen("restaurants.txt","r");
               while(1)
                 {
                   if(fgets(line,40,fp5)==NULL)
                      break;
                   printf("%s",line);
                 }
                 if(fp5==NULL)
                 {
                    printf("Could not open file restaurants.txt ");
                    return 0;
                 }
                 choice3:
                  scanf("%d",&option2);
                  if(option2==0)
                       goto park;
                  else if(option2==1)
                       main();
                  else
                    {printf("Invalid input.Enter valid number:\n");
                     goto choice3;
                    }
               fclose(fp5);
               break;
        case 3:book_now();
               break;
        case 4:main();
               break;
        default:printf("Invalid Choice.Enter a valid input:\n");
               goto choice;
      }
      fclose(fp3);
      fclose(fp2);
      return 0;
}
void resort()
{
    int option,option2;
    char line[40];
    FILE *fp6,*fp7,*fp8;
    resort:
    fp6=fopen("op2.txt","r");
    fp7=fopen("resorts.txt","r");
    while(1)
    {
        if(fgets(line,40,fp6)==NULL)
            break;
        printf("%s",line);
    }
    while(1)
    {
        if(fgets(line,40,fp7)==NULL)
            break;
        printf("%s",line);
    }
    if(fp6==NULL)
    {
        printf("Could not open file op2.txt ");
        return 0;
    }
    if(fp7==NULL)
    {
        printf("Could not open file resorts.txt ");
        return 0;
    }
    choice:
      scanf("%d",&option);
      switch(option)
      {
        case 1:fp8=fopen("rooms.txt","r");
               while(1)
               {
                 if(fgets(line,40,fp8)==NULL)
                    break;
                 printf("%s",line);
               }
               if(fp8==NULL)
               {
                 printf("Could not open file rooms.txt ");
                 return 0;
               }
               fclose(fp8);
               break;
        case 2:fp8=fopen("restaurants2.txt","r");
               while(1)
               {
                 if(fgets(line,40,fp8)==NULL)
                    break;
                 printf("%s",line);
               }
               if(fp6==NULL)
               {
                 printf("Could not open file restaurants2.txt ");
                 return 0;
               }
               fclose(fp8);
               break;
        case 3:book_now();
               break;
        case 4:main();
               break;
        default:printf("Invalid Choice.Enter a valid input:\n");
                goto choice;
      }
      if(option==1||option==2)
      {
          input:
          scanf("%d",&option2);
          if(option2==0)
            goto resort;
          else if(option2==1)
            main();
          else
            {printf("Invalid input.Enter valid choice:\n");
             goto input;
            }
      }
    fclose(fp6);
    fclose(fp7);
    return 0;
}
void timing_rate()
{
    int option;
    char line[40];
    FILE *fp9;
    fp9=fopen("op3.txt","r");
    while(1)
    {
        if(fgets(line,40,fp9)==NULL)
            break;
        printf("%s",line);
    }
    if(fp9==NULL)
    {
        printf("Could not open file op3.txt ");
        return 0;
    }
    input:
    scanf("%d",&option);
    if(option==1)
        main();
    else
        {printf("Invalid input.Enter a valid input:\n");
         goto input;
        }
    fclose(fp9);
    return 0;
}
void membership()
{
    z a;
    int option;
    char line[40];
    FILE *fp10;
    fp10=fopen("op4.txt","r");
    while(1)
    {
        if(fgets(line,40,fp10)==NULL)
            break;
        printf("%s",line);
    }
    if(fp10==NULL)
    {
        printf("Could not open file op4.txt ");
        return 0;
    }
    fclose(fp10);
    input:
    scanf("%d",&option);
    if(option==1)
    {
        printf("MEMBERSHIP FORM\n");
        printf("Enter your name:");
        scanf(" %s",a.name);
        printf("Enter your date of birth(dd/mm/yyyy):");
        scanf(" %s",a.dob);
        printf("Enter your address:");
        scanf(" %s",a.address);
        printf("Enter your phone number:");
        scanf("%d",&a.phone);
        printf("Enter the joint applicant's name:");
        scanf(" %s",a.joint);
        printf("Enter the joint applicant's address:");
        scanf(" %s",a.address2);
        printf("Enter the joint applicant's phone number:");
        scanf("%d",&a.joint_phone);
        printf("Enter the date of applying(dd/mm/yyyy):");
        scanf(" %s",a.date);
        fp10=fopen("op4.txt","w");
        fprintf(fp10,"...................ANNAI THEME PARK MEMBERSHIP CARD.....................\n");
        fprintf(fp10,"Name                                     : %c\nDate of Birth                             : %c\nAddress                                   : %c\nMobile number                             : %d\nJoint applicant's name                    : %c\nJoint applicant's address                 : %c\nJoint applicant's phone number            : %d\n",a.name,a.dob,a.address,a.phone,a.joint,a.address2,a.joint_phone);
        fprintf(fp10,"Card valid for two years from %s.\n",a.date);
        fclose(fp10);
        main();
    }
    else if(option==2)
        main();
    else
    {
        printf("Invalid input.Enter valid input:");
        goto input;
    }
    return 0;
}
void bookings()
{
    int option;
    char line[40];
    FILE *fp11;
    fp11=fopen("op5.txt","r");
    while(1)
    {
        if(fgets(line,40,fp11)==NULL)
            break;
        printf("%s",line);
    }
    if(fp11==NULL)
    {
        printf("Could not open file op5.txt ");
        return 0;
    }
    fclose(fp11);
    input:
    scanf("%d",&option);
    if(option==1)
        main();
    else
    {
        printf("Invalid input.Enter valid input:");
        goto input;
    }
    return 0;
}
void book_now()
{
    x m;
    y n;
    int op1,op2,op3;
    float total,a,b;
    char line[40];
    FILE *fp12;
    book:
    printf("1.Parks\n2.Resorts\n3.Home\n\nEnter your choice(1/2/3):");
    choice:
    scanf("%d",&op1);
    if(op1==1)
    {
      fp12=fopen("op1.txt","r");
      while(1)
      {
        if(fgets(line,40,fp12)==NULL)
           break;
        printf("%s",line);
      }
      if(fp12==NULL)
      {
        printf("Could not open file op1.txt ");
        return 0;
      }
      fclose(fp12);
      printf("Choose your desirable place(1/2/3/4/5):");
      input:
      scanf("%d",&op2);
      switch(op2)
      {
          case 1:strcpy(m.place,"Coimbatore");break;
          case 2:strcpy(m.place,"Mysore");break;
          case 3:strcpy(m.place,"Bangalore");break;
          case 4:goto book;break;
          case 5:main();break;
          default:printf("Invalid input.Enter valid input:");
                  goto input;
      }
      printf("Enter the number of children(5-15),adults(16-60),senior citizen(61-80) and the date of visit(dd/mm/yyyy):");
      scanf("%d %d %d %s",&m.children,&m.adult,&m.senior_citizen,m.date);
      total=(m.children*699.00)+(m.adult*999.00)+(m.senior_citizen*799.00);
      fp12=fopen("op4.txt","wt+");
      fprintf(fp12,"................................................\n");
      fprintf(fp12,"             ANNAI THEME PARK  \n");
      fprintf(fp12,"                   %s\n",m.place);
      fprintf(fp12,"................................................\n\n");
      fprintf(fp12,"..................ENTRY PASS...............\n");
      fprintf(fp12,"Date: %s\n",m.date);
      fprintf(fp12,"Category          Nos      Rate/person      Total\n");
      fprintf(fp12,"Children          %d        Rs.699.00       Rs.%.2f\n",m.children,(m.children*699.00));
      fprintf(fp12,"Adults            %d        Rs.999.00       Rs.%.2f\n",m.adult,(m.adult*999.00));
      fprintf(fp12,"Senior citizens   %d        Rs.799.00       Rs.%.2f\n\n",m.senior_citizen,(m.senior_citizen*799.00));
      fprintf(fp12,"                              TOTAL   :     Rs.%.2f\n",total);
      fprintf(fp12,"                               TAX    :     Rs.%.2f\n\n",0.1*total);
      fprintf(fp12,"                           TOTAL CASH :     Rs.%.2f\n",total*1.1);
      fclose(fp12);
      main();
    }
    else if(op1==2)
    {
        fp12=fopen("op2.txt","r");
        while(1)
        {
          if(fgets(line,40,fp12)==NULL)
             break;
          printf("%s",line);
        }
        if(fp12==NULL)
        {
          printf("Could not open file op2.txt ");
          return 0;
        }
        fclose(fp12);
        printf("Choose your desirable place(1/2/3/4):");
        choice2:
        scanf("%d",&op2);
        switch(op2)
        {
          case 1:strcpy(n.place,"Chennai");break;
          case 2:strcpy(n.place,"Bangalore");break;
          case 3:goto book;break;
          case 4:main();break;
          default:printf("Invalid input.Enter valid input:");
                  goto choice2;
        }
        fp12=fopen("rooms.txt","r");
        while(1)
        {
          if(fgets(line,40,fp12)==NULL)
             break;
          printf("%s",line);
        }
        if(fp12==NULL)
        {
          printf("Could not open file rooms.txt ");
          return 0;
        }
        printf("Enter your choice(1/2/3/4/5");
        choice3:
        scanf("%d",&op3);
        switch(op3)
        {
            case 1:strcpy(n.type,"Executive rooms");
                   a=500.00;b=1000.00;
                   break;
            case 2:strcpy(n.type,"Deluxe rooms");
                   a=1000;b=2000;
                   break;
            case 3:strcpy(n.type,"Suite rooms");
                   a=1200;b=3000;
                   break;
            case 4:goto book;break;
            case 5:main();break;
            default:printf("Invalid input.Enter valid input:");
                    goto choice3;
        }
        printf("Enter the number of children(5-15),adults(above 15) no.of days of staying and the day of visiting(dd/mm/yyyy):");
        scanf("%d %d %d %s",&n.children,&n.adult,&n.days,n.date);
        fp12=fopen("op5.txt","wt+");
        total=(n.children*a)+(n.adult*b);
        fprintf(fp12,"...................................................\n");
        fprintf(fp12,"                ANNAI RESORTS                 \n");
        fprintf(fp12,"                    %s\n",n.place);
        fprintf(fp12,"...................................................\n\n");
        fprintf(fp12,"..............ROOM BOOKING.........................\n");
        fprintf(fp12,"Date: %s\n",n.date);
        fprintf(fp12,"Room type             Category      Nos      Rate/person/day      Total\n");
        fprintf(fp12,"  %s                  Children      %d        Rs.%.2f              %.2f\n",n.type,n.children,a,(n.children*a));
        fprintf(fp12,"  %s                  Adult         %d        Rs.%.2f              %.2f\n",n.type,n.adult,b,(n.adult*b));
        fprintf(fp12,"                                                        TOTAL     :%.2f\n",total);
        fprintf(fp12,"                                                  FOR %d DAYS     :%.2f\n",n.days,(total*n.days));
        fprintf(fp12,"                                                          TAX     :%.2f\n",0.15*total*n.days);
        fprintf(fp12,"                                                   TOTAL CASH     :%.2f\n",1.15*total*n.days);
        fclose(fp12);
        main();
    }
    else if(op1==3)
        main();
    else
    {
        printf("Invalid input.Enter valid input:");
        goto choice;
    }
    return 0;
}
