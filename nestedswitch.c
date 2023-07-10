#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a,b;
	system("clear");
	printf("\n l.B.Tech");
       	printf("\n 2.degree");
        printf("\n enter your selection");
	scanf("%d",&a);
	switch(a)
	{
               case 1:
		      printf("\n you have choosen B.Tech");
		      printf("\n 1.computer science B.Tech");
		      printf("\n 2.Information Technology B.Tech");
		      printf("\n 3.electronical and Communication  B.Tech");
		      printf("\n 4.Electrical and Electonical B.Tech");
		      printf("\n chose which one do you want");
		      scanf("%d",&a);
		      switch(a)
		      {
                             case 1:
			             printf("\n you have choosen computer science");
				     break;
			     case 2:    
				     printf("\n you have choosen Information Technology");
				     break;
                             case 3:   
				    printf("\n you have choosen electronical and communication");
                                     break;
                             case 4:
                                    printf("\n you have choosen Electrical and Electronical ");
                                      break;
			     default:
			             printf("\n you have choosen invalid option");
		      }
	       case 2:
		       printf("\n you have choosen degree");
                       printf("\n 1.Bsc computers");
                       printf("\n 2.Bsc general");
                       printf("\n 3.Bsc agri");
                       printf("\n 4.Bsc Bio-Tech");
                       printf("\n 5.B.com computers");
                       printf("\n 6.B.com General");                               
                       printf("\n 7.B.A General");
                       printf("\n 8.B.A computers");
                       printf("\n chose which one do you want");
                       scanf("%d",&b);
                       switch(b)
		       {
			       case 1:
				       printf("\n you have choosen Bsc computers");
				       break;
			       case 2:       
				       printf("\n you have choosen Bsc general ");
                                       break;
			       case 3:       
				       printf("\n you have choosen Bsc agri ");
                                       break;
			       case 4:
			               printf("\n you have choosen Bsc Bio-Tech ");
                                       break;
			       case 5:
		                       printf("\n you have choosen B.com computers ");
                                       break;
			       case 6:
                                       printf("\n you have choosen B.com Genera ");
                                       break;
			       case 7:
                                       printf("\n you have choosen B.A General ");  
                                       break;
			       case 8:
                                       printf("\n you have choosen B.A computers ");
                                        break;
			       default:
				printf("\n you have choosen invalid option");
		       }


	       default:
		       printf("\n you have choosen a wrong option");
	}
}




		       
