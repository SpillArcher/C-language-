#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string.h>
/**
/* define simple structure
struct
{unsigned int widthValidated;
unsigned int heightValidated;
} status1;
/* define a structure with bit fields
struct
{unsigned int widthValidated : 1;
unsigned int heightValidated : 1;
unsigned int breathValidated : 1;
} status2;
struct
{unsigned int widthValidated;
unsigned int heightValidated;
unsigned int breathValidated ;
} status3;

struct
{unsigned int age : 4;///Limits the integers to 3 bit///
} Age;
int main( )
{printf( "Memory size occupied by status1 : %ld\n", sizeof(status3));
printf( "Memory size occupied by status2 : %ld\n", sizeof(status1));
printf( "Memory size occupied by status3 : %ld\n", sizeof(status2));

Age.age = 4;
printf( "Sizeof( Age ) : %ld\n", sizeof(Age) );
printf( "Age.age : %d\n", Age.age );
Age.age = 7;
printf( "Age.age : %d\n", Age.age );
Age.age = 8;
printf( "Age.age : %d\n", Age.age );


return 0;}**/

/**typedef struct
{
    unsigned int    Led1 :1;
    unsigned int    Led2 :1;
    unsigned int    Led3 :1;
    unsigned int    Led4 :1;
    unsigned int    Led5 :1;
    unsigned int    Led6 :1;
    unsigned int    Led7 :1;
    unsigned int    Led8 :1;
}LedControl;


void printStatus(LedControl status)
{
 printf("My Device Status : \n");
    printf("Led1 is : %s\n",status.Led1? "On":"Off");
    printf("Led2 is : %s\n",status.Led2? "On":"Off");
    printf("Led3 is : %s\n",status.Led3? "On":"Off");
    printf("Led4 is : %s\n",status.Led4? "On":"Off");
    printf("Led5 is : %s\n",status.Led5? "On":"Off");
    printf("Led6 is : %s\n",status.Led6? "On":"Off");
    printf("Led7 is : %s\n",status.Led7? "On":"Off");
    printf("Led8 is : %s\n",status.Led8? "On":"Off");

}
int main()
{
    LedControl statu = {0};

    statu.Led1 = 1;
    statu.Led2 = 1;
    statu.Led3 = 2;
    statu.Led4 = 1;
    statu.Led5 = 5;
    statu.Led6 = 3;
    statu.Led7 = 1;
    statu.Led8 = 2;

    printStatus(statu);


}**/

/**By choosing the appropriate bit-field width in a C program, you
  can efficiently allocate the memory used by the program. Thus,
  using bit-field, what will be the size of a structure called
  employee, with members id, sex, & age assigned values 203, M, &
  23, respectively.**/

/**typedef struct
{
    unsigned int Id :1;
    char sex :1;
    unsigned int Age: 1;
}Employee;

void gang(Employee status)
{
    printf("Member : \n");
    printf("ID : %s\n",status.Id? "203" : "Not real");
    printf("Sex : %s\n",status.sex?"M" : "F");
    printf("Age : %s\n",status.Age?"23" : "False");

}
int main()
{
    Employee find={0};

    find.Id=1;
    find.sex=1;
    find.Age=1;

    gang(find);
}**/
/**Write a structure called Date in C program, whose members are
  day, month, & year. Ensure the memory allocated to your program
  is at most 1 byte. Print the size of the struct and the date stored
  within its members.**/

  typedef struct
  {
      unsigned int day :3;
      unsigned int month :7;
      unsigned int year :15;
  }Date;

  int main()
  {
    Date status;

    printf("Size of structure : %d\n", sizeof(status));
      status.day=8;
      status.month=11;
      status.year = 2005;

      printf("Day : %d\n",status.day);
      printf("Month : %d\n",status.month);
      printf("Year : %d\n",status.year);
      printf("Birthday : %d/%d/%d",status.day,status.month,status.year);
  }


