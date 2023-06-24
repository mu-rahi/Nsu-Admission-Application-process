
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// file pointers
FILE *student_detail;
FILE *admin_id;
FILE *student_id;

// structure for storing data of the enrolling student
struct admi {
    int uniq_id;
    char Name[50];
    char dob[50];
    char Gender[50];
    char Religion[50];
    char Nationality[50];
    char Address[100];
    char City[50];
    char State[50];
    char Father_Name[50];
    char Father_Occupation[50];
    char Mother_Name[50];
    char Mother_Occupation[50];
    char father_income[50];
    char mother_income[50];
    char Name_b[50];
    char Name_school[50];
    char school_s[50];
    char max_gpa[50];
    char gpa_obtained[50];
    char yop[50];
    char Name_b1[50];
    char Name_school1[50];
    char school_s1[50];
    char max_gpa1[50];
    char gpa_obtained1[50];
    char yop1[50];
    char mig[50];
    char tc[50];
    char branch[50];
} form;




// structure for storing the administrator id
struct adminitrator {
    float id;
}host;




void welcomeMessage()
{
    headMessage("MUHAMMAD ULLAH RAHI");
    printf("\n\n\n\n\n");
    printf("\t\t\t\t**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**");
    printf("\n\n");
    printf("\t\t\t\t     =--=--=--=--=--=--=--=--=--=--=--=--=--=--=--=");
    printf("\n");
    printf("\t\t\t\t     =--=              WELCOME                 =--=");
    printf("\n");
    printf("\t\t\t\t     =--=                TO                    =--=");
    printf("\n");
    printf("\t\t\t\t     =--=                NSU                   =--=");
    printf("\n");
    printf("\t\t\t\t     =--=            APPLICATION               =--=");
    printf("\n");
    printf("\t\t\t\t     =--=              PROCESS                 =--=");
    printf("\n");
    printf("\t\t\t\t     =--=--=--=--=--=--=--=--=--=--=--=--=--=--=--=");
    printf("\n\n");
    printf("\t\t\t\t**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**");
    printf("\n\n\n\n");
    printf("\t\t       Enter any key to continue.....");
    getch();
}

void headMessage(void)
{
    system("cls");
    printf("\t\t       ##########################################################################");
    printf("\n");
    printf("\t\t       ############                                                  ############");
    printf("\n");
    printf("\t\t       ############         NSU Admission Application Process        ############");
    printf("\n");
    printf("\t\t       ############                                                  ############");
    printf("\n");
    printf("\t\t       ##########################################################################");
    printf("\n\n");
    printf("\t\t       --------------------------------------------------------------------------");
    printf("\n");
    printf("\t\t       --------------------------------------------------------------------------");
}

void printMessageCenter(const char* message)
{
    int pos, len;

    len = (120 - strlen(message)) / 2;

    for(pos = 0; pos < len; pos++)
    {
        printf(" ");
    }

    printf("%s", message);
}




void admission_form()
{
    // this id will be used to check all the existing student ids already enrolled so that student id is unique
    int check_id;
    int branchcode;

    char ece[] = "Electronics and Communication Engineering";
    char ise[] = "Information Science and Engineering";
    char civ[] = "Civil Engineering";
    char cse[] = "Computer Science and Engineering";
    char mech[] = "Mechanical Engineering";
    char eee[] = "Electrical and Electronics Engineering";

    student_detail = fopen("student_details.txt", "a+");
    student_id = fopen("student_id.txt", "a+");

    printf(" \t \t STUDENT ADMISSION FORM \n");
    printf("\n\t\t\t\t\tuse underscore\"_\" for space\n");

    printf("\n1. Personal Details \n \n \n");
    printf("\t\tCreate Your Unique User as follow your reg(ss/hsc)Id         : ");
    scanf("%d", &form.uniq_id);

    while (!feof(student_id)) {
        fscanf(student_id, "%d", &check_id);
        if (form.uniq_id == check_id) {
            printf("\nSorry, this ID has been taken. Please select a different ID.\n");
            return;
        }
    }

    printf("\t\tEnter Your Name                                              : ");
    getchar();
    gets(form.Name);
    printf("\t\tEnter the DOB in DD/MM/YYYY format                           : ");
    getchar();
    gets(form.dob);
    printf("\t\tEnter Your Gender                                            : ");
    scanf("%s", form.Gender);
    printf("\t\tEnter Your Religion                                          : ");
    scanf("%s", form.Religion);
    printf("\t\tEnter Your Nationality                                       : ");
    scanf("%s", form.Nationality);
    printf("\t\tEnter Your Permanent Address                                 : ");
    getchar();
    gets(form.Address);
    printf("\t\tEnter Your City                                              : ");
    gets(form.City);
    printf("\t\tEnter Your Father's Name                                     : ");
    gets(form.Father_Name);
    printf("\t\tEnter Your Father's Occupation                               : ");
    gets(form.Father_Occupation);
    printf("\t\tEnter Your Mother's Name                                     : ");
    gets(form.Mother_Name);
    printf("\t\tEnter Your Mother's Occupation                               : ");
    gets(form.Mother_Occupation);
    printf("\t\tEnter Your Father's Income                                   : ");
    scanf("%s", form.father_income);
    printf("\t\tEnter Your Mother's Income                                   : ");
    scanf("%s", form.mother_income);

    printf("\n.\t\t2. Academic Details \n \n \n");
    printf("\t\t\t Class 10th  \n\n");
    printf("\t\tName of Board                                                : ");
    getchar();
    gets(form.Name_b);
    printf("\t\tName of School                                               : ");
    gets(form.Name_school);
    printf("\t\tMax GPA                                                      : ");
    scanf("%s", form.max_gpa);
    printf("\t\tGPA Obtained                                                 : ");
    scanf("%s", form.gpa_obtained);
    printf("\t\tYear of Passing                                              : ");
    scanf("%s", form.yop);

    printf("\n.\t\t\t Class 12th  \n\n");
    printf("\t\tName of Board                                                : ");
    getchar();
    gets(form.Name_b1);
    printf("\t\tName of School                                               : ");
    gets(form.Name_school1);
    printf("\t\tMax GPA                                                      : ");
    scanf("%s", form.max_gpa1);
    printf("\t\tGPA Obtained                                                 : ");
    scanf("%s", form.gpa_obtained1);

    printf("\t\tYear of Passing                                              : ");
    scanf("%s", form.yop1);

    printf("\t\tEnter If you Have a Migration Certificate or not?            : ");
    gets(form.mig);
    printf("\n\t\tEnter If you Have a Transfer Certificate or not ?          :");
    gets(form.tc);

    branchcode = show_academic_details();

    if (branchcode == 1)
        strcpy(form.branch, ece);
    else if (branchcode == 2)
        strcpy(form.branch, ise);
    else if (branchcode == 3)
        strcpy(form.branch, civ);
    else if (branchcode == 4)
        strcpy(form.branch, cse);
    else if (branchcode == 5)
        strcpy(form.branch, mech);
    else if (branchcode == 6)
        strcpy(form.branch, eee);

    fprintf(student_id, "\n%d", form.uniq_id);
    fclose(student_id);

    fprintf(student_detail, "\n\n\nUnique ID: %d\n\nThe Name of Student: %s\n\nBranch: %s\n\nDOB of student: %s\n\nGender of the student: %s\n\nReligion of the student: %s\n\nNationality of the student: %s\n\nAddress: %s\n\nCity: %s\n\nFather's Name: %s\n\nFather's Occupation: %s\n\nMother's Name: %s\n\nMother's Occupation: %s\n\nFather's Income: %s\n\nMother's Income: %s\n\nName of Board of Class 10th: %s\n\nName of School of Class 10th: %s\n\nMax GPA: %s\n\nGPA Obtained: %s\n\nYear of Passing: %s\n\nName of Board of Class 12th: %s\n\nName of School of Class 12th: %s\n\nMax GPA: %s\n\nGPA Obtained: %s\n\nYear of Passing: %s\n\nMigration Card: %s\n\nTransfer Certificate: %s\n\n", form.uniq_id, form.Name, form.branch, form.dob, form.Gender, form.Religion, form.Nationality, form.Address, form.City, form.Father_Name, form.Father_Occupation, form.Mother_Name, form.Mother_Occupation, form.father_income, form.mother_income, form.Name_b, form.Name_school, form.max_gpa, form.gpa_obtained, form.yop, form.Name_b1, form.Name_school1, form.max_gpa1, form.gpa_obtained1, form.yop1, form.mig, form.tc);
    fclose(student_detail);

    printf("\n\nThank you for submitting the Admission form!\nHave a great day!\n");
    printf("Press any key to continue");
    getch();
}




// this function displays the academic details of the student based on branch
int show_academic_details()
	{

    //local variables for the function
    int choice;

            system("cls");
            printf("\n\n\n\n\n\n\n_\t\t\t\t\tAcademic Details\n\n\n");
            printf("\t\t\t\t\tPlease Select Your Branch\n\n");
            printf("\t\t\t\t\t1.Electonics And Communication Engineering \n");
            printf("\t\t\t\t\t2.Information Science\n");
            printf("\t\t\t\t\t3.Civil Engineering \n");
            printf("\t\t\t\t\t4.Mechanical Engineering\n");
            printf("\t\t\t\t\t5.Computer Science And Engineering\n");
            printf("\t\t\t\t\t6.Electrical And Electronics Engineering\n");

            printf("\n_\t\t\t\t\tPlease Enter your Choice \n");
            scanf("%d",&choice);
            switch(choice)
			{
	            case 1:
	            case 2:
	            case 3: system("cls");
                        printf("\n\n\n\n\n\n\n_\t\t\t\t\tDetails for the First Semester\n\n\n");
		                printf("\t\t\t\t\t\t\tPHY CYCLE\n\n");
	                    printf("\t\t\t\t\tS.No.\tSubject Name\t\t\t\t\tSubject Credits\n");
	                    printf("\t\t\t\t\t1\tEngineering Mathematics-1 \t\t\t\t4\n");
	                    printf("\t\t\t\t\t2\tEngineering Physics \t\t\t\t\t4\n");
	                    printf("\t\t\t\t\t3\tBasic Electrical Engineering \t\t\t\t3\n");
	                    printf("\t\t\t\t\t4\tElements of Civil Engineering and Mechanics\t\t3\n");
	                    printf("\t\t\t\t\t5\tEngineering Graphics Drawing\t\t\t\t3\n");
	                    printf("\t\t\t\t\t6\tPhysics Lab\t\t\t\t\t\t1\n");
	                    printf("\t\t\t\t\t7\tBasic Electrical Engineering Lab\t\t\t1\n");
	                    printf("\t\t\t\t\t8\tTechnical English-1\t\t\t\t\t1\n");
	                    printf("\t\t\t\t\n\n\t\t\t\t\tTotal Credits = 20 \n\n");
	                    break;
	            case 4:
	            case 5:
		        case 6:
                        system("cls");
                        printf("n\n\n\n\n\n\n_\t\t\tDetails for the First Semester\n\n\n");
	                    printf("\n\n\t\t\t\t\t\tCHEM CYCLE\n\n");
	                    printf("\t\t\t\tS.No.\tSubject Name\t\t\t\t\tSubject Credits\n");
	                    printf("\t\t\t\t1.\tEngineering Mathematics-1 \t\t\t\t4\n");
	                    printf("\t\t\t\t2.\tEngineering Chemistry\t\t\t\t\t4\n");
	                    printf("\t\t\t\t3.\tC programming for problem solving\t\t\t3\n");
	                    printf("\t\t\t\t4.\tBasic Electronics \t\t\t\t\t3\n");
	                    printf("\t\t\t\t5.\tElements of Mechanical Engineering\t\t\t3\n");
	                    printf("\t\t\t\t6.\tChemistry Lab\t\t\t\t\t\t1\n");
	                    printf("\t\t\t\t7.\tC programming Lab\t\t\t\t\t1\n");
	                    printf("\t\t\t\t8.\tTechnical English-2\t\t\t\t\t1\n");


                    printf("\n\n\t\t\t\tTotal Credits = 20\n\n");
            default :break;
}
		printf("\n\t\t\t\tEnter any key to continue");
		getch();
		return choice;
        }







void fees_details()
{
    int course, admissionType;


    system("cls");
    printf("\n\n\n\n\n\n\n\n_\t\t\t\t\t\tFEES DETAILS:\n\n");
    printf("\t\t\t\t\t\tSelect the Course:\n\n");
    printf("\t\t\t\t\t\t1. B.E\n");
    printf("\t\t\t\t\t\t2. Exit\n");

    scanf("%d", &course);

    if (course == 1) {
        system("cls");
        printf("\n\n\n\n\n\n\n\n_\t\t\t\t\t\tSelect the Admission Type:\n\n");
        printf("\t\t\t\t\t\t1. General\n");
        printf("\t\t\t\t\t\t2. 100%% Scholarship\n");
        printf("\t\t\t\t\t\t3. 50%% Scholarship\n");
        printf("\t\t\t\t\t\t4. Management Quota\n");
        printf("\t\t\t\t\t\t5. Exit\n");

        scanf("%d", &admissionType);

        switch (admissionType) {
            case 1:
                system("cls");
                printf("\n\n\n\n\n\n\n\n_\t\t\t\t\t\tGeneral Admission\n\n");
                printf("\t\t\t\t\t\tFees per semester  :\n");
                printf("\t\t\t\t\t\tTuition Fees       : 96,000/-\n");
                printf("\t\t\t\t\t\tUniversity Others  : 24,000/-\n");
                printf("\t\t\t\t\t\t_____________________________\n");
                printf("\t\t\t\t\t\tTotal: 1,20,000/-\n");
                break;

            case 2:
                system("cls");
                printf("\n\n\n\n\n\n\n\n_\t\t\t\t\t\tFor 100%% Scholarship\n\n");
                printf("\t\t\t\t\t\tFees per semester  :\n");
                printf("\t\t\t\t\t\tTuition Fees       : 0/-\n");
                printf("\t\t\t\t\t\tUniversity Others  : 24,000/-\n");
                printf("\t\t\t\t\t\t_____________________________\n");
                printf("\t\t\t\t\t\tTotal              : 24,000/-\n");
                break;

            case 3:
                system("cls");
                printf("\n\n\n\n\n\n\n\n_\t\t\t\t\t\tFor 50%% Scholarship\n\n");
                printf("\t\t\t\t\t\tFees per semester  :\n");
                printf("\t\t\t\t\t\tTuition Fees       : 50,000/-\n");
                printf("\t\t\t\t\t\tUniversity Others  : 24,000/-\n");
                printf("\t\t\t\t\t\t_____________________________\n");
                printf("\t\t\t\t\t\tTotal              : 74,000/-\n");
                break;

            case 4:
                system("cls");
                printf("n\n\n\n\n\n\n\n_\t\t\t\t\t\tManagement Quota\n\n");
                printf("\t\t\t\t\t\tFees per semester  :\n");
                printf("\t\t\t\t\t\tTuition Fees       : 50,000/-\n");
                printf("\t\t\t\t\t\tUniversity Others  : 24,000/-\n");
                printf("\t\t\t\t\t\t_____________________________\n");
                printf("\t\t\t\t\t\tTotal              : 74,000/-\n");
                break;

            case 5:
                // Exit option selected
                return;

            default:
                printf("n\n\n\n\n\n\n\n_\t\t\t\tInvalid option! Please select a valid admission type.\n");
                break;
        }
    }
    else if (course == 2) {
        // Exit option selected
        return;
    }
    else {
        printf("Invalid option! Please select a valid course.\n");
    }

    printf("\nPress any key to continue");
    getch();
}










// for displaying all student details


void display()
{
    FILE *admin_id;
    FILE *student_detail;
    float adminid;
    int found = 0;
    char c;

    admin_id = fopen("admin_id.txt", "r");
    if (admin_id == NULL) {
        printf("The File is Empty...\n\n");
        return;
    }

    printf("Enter The Administrator ID: ");
    scanf("%f", &adminid);

    while (fscanf(admin_id, "%f", &host.id) == 1) {
        if (adminid == host.id) {
            found = 1;
            break;
        }
    }

    fclose(admin_id);

    if (found) {
        student_detail = fopen("student_details.txt", "r");
        if (student_detail == NULL) {
            printf("No student details found.\n");
            return;
        }

        while ((c = fgetc(student_detail)) != EOF) {
            printf("%c", c);
        }

        fclose(student_detail);
    } else {
        printf("Please Enter the Correct Administrator ID\n\n");
    }

    printf("\nPress any key to continue");
    getch();
}




// fun part
void printWithTypingAnimation(const char* message) {
    int i = 0;

    while (message[i] != '\0') {
        putchar(message[i]);
        fflush(stdout);
        usleep(10000);
        i++;

        printf("\0 \0");
        usleep(1000);
    }
}


