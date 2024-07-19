#include <stdio.h>
#include <string.h>

#define MAX_ENTRIES 100

struct PhoneNumber {
    char name[50];
    char number[15];
};

struct PhoneNumber phonebook[MAX_ENTRIES];
int num_entries = 0;

void addPhoneNumber() {
    if (num_entries < MAX_ENTRIES) {
        printf("Enter name: ");
        scanf("%s", phonebook[num_entries].name);
        printf("Enter number: ");
        scanf("%s", phonebook[num_entries].number);
        num_entries++;
        printf("Phone number added successfully!\n");
    } else {
        printf("Phonebook is full!\n");
    }
}

void deletePhoneNumber() {
    char nameToDelete[50];
    printf("Enter name to delete: ");
    scanf("%s", nameToDelete);

    int found = 0;
    for (int i = 0; i < num_entries; i++) {
        if (strcmp(phonebook[i].name, nameToDelete) == 0) {
            found = 1;
            // Shift entries to overwrite the deleted entry
            for (int j = i; j < num_entries - 1; j++) {
                strcpy(phonebook[j].name, phonebook[j + 1].name);
                strcpy(phonebook[j].number, phonebook[j + 1].number);
            }
            num_entries--;
            printf("Phone number deleted successfully!\n");
            break;
        }
    }
    if (!found) {
        printf("Name not found in phonebook!\n");
    }
}

void displayPhoneNumbers() {
    if (num_entries == 0) {
        printf("Phonebook is empty!\n");
    } else {
        printf("Phonebook entries:\n");
        for (int i = 0; i < num_entries; i++) {
            printf("%s: %s\n", phonebook[i].name, phonebook[i].number);
        }
    }
}

void searchPhoneNumber() {
    char nameToSearch[50];
    printf("Enter name to search: ");
    scanf("%s", nameToSearch);

    int found = 0;
    for (int i = 0; i < num_entries; i++) {
        if (strcmp(phonebook[i].name, nameToSearch) == 0) {
            found = 1;
            printf("Number for %s: %s\n", nameToSearch, phonebook[i].number);
            break;
        }
    }
    if (!found) {
        printf("Name not found in phonebook!\n");
    }
}

int main() {
    int choice;
    do {
        printf("\nPhonebook Menu:\n");
        printf("1. Add Phone Number\n");
        printf("2. Delete Phone Number\n");
        printf("3. Display All Phone Numbers\n");
        printf("4. Search for a Phone Number\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addPhoneNumber();
                break;
            case 2:
                deletePhoneNumber();
                break;
            case 3:
                displayPhoneNumbers();
                break;
            case 4:
                searchPhoneNumber();
                break;
            case 5:
                printf("Exiting the phonebook. Goodbye!\n");
                break;
            default:
                printf("Invalid choice! Please enter a number between 1 and 5.\n");
                break;
        }
    } while (choice != 5);

    return 0;
}
