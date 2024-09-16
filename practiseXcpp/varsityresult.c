//Created By Momin_Rifat
#include<stdio.h>
#include<string.h>
int main() 
{
    printf("\nWellcome To My GPA Calculaton App\n\n");
    printf("Created By Md.Momin Ali Rifat\n");
    printf("----------------------------------\n");
    printf("----------------------------------\n\n");
    while(1)
    {
       printf("If you want to find out the minimum score of A+ in the FINAL exam, then type option -- '1'\n");
       printf("If you want to find out the predicted CGPA, then type option -- '2'\n");
       printf("If you want to none of them, then type '0' -- ''\n");
       int option;
       printf("type your option\n");
       scanf("%d",&option);
       switch(option)
       {
            case 1:
            {
                char name[10];
                printf("Enter You name please :\n");
                scanf("%s",name);
                printf("Thank You %s To Use My Apps\n\n",name);

                for(int i = 1; i <= 7; i++)
                {
                    char subject_name[10];
                    double ct_marks[4];
                    int mid_mark;
                    int credit;

                    printf("Type your subject name\n");
                    scanf("%s",subject_name);
                    printf("Type your subject Ct marks\n");
                    for(int i = 0; i < 4; i++)
                    {
                        printf("Type your Ct - %d\n",i + 1);
                        printf("If this subject has no CT please type '0'\n");
                        scanf("%lf",&ct_marks[i]);
                    }
                    int i, j;
                    double temp;
                    for(i = 0; i < 4; i++) 
                    {
                        for(j = i + 1; j < 4; j++) 
                        {
                            if(ct_marks[i] < ct_marks[j]) 
                            {
                            temp = ct_marks[i];
                            ct_marks[i] = ct_marks[j];
                            ct_marks[j] = temp;
                            }
                        }
                    }
                    printf("Here your best three CT marks\n");
                    printf("The makes are: %.2lf, %.2lf, %.2lf\n", ct_marks[0], ct_marks[1], ct_marks[2]);
                    printf("Total marks of best three CT is %.2lf\n",ct_marks[0] + ct_marks[1] + ct_marks[2]);
                    printf("Type your subject MID marks\n");
                    scanf("%d",&mid_mark);
                    printf("Total marks of CT + final out of 50 is = %.2lf\n",ct_marks[0] + ct_marks[1] + ct_marks[2] + mid_mark);
                    printf("Type your subject Credit\n");
                    scanf("%d",&credit);
                    printf("In final term exam you need minimum %.2lf in %s to get A+\n",(80 - (ct_marks[0] + ct_marks[1] + ct_marks[2] + mid_mark)),subject_name);
                    printf("Best of luck\n\n");
                }
            break;
            }
            case 2:
            {
                char name[10];
                printf("Enter your name please\n");
                scanf("%s",name);
                double phy_101;
                double phy_102;
                double cse_101;
                double cse_102;
                double math_101;
                double hss_111;
                double eng_101;
                printf("Type your PHY-101 grade-point\n");
                scanf("%lf",&phy_101);
                printf("Type your PHY-102 grade-point\n");
                scanf("%lf",&phy_102);
                printf("Type your CSE-101 grade-point\n");
                scanf("%lf",&cse_101);
                printf("Type your CSE-102 grade-point\n");
                scanf("%lf",&cse_102);
                printf("Type your MATH-101 grade-point\n");
                scanf("%lf",&math_101);
                printf("Type your HSS-111 grade-point\n");
                scanf("%lf",&hss_111);
                printf("Type your ENG-101 grade-point\n");
                scanf("%lf",&eng_101);

                double sum = (phy_101*3.00) + (phy_102*1.50) + (cse_101*3.00) + (cse_101*1.50) + (math_101*3.00) + (hss_111*3.00) + (eng_101*3.00);
                double grade = sum / 18.00;

                if(grade >= 4)
                {
                    printf("You will Get A+\n");
                    printf("Your grade is %.2lf\n",grade);
                    printf("Also you will get 100 percent waiver\n");
                    printf("BEST OF LUCK %s TRY BETTER FOR NEXT EXAM\n",name);
                }
                else if(grade >= 3.75)
                {
                    printf("You Will Get A\n");
                    printf("Your grade is %.2lf\n",grade);
                    printf("Also you will get 50 percent waiver\n");
                    printf("BEST OF LUCK %s TRY BETTER FOR NEXT EXAM\n",name);
                }
                else if(grade >= 3.50)
                {
                    printf("You Will Get A-\n");
                    printf("Your grade is %.2lf\n",grade);
                    printf("Also you will get 25 percent waiver\n");
                    printf("BEST OF LUCK %s TRY BETTER FOR NEXT EXAM\n",name);
                }
                else if(grade >= 3.25)
                {
                    printf("You Will Get B+\n");
                    printf("Your grade is %.2lf\n",grade);
                    printf("BEST OF LUCK %s TRY BETTER FOR NEXT EXAM\n",name);
                }
                else if(grade >= 3.00)
                {
                    printf("You Will Get B\n");
                    printf("Your grade is %.2lf\n",grade);
                    printf("BEST OF LUCK %s TRY BETTER FOR NEXT EXAM\n",name);
                }
                else if(grade >= 2.75)
                {
                    printf("You Will Get B-\n");
                    printf("Your grade is %.2lf\n",grade);
                    printf("BEST OF LUCK %s TRY BETTER FOR NEXT EXAM\n",name);
                }
                else if(grade >= 2.50)
                {
                    printf("You Will Get C+\n");
                    printf("Your grade is %.2lf\n",grade);
                    printf("BEST OF LUCK %s TRY BETTER FOR NEXT EXAM\n",name);
                }
                else if(grade >= 2.25)
                {
                    printf("You Will Get C\n");
                    printf("Your grade is %.2lf\n",grade);
                    printf("BEST OF LUCK %s TRY BETTER FOR NEXT EXAM\n",name);
                }
                else if(grade >= 2.00)
                {
                    printf("You Will Get D\n");
                    printf("Your grade is %.2lf\n",grade);
                    printf("BEST OF LUCK %s TRY BETTER FOR NEXT EXAM\n",name);
                }
                else
                {
                    printf("Sorry you will fail\n");
                    printf("Your grade is %.2lf\n",grade);
                    printf("BEST OF LUCK %s TRY BETTER FOR NEXT EXAM\n",name);
                }
                break;
            }
            default :
            {
                printf("Thank You for using this app\n");
            }
            }
        }
    return 0;
}