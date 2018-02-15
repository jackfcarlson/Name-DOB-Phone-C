//a c program that prints the first name (up to 80 characters), DOB and phone #
//that the user has entered

#include <stdio.h>

int main (){
  char firstname[40];
  char lastname[40];
  int month, day, year;
  int phone[10];

//get user information
  printf("Enter your first name: ");
  scanf("%s", &firstname);
  printf("Enter your last name: ");
  scanf("%s", &lastname);

  printf("Enter the Numeric Month of Birth (July is '07'): ");
  scanf("%d", &month);
  printf("Enter the day of your birth (ex. '14'): ");
  scanf("%d", &day);
  printf("Enter the year of your birth(ex. '1999'): ");
  scanf("%d", &year);

  printf("Enter your phone number (10 digits): ");
  scanf("%s", &phone);

//print user information

//some blank lines before printing
printf("\n\n");

printf("Your name is: %s %s.\n", firstname, lastname);
printf("Your birthdate is: ");

//could have used an enum in this, but decided to
//go with a switch statement
switch (month)
 {

   case 1:
        printf("January");
        break;
    case 2:
        printf("February");
        break;
    case 3:
        printf("March");
        break;
    case 4:
        printf("April");
        break;
    case 5:
        printf("May");
        break;
    case 6:
        printf("June");
        break;
    case 7:
        printf("July");
        break;
    case 8:
        printf("August");
        break;
    case 9:
        printf("September");
        break;
    case 10:
        printf("October");
        break;
    case 11:
        printf("November");
        break;
    case 12:
        printf("December");
        break;
    default:
        printf("%d\n", month);
        break;
}
  printf(" %d, %d.\n", day, year);
  printf("Your Phone Number is: %s\n", phone);

  //some blank lines after printing
  printf("\n\n");

return 0;
}
