#include <stdio.h>
#include "STD.h"
#include "SDB.h"
// it well takes the user choice and call the responding function for this choice
void SDB_action(uint8 choice)
{
    uint32 id;
    uint8 list_count = 0;
    uint32 id_list[max_std];
    switch (choice)
    {
    case 1:
        SDB_AddEntry();
        break;
    case 2:
        printf("\nused database size:%u/%d\n", SDB_GetUsedSize(), max_std);
        break;
    case 3:
        printf("\nEnter student ID to read:\n");
        scanf("%u", &id);
        SDB_ReadEntry(id);
        break;
    case 4:
        SDB_GetList(&list_count, id_list);
        printf("\nTotal number of students:%u\n", list_count);
        if (list_count > 0)
        {
            printf("\nList of students' IDs:\n");
            for (uint8 i = 0; i < list_count; i++)
            {
                printf("%d)ID:%u\n", i + 1, id_list[i]);
            }
        }
        break;
    case 5:
        printf("\nEnter student ID to ckeck if it's exist or not:\n");
        scanf("%u", &id);
        if (SDB_IsIdExist(id))
        {
            printf("\n ID:%u exists\n", id);
        }
        else
        {
            printf("\n ID:%u doesn't exist\n", id);
        }
        break;
    case 6:
        printf("\nEnter student ID to delete:\n");
        scanf("%u", &id);
        SDB_DeletEntry(id);
        break;
    case 7:
        if (SDB_IsFull())
        {
            printf("\nDatabase is FULL\n");
        }
        else
        {
            printf("\nDatabase is  NOT FULL\n");
        }
        break;
    case 0:
        printf("\nExiting System\n");
        break;
    default:
        printf("\n Invalid choice! Please try again.\n");
        break;
    }
}
// Main Super Loop that continuously prompts the menu options
void SDB_APP()
{
    uint32 choice = 0;
    while (1)
    {
        printf("\n=========================================\n");
        printf("       STUDENT DATABASE MANAGEMENT       \n");
        printf("=========================================\n");
        printf("1. Add Student Entry\n");
        printf("2. Get Used Database Size\n");
        printf("3. Read Student Data\n");
        printf("4. Get List of All Student IDs\n");
        printf("5. Check if ID Exists\n");
        printf("6. Delete Student Data\n");
        printf("7. Check if Database is Full\n");
        printf("0. Exit\n");
        printf("=========================================\n");

        printf("Enter your choice:\n");
        scanf("%u", &choice);

        SDB_action((uint8)choice);
        if (choice == 0)
        {
            break;
        }
    }
}