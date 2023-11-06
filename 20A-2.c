// Create a structure book with book title, author, publication, and price. 
// Read data of 3 books and display.

#include<stdio.h>

struct Book{
    char book_title[30];
    int Author;
    int Publication;
    float Price;
};

void main(){
    struct Book b1;
    char book_title[30];
    int Author;
    int Publication;
    float Price;
    int i;
    for(i=0;i<4;i++){
    printf("Provide the Tiltle of the Book : ");
    scanf("%c",b1.book_title);
    printf("Provide the Author's name of the Book : ");
    scanf("%d",&b1.Author);
    printf("Provide the Publication of the Book : ");
    scanf("%d",&b1.Publication);
    printf("Provide the Price of the Book : ");
    scanf("%f",&b1.Price);
    }

}