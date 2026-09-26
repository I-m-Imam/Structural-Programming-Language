#include<stdio.h>
#include<string.h>

struct employee{
    int id;
    char name[50];
    char location[50];
    int age;
};

int main(){
    int n;
    printf("How many employees do you want to enter? ");
    scanf("%d", &n);

    struct employee emp[n];

    for(int i=0; i<n; i++){
        printf("\nEnter details of employee %d\n", i+1);

        printf("ID: ");
        scanf("%d", &emp[i].id);

        printf("Name: ");
        scanf(" %[^\n]", emp[i].name);

        printf("Location: ");
        scanf(" %[^\n]", emp[i].location);

        printf("Age: ");
        scanf("%d", &emp[i].age);
    }

    int searchID;
    printf("\nEnter Employee ID to search: ");
    scanf("%d", &searchID);

    int found = 0;
    for(int i=0; i<n; i++){
        if(emp[i].id == searchID){
            printf("\nEmployee Found!\n");
            printf("ID: %d\n", emp[i].id);
            printf("Name: %s\n", emp[i].name);
            printf("Location: %s\n", emp[i].location);
            printf("Age: %d\n", emp[i].age);
            found = 1;
            break;
        }
    }

    if(found == 0){
        printf("\nEmployee not found!\n");
    }

    return 0;
}
