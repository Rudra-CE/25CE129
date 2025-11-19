#include <stdio.h>
#include <string.h>

#define MAX_TEAMS 50

struct Coach {
    char name[50];
    int age;
    int experience; 
};

struct Team {
    char teamName[50];
    char sportType[30];
    struct Coach coach; 
};

int main() {
    struct Team teams[MAX_TEAMS]; 
    int count = 0;
    int choice;
    char searchName[50];
    char searchSport[30];

    do {
        printf("\n====== CHARUSAT SPORTS TEAM MANAGEMENT SYSTEM ======\n");
        printf("1. Add New Team\n");
        printf("2. Search Team by Name\n");
        printf("3. Search Team by Sport Type\n");
        printf("4. Display All Teams\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); 

        switch (choice) {
            case 1:
                if (count < MAX_TEAMS) {
                    printf("\nEnter Team Name: ");
                    fgets(teams[count].teamName, 50, stdin);
                    teams[count].teamName[strcspn(teams[count].teamName, "\n")] = '\0';

                    printf("Enter Sport Type: ");
                    fgets(teams[count].sportType, 30, stdin);
                    teams[count].sportType[strcspn(teams[count].sportType, "\n")] = '\0';

                    printf("Enter Coach Name: ");
                    fgets(teams[count].coach.name, 50, stdin);
                    teams[count].coach.name[strcspn(teams[count].coach.name, "\n")] = '\0';

                    printf("Enter Coach Age: ");
                    scanf("%d", &teams[count].coach.age);

                    printf("Enter Years of Experience: ");
                    scanf("%d", &teams[count].coach.experience);
                    getchar();

                    count++;
                    printf("\n Team added successfully!\n");
                } else {
                    printf("\n Maximum team limit (%d) reached!\n", MAX_TEAMS);
                }
                break;

            case 2:
                printf("\nEnter Team Name to Search: ");
                fgets(searchName, 50, stdin);
                searchName[strcspn(searchName, "\n")] = '\0';

                int foundByName = 0;
                for (int i = 0; i < count; i++) {
                    if (strcmp(teams[i].teamName, searchName) == 0) {
                        printf("\n--- Team Found ---\n");
                        printf("Team Name      : %s\n", teams[i].teamName);
                        printf("Sport Type     : %s\n", teams[i].sportType);
                        printf("Coach Name     : %s\n", teams[i].coach.name);
                        printf("Coach Age      : %d\n", teams[i].coach.age);
                        printf("Experience     : %d years\n", teams[i].coach.experience);
                        foundByName = 1;
                        break;
                    }
                }
                if (!foundByName)
                    printf("\n Team not found!\n");
                break;

            case 3:
                printf("\nEnter Sport Type to Search: ");
                fgets(searchSport, 30, stdin);
                searchSport[strcspn(searchSport, "\n")] = '\0';

                int foundBySport = 0;
                for (int i = 0; i < count; i++) {
                    if (strcasecmp(teams[i].sportType, searchSport) == 0) { // Case-insensitive match
                        if (!foundBySport)
                            printf("\n--- Teams Found for Sport: %s ---\n", searchSport);
                        printf("\nTeam Name      : %s\n", teams[i].teamName);
                        printf("Coach Name     : %s\n", teams[i].coach.name);
                        printf("Coach Age      : %d\n", teams[i].coach.age);
                        printf("Experience     : %d years\n", teams[i].coach.experience);
                        foundBySport = 1;
                    }
                }
                if (!foundBySport)
                    printf("\n No teams found for sport type '%s'!\n", searchSport);
                break;

            case 4:
                if (count == 0) {
                    printf("\n No teams to display!\n");
                } else {
                    printf("\n===== All Teams and Coach Details =====\n");
                    for (int i = 0; i < count; i++) {
                        printf("\nTeam #%d\n", i + 1);
                        printf("Team Name      : %s\n", teams[i].teamName);
                        printf("Sport Type     : %s\n", teams[i].sportType);
                        printf("Coach Name     : %s\n", teams[i].coach.name);
                        printf("Coach Age      : %d\n", teams[i].coach.age);
                        printf("Experience     : %d years\n", teams[i].coach.experience);
                    }
                }
                break;

            case 5:
                printf("\n Exiting the system. Goodbye!\n");
                break;

            default:
                printf("\n Invalid choice! Please try again.\n");
        }

    } while (choice != 5);
printf("Name : Vaghasiya Rudra Hiteshbhai\n");
    printf("Id   : 25CE129\n");
    printf("Batch: C-2\n");
    return 0;
}

