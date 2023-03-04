#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct patient
{
    unsigned int ID ;
    char Name [100];
    float Weight ;
};
signed int Get_Patient_Index (struct patient pArr [] , unsigned int ArrSize , unsigned int SearchID) ;
void Get_Patient_Data (struct patient * pArr) ;
void Print_Patient_Data (struct patient * pArr);


int main()
{
    struct patient  * PatientArr = NULL ;
    signed int PatientIndex ;
    unsigned int SearchID = 0 ;
	unsigned int NumOfPatients = 0;

	printf ("Please Enter Num Of Patients : ") ;
	fflush (stdin) ;
	scanf ("%u" , &NumOfPatients) ;

	if ( PatientArr == NULL )
	{
		printf ("Couldn't Allocate Space\n") ;
		exit(1) ;
	}

    for (PatientIndex = 0 ; PatientIndex < NumOfPatients ; PatientIndex++)
    {
        Get_Patient_Data(&PatientArr[PatientIndex]) ;
    }
    printf("Please Enter ID to search\n");
    fflush(stdin);
    scanf("%u" , &SearchID) ;

    PatientIndex = Get_Patient_Index(PatientArr , NumOfPatients , SearchID) ;
    if (PatientIndex == -1)
    {
        printf("ID Not Found\n");
    }
    else
    {
        Print_Patient_Data(&PatientArr[PatientIndex]) ;
    }

	free (PatientArr) ;
    return 0;
}

signed int Get_Patient_Index (struct patient pArr [] , unsigned int ArrSize , unsigned int SearchID)
{
    signed int RetIndex = -1 ;
    signed int patientIndex ;

    for (patientIndex = 0 ; patientIndex < ArrSize ; patientIndex++)
    {
        if (pArr[patientIndex].ID == SearchID)
        {
         RetIndex = patientIndex ;
        }
        else ;
        if (RetIndex != -1) {break;}

    }
    return RetIndex ;
}
void Get_Patient_Data (struct patient * pArr)
{
    printf("-----------------------\n") ;
    printf("Please Enter Patient Name : ") ;
    fflush(stdin);
    gets(pArr->Name);
    printf("Please Enter Patient ID : ") ;
    fflush(stdin);
    scanf("%u" , &(pArr->ID));
    printf("Please Enter Patient Weight : ") ;
    fflush(stdin);
    scanf("%f" , &(pArr->Weight));
}
void Print_Patient_Data (struct patient * pArr)
{
    printf("-----------------------\n") ;
    printf("Patient ID : %u\nPatient Name : %s\nPatient Weight : %0.3f\n" , pArr->ID , pArr->Name , pArr->Weight);
}


