#include<iostream.h>
#include<stdio.h>
main()
{ 
  printf("Enter the choice in between 1 and 5 : );
  int choice=0;
  scanf("%d",&choice);
  switch(choice)
  {
    case 1:
           printf("Food item - Pizza\nPrice - 239\n");
           break;
    case 2:
           print("Food item - Burger\nPrice - 129\n");
           break;
    case 3:
           print("Food item - pasta\nPrice - 179\n");
           break;
    case 4:
          printf("Food item - French Fries\nPrice - 99\n");
          break;
          
    case 5:
           printf("Food item - Sandwich\nPrice - 149\n");
           break;
    default :
           printf("Invalid choice.Enter the choice in between 1 and 5 : ");
  }
  }
