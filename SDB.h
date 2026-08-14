#ifndef SDB_H
#define SDB_H
#include "STD.h"
#define max_std 10
#define min_std 3
typedef struct SimpleDb
{
    uint32 Student_ID;
    uint32 Student_year;
    uint32 Course1_ID;
    uint32 Course1_grade;
    uint32 Course2_ID;
    uint32 Course2_grade;
    uint32 Course3_ID;
    uint32 Course3_grade;
} student;
// function declarations of SDB.c
bool SDB_IsFull();
uint8 SDB_GetUsedSize();
bool SDB_AddEntry();
void SDB_DeletEntry(uint32 id);
bool SDB_ReadEntry(uint32 id);
void SDB_GetList(uint8 *count, uint32 *list);
bool SDB_IsIdExist(uint32 id);
// function declarations of SDBAPP.c
void SDB_APP();
void SDB_action(uint8 choice);
#endif