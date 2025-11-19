 #include <stdio.h>

int main() {
    int choice,total_bill= 0;

    printf("\nWelcome to Foodies Restaurant \n");
    printf("Menu:\n");
    printf("1. Burger        - rs.150\n");
    printf("2. Pizza         - rs.200\n");
    printf("3. Pasta         - rs.120\n");
    printf("4. Sandwich      - rs.100\n");
    printf("5. French Fries  - rs.80\n");
    printf("Enter 0 to finish your order.\n");

    do {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);


        switch (choice) {
            case 1:
                total_bill += 150;
                printf("Burger added to your order.\n");
                break;
            case 2:
                total_bill += 200;
                printf("Pizza added to your order.\n");
                break;
            case 3:
                total_bill += 120;
                printf("Pasta added to your order.\n");
                break;
            case 4:
                total_bill += 100;
                printf("Sandwich added to your order.\n");
                break;
            case 5:
                total_bill += 80;
                printf("French Fries added to your order.\n");
                break;
            case 0:
                printf("Order completed.\n");
                break;
            default:
                printf("Invalid choice! Please select from the menu.\n");
        }
    } while (choice != 0);

    printf("\nYour total bill is: rs.%d\n", total_bill);
    printf("Thank you for visiting Foodies Restaurant!\n");
     printf("Name : Vaghasiya Rudra Hiteshbhai\n");
    printf("Id   : 25CE129\n");
    printf("Batch: C-2\n");
    return 0;
}





















}


