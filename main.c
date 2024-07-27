#include<stdio.h>
void addingbook();
void readingbooks();
FILE *fptr;
char added_book[100];
char DatabaseRead[999];
int main()
{
    int add_code;
    printf("Welcome back!! , How can I help you today? \n The options are adding a book or reading the database,\n If you wish to add a book please enter 1 and press enter. \n You can read the database by enter 2 and press enter. \n Choice:");
    scanf("%i" , &add_code);
    getchar();
    if (add_code == 1)
    {
        addingbook();
    } else if (add_code == 2)
    {
        readingbooks();
    }
    return 0;
}
void addingbook()
{
        printf("Please enter the name of the book: ");
        fgets(added_book,100,stdin);
        fptr = fopen("lib-db.sdkapdb" , "a");
        fprintf(fptr , "%s" , added_book);
        printf("Book added succesfully!!\n");
        fclose(fptr);
}
void readingbooks()
{
        printf("Reading the database.");
        fptr = fopen("lib-db.sdkapdb" , "r");
        while(fgets(DatabaseRead, 999, fptr)) {
        printf("%s", DatabaseRead);
        }
        fclose(fptr);
}
