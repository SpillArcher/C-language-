#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define nameLength 20

/**5. Define a structure called "Book" with members for title, author, and price. Write a program to
create an array of three books, assign values to their members, and print the details of the
books.**/

///Structure Called Book
typedef struct
{
    ///variable declaration
  char title[nameLength];
  char author[nameLength];
  int price;

}Book;

int main()
{
 Book book1;///Declare book 1 of type Book
 Book book2;///Declare book 2 of type Book
 Book book3;///Declare book 3 of type Book

 ///Book 1 specification

strcpy(book1.title ,"PeterPan" );
strcpy(book1.author, "J.M. Barrie");
book1.price =1000;

///Book 2 specification

strcpy(book2.title ,"Spiderman");
strcpy(book2.author ,"Stan Lee");
book2.price = 50;

///Book 3 specification

strcpy(book3.title ,"Harry Potter" );
strcpy(book3.author, "J.K. Rowling");
book3.price =99;

///Print Book 1 Info

printf("Book 1 : \n");
printf("Title : %s\n",book1.title);
printf("Author : %s\n",book1.author);
printf("Price of Book : R%d\n",book1.price);
printf("\n");

///Print Book 2 Info

printf("Book 2 : \n");
printf("Title : %s\n",book2.title);
printf("Author : %s\n",book2.author);
printf("Price of Book : R%d\n",book2.price);
printf("\n");

///Print Book 3 Info

printf("Book 3 : \n");
printf("Title : %s\n",book3.title);
printf("Author : %s\n",book3.author);
printf("Price of Book : R%d\n",book3.price);
printf("\n");
    return 0;
}


