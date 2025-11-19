#include <stdio.h>

void note_length(char note[]);
void reverse_note(char note[]);
void compare_notes(char note[]);
void copy_note(char note[]);
void concatenate_notes(char note[]);
void to_upper(char note[]);
void to_lower(char note[]);
void capitalize_words(char note[]);

int main() {
    char note[500];
    int choice;
    
    printf("\n=== Rudra's Note-Taking Program ===\n");
    printf("\nEnter your note: ");
    scanf("%[^\n]", note);
    
    while(1) {
        printf("\n--- OPERATIONS MENU ---\n");
        printf("Current Note: %s\n\n", note);
        printf("1. Calculate Length\n");
        printf("2. Reverse Note\n");
        printf("3. Compare with Another Note\n");
        printf("4. Copy Note\n");
        printf("5. Concatenate with Another Note\n");
        printf("6. Convert to Upper Case\n");
        printf("7. Convert to Lower Case\n");
        printf("8. Capitalize Each Word\n");
        printf("0. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        getchar(); 
        
        if(choice == 0) {
            printf("\nGoodbye, Rudra! Keep writing!\n");
            break;
        }
        
        switch(choice) {
            case 1:
                note_length(note);
                break;
                
            case 2:
                reverse_note(note);
                break;
                
            case 3:
                compare_notes(note);
                break;
                
            case 4:
                copy_note(note);
                break;
                
            case 5:
                concatenate_notes(note);
                break;
                
            case 6:
                to_upper(note);
                break;
                
            case 7:
                to_lower(note);
                break;
                
            case 8:
                capitalize_words(note);
                break;
                
            default:
                printf("\nInvalid choice! Please try again.\n");
        }
         printf("Name : Vaghasiya Rudra Hiteshbhai\n");
    printf("Id   : 25CE129\n");
    printf("Batch: C-2\n");
        printf("\nPress Enter to continue...");
        getchar();
    }
    
    return 0;
}


void note_length(char note[]) {
    int count = 0;
    int i = 0;
    while(note[i] != '\0') {
        count++;
        i++;
    }
    printf("\n--- OUTPUT ---\n");
    printf("Length of note: %d characters\n", count);
}

void reverse_note(char note[]) {
    char result[500];
    int len = 0, i, j = 0;
    
    // Calculate length
    while(note[len] != '\0') {
        len++;
    }
    
    // Reverse
    for(i = len - 1; i >= 0; i--) {
        result[j] = note[i];
        j++;
    }
    result[j] = '\0';
    
    printf("\n--- OUTPUT ---\n");
    printf("Original Note: %s\n", note);
    printf("Reversed Note: %s\n", result);
}

void compare_notes(char note[]) {
    char note2[500];
    int len1 = 0, len2 = 0, i, is_equal = 1;
    
    printf("\nEnter second note to compare: ");
    scanf("%[^\n]", note2);
    
    while(note[len1] != '\0') {
        len1++;
    }
    while(note2[len2] != '\0') {
        len2++;
    }
    
    printf("\n--- OUTPUT ---\n");
    printf("First Note:  %s\n", note);
    printf("Second Note: %s\n", note2);
    
    if(len1 != len2) {
        is_equal = 0;
    } else {
        for(i = 0; i < len1; i++) {
            if(note[i] != note2[i]) {
                is_equal = 0;
                break;
            }
        }
    }
    
    if(is_equal == 1) {
        printf("Result: Notes are IDENTICAL ✓\n");
    } else {
        printf("Result: Notes are DIFFERENT ✗\n");
    }
}

void copy_note(char note[]) {
    char result[500];
    int i = 0;
    
    while(note[i] != '\0') {
        result[i] = note[i];
        i++;
    }
    result[i] = '\0';
    
    printf("\n--- OUTPUT ---\n");
    printf("Original Note: %s\n", note);
    printf("Copied Note:   %s\n", result);
    printf("Copy successful!\n");
}

void concatenate_notes(char note[]) {
    char note2[500], result[1000];
    int i = 0, j = 0;
    
    printf("\nEnter second note to concatenate: ");
    scanf("%[^\n]", note2);
    
    while(note[i] != '\0') {
        result[i] = note[i];
        i++;
    }
    
    while(note2[j] != '\0') {
        result[i] = note2[j];
        i++;
        j++;
    }
    result[i] = '\0';
    
    printf("\n--- OUTPUT ---\n");
    printf("First Note:  %s\n", note);
    printf("Second Note: %s\n", note2);
    printf("Combined:    %s\n", result);
}

void to_upper(char note[]) {
    char result[500];
    int i = 0;
    
    while(note[i] != '\0') {
        if(note[i] >= 97 && note[i] <= 122) {
            result[i] = note[i] - 32;
        } else {
            result[i] = note[i];
        }
        i++;
    }
    result[i] = '\0';
    
    printf("\n--- OUTPUT ---\n");
    printf("Original:   %s\n", note);
    printf("Upper Case: %s\n", result);
}

void to_lower(char note[]) {
    char result[500];
    int i = 0;
    
    while(note[i] != '\0') {
        if(note[i] >= 65 && note[i] <= 90) {
            result[i] = note[i] + 32;
        } else {
            result[i] = note[i];
        }
        i++;
    }
    result[i] = '\0';
    
    printf("\n--- OUTPUT ---\n");
    printf("Original:   %s\n", note);
    printf("Lower Case: %s\n", result);
}

void capitalize_words(char note[]) {
    char result[500];
    int i = 0;
    int new_word = 1;
    
    while(note[i] != '\0') {
        if(new_word == 1 && note[i] >= 97 && note[i] <= 122) {
            result[i] = note[i] - 32;
            new_word = 0;
        } else {
            result[i] = note[i];
        }
        
        if(note[i] == ' ') {
            new_word = 1;
        } else {
            new_word = 0;
        }
        i++;
    }
    result[i] = '\0';
    
    printf("\n--- OUTPUT ---\n");
    printf("Original:    %s\n", note);
    printf("Capitalized: %s\n", result);
}
