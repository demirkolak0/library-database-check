#include<stdio.h>
int main()
{
    FILE *fptr;
    int add_code;
    char added_book[100];
    char DatabaseRead[999];
    printf("Welcome back!! , How can I help you today? \n The options are adding a book or reading the database,\n If you wish to add a book please enter 1 and press enter. \n You can read the database by enter 2 and press enter. \n Choice:");
    scanf("%i" , &add_code);
    getchar();
    if (add_code == 1)
    {
        printf("Please enter the name of the book: ");
        fgets(added_book,100,stdin);
        fptr = fopen("lib-db.sdkapdb" , "a");
        fprintf(fptr , "%s" , added_book);
        printf("Book added succesfully!!");
        fclose(fptr);
    } else if (add_code == 2)
    {
        printf("Reading the database.");
        fptr = fopen("lib-db.sdkapdb" , "r");
        while(fgets(DatabaseRead, 999, fptr)) {
            printf("%s", DatabaseRead);
        }
        fclose(fptr);
    }
    return 0;
}
