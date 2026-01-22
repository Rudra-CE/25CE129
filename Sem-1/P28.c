#include <stdio.h>
#include <string.h>

union BookDetails {
    int accessionNumber;
    char title[100];
    char author[100];
    float price;
    int isIssued;
};

struct Book {
    int accessionNumber;
    char title[100];
    char author[100];
    float price;
    int isIssued; 
};

void enterBookDetails(struct Book *book, int *isEntered);
void displayBookDetails(struct Book book, int isEntered);

int main() {
    struct Book book;
    int choice;
    int isEntered = 0; 

    printf("\n=== CHARUSAT Library ===\n");
    
    while(1) {
        printf("\n--- MENU ---\n");
        printf("1. Enter Book Details\n");
        printf("2. Display Book Details\n");
        printf("0. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        getchar(); 
        
        if(choice == 0) {
            printf("\nThank you for using CHARUSAT Library!\n");
            break;
        }
        
        switch(choice) {
            case 1:
                enterBookDetails(&book, &isEntered);
                break;
                
            case 2:
                displayBookDetails(book, isEntered);
                break;
                
            default:
                printf("\nInvalid choice! Please try again.\n");
        }
    }
    printf("Name : Vaghasiya Rudra Hiteshbhai\n");
    printf("Id   : 25CE129\n");
    printf("Batch: C-2\n");
    
    return 0;
}


void enterBookDetails(struct Book *book, int *isEntered) {
    union BookDetails temp;
    
    printf("\n--- Enter Book Details ---\n");
    
    printf("Enter Accession Number: ");
    scanf("%d", &temp.accessionNumber);
    book->accessionNumber = temp.accessionNumber;
    getchar();
    
    printf("Enter Book Title: ");
    scanf("%[^\n]", temp.title);
    strcpy(book->title, temp.title);
    getchar();
    
    printf("Enter Author Name: ");
    scanf("%[^\n]", temp.author);
    strcpy(book->author, temp.author);
    getchar();
    
    printf("Enter Book Price (Rs.): ");
    scanf("%f", &temp.price);
    book->price = temp.price;
    
    printf("Is book issued? (1 for Yes, 0 for No): ");
    scanf("%d", &temp.isIssued);
    book->isIssued = temp.isIssued;
    
    *isEntered = 1; 
    printf("\nBook details entered successfully!\n");
}

void displayBookDetails(struct Book book, int isEntered) {
    if(isEntered == 0) {
        printf("\nNo book details available!\n");
        printf("Please enter book details first (Option 1).\n");
        return;
    }
    
    printf("\n--- Book Details ---\n");
    printf("Accession Number : %d\n", book.accessionNumber);
    printf("Title            : %s\n", book.title);
    printf("Author           : %s\n", book.author);
    printf("Price            : Rs. %.2f\n", book.price);
    printf("Status           : %s\n", book.isIssued ? "ISSUED" : "AVAILABLE");
    
}
