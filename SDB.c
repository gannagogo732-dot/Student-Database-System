#include <stdio.h>
#include "STD.h"
#include "SDB.h"
static student DB[max_std];
static uint8 count = 0;
/* checks if the database reached its max capacity or not
i compare current count with max_std[10]
*/
bool SDB_IsFull()
{
    if (count >= max_std)
    {
        return true;
    }
    else
    {
        return false;
    }
}
// it returns the current number of students
uint8 SDB_GetUsedSize()
{
    return count;
}
// checks if the given student_ID exists in the database or not
bool SDB_IsIdExist(uint32 id)
{
    for (uint8 i = 0; i < count; i++)
    {
        if (DB[i].Student_ID == id)
        {
            return true;
        }
    }
    return false;
}
/* adds a new student to the database
returns true if it's successfully added
returns false if the entered data isn't correct or the database is full
*/
bool SDB_AddEntry()
{
    if (SDB_IsFull())
    {
        printf("\nDatabase is full!can't add more students\n");
        return false;
    }
    student new_student;
    printf("Enter student ID:");
    scanf("%u", &new_student.Student_ID);

    if (SDB_IsIdExist(new_student.Student_ID))
    {
        printf("\nError! ID already exist in the database\n");
        return false;
    }
    printf("Enter Student Year: ");
    scanf("%u", &new_student.Student_year);

    printf("Enter Course 1 ID: ");
    scanf("%u", &new_student.Course1_ID);
    printf("Enter Course 1 Grade (0-100): ");
    scanf("%u", &new_student.Course1_grade);

    printf("Enter Course 2 ID: ");
    scanf("%u", &new_student.Course2_ID);
    printf("Enter Course 2 Grade (0-100): ");
    scanf("%u", &new_student.Course2_grade);

    printf("Enter Course 3 ID: ");
    scanf("%u", &new_student.Course3_ID);
    printf("Enter Course 3 Grade (0-100): ");
    scanf("%u", &new_student.Course3_grade);
    // store in DB
    DB[count] = new_student;
    count++;
    printf("\nstudent added successfully!\n");
    return true;
}
// Deletes a student entry by shifting elements to maintain memory continuity
void SDB_DeletEntry(uint32 id)
{
    int index = -1;
    // searching for student ID and stop at this point
    for (uint8 i = 0; i < count; i++)
    {
        if (DB[i].Student_ID == id)
        {
            index = i;
            break;
        }
    }
    if (index == -1)
    {
        printf("\nError!student ID isn't recognized\n");
        return;
    }
    // Shift remaining items
    for (uint8 i = index; i < count - 1; i++)
    {
        DB[i] = DB[i + 1];
    }
    count--;
    printf("\nStudent ID %u deleted successfully\n", id);
}
// print the data of the user by searching on his data by the given id
bool SDB_ReadEntry(uint32 id)
{
    for (uint8 i = 0; i < count; i++)
    {
        if (DB[i].Student_ID == id)
        {
            printf("\n--- Student Details ---\n");
            printf("ID           : %u\n", DB[i].Student_ID);
            printf("Year         : %u\n", DB[i].Student_year);
            printf("Course 1 ID  : %u | Grade: %u\n", DB[i].Course1_ID, DB[i].Course1_grade);
            printf("Course 2 ID  : %u | Grade: %u\n", DB[i].Course2_ID, DB[i].Course2_grade);
            printf("Course 3 ID  : %u | Grade: %u\n", DB[i].Course3_ID, DB[i].Course3_grade);
            printf("-----------------------\n");
            return true;
        }
    }
    printf("\nError! student ID %u not found\n", id);
    return false;
}
// it gets the number of ids in the count and the list of all ids in list array
void SDB_GetList(uint8 *list_count, uint32 *list)
{
    *list_count = count;
    for (uint8 i = 0; i < count; i++)
    {
        list[i] = DB[i].Student_ID;
    }
}
