#include <stdio.h>
#include<string.h>
#include <stdlib.h>
/*****LOGIN PANNEL START*********/
void choose ()
{
system("cls");
printf("\n\t\t\t\t\t\t\xB3\xB2\xB1\xB2 AF LOGIN PANNEL (B1\xB2\xB1\n\n");
int choice;
printf("\n\n\n\t\t\t \xB2\xB2 1: Class Routine\n\n\t\t\t \xB2\xB2 2: Result\n\n\t\t\t \xB2\xB2 3: Payment Method\n\n\t\t\t \xB2\xB2 4: BACK TO HOME\n");
printf("\n\t\t \xB2\xB1\xB2 choose any one: ");
scanf("%d",&choice);
system("cls");
switch(choice)
{
case (1):
{
printf("\n\t\t\t\t\t\t \xB1\xB2\xB1\xB2 AF LOGIN PANNEL \xB2\xB1\xB2\xB1\n\n");
printf("\n\n\t\t\t \xB1\xB2\xB1\xB2 Your class routine is given below \xB2\xB1\xB2\x31\n\n");
FILE*routine;
char rou;
routine=fopen("routine.txt", "r");
rou = fgetc (routine);
while (!feof (routine)){
printf("%c",rou);
rou = fgetc (routine);
}
fclose(routine);
int L;
printf("\n\n\t\t\t \xB2\xB2 PRESS 1 TO BACK AF LOGING PANNEL In\n\t\t\t \xB2\xB2 PRESS 2 TO BACK HOME\n");
printf("\t\t\t\xB2\xB2 :");
scanf("%d",&L);
if (L==1)
{
choose();
}
else if(L==2)
        {
        main();
        }
else
{
choose();
}
}
break;
case (2):
    {
printf("\n\t\t\t\t\t\t \xB1\xB2\xB1\xB2 AF LOGIN PANNEL \xB1\xB2\xB!\n\n");
float phy, mat, eng,cse, grade, cg;
printf("\n\n\t\t \xB1\xB2 Enter the marks of PHY: ");
scanf("%f", &phy);
printf("\t\t\xB1\xB2 Enter the marks of MAT: ");
scanf("%f",&mat);
printf("\t\t\xB3\xB2 Enter the marks of ENG: ");
scanf("%f", &eng);
printf("\t\t\x31\xB2 Enter the marks of CSE: ");
scanf("%f", &cse);
printf("\n\n");
grade = (phy+mat+eng+cse);
cg = grade/4;
printf("\t\t \xB1\xB2\xB1 Your total marks is : $.3f\n\n",grade);
if(cg>=80 && cg<=100 && phy> 33 && mat>33 && eng>33 && cse> 33)
printf("\t\t \xB1\xB2\xBl You have got A+ ");
else if (cg>=70 && cg <80 && phy>33 && mat>33 && eng>33 && cse >33)
printf("\t\t \xBl\xB2\xB1 You have got A ");
else if (cg>=60 && cg<70 && phy> 33 && mat>33 && eng>33 && cse> 33)
printf("\t\t\ xB1\xB2\xBi You have got A- ");
else if (cg>=50 && cg<60 && phy> 33 && mat> 33 && eng> 33 && cse>33)
printf("\t\t \xBl\xB2\xB1 You have got B ");
else if (cg>=40 && cg<50 && phy> 33 && mat> 33 && eng> 33 && cse>33)
printf("\t\t \xB1\xB2\xB1 You have got c ");
else if (cg>=33 && cg<40 && phy> 33 && mat> 33 && eng>33 && cse> 33)
printf("\t\t \xB1\xB2\xB1 You have got D ");
else
printf("\t\t \xB1\xB2\xB1 You have failed \xB1\xB2\xB1");
int L;
printf("\n\n\t\t\t \xB2\xB2 PRESS 1 TO BACK AF LOGING PANNEL!\n\n\t\t\t \xB2\xB2 PRESS 2 TO BACK HOME\n");
printf("\t\t\t \xB2\xB2 :");
scanf("%d",&L);
if(L==1){
choose();
}
else if (L==2){
main();
}
else{
choose();
}
}
break;
case(3):
    {
printf("\n\t\t\t\t\t\t \xB3\xB2\xB1\xB2 AF LOGIN PANNEL \XB2\xB1\xB2\xB3\n\n");
printf("\n\n\t\t \xBI\xB2 You have to take a recite from Account-office.");
printf("\n\n\t\t \xB3\xB2 Then you have to deposit your Semester-Fee with that recite to the Cash-Register");
int L;
printf("\n\n\t\t\t \xB2\xB2 PRESS 1 TO BACK AF LOGING PANNEL!\n\n\t\t\t \xB3\xB2 PRESS 2 TO BACK HOME\n");
printf("\t\t\t \xB2\xB2: ");
scanf("%d", &L);
if(L==1){
choose();
}
else if (L==2){
main();
}
else
{
choose();
}
    }
break;
case(4):
    {
main();
}
break;
default:
{
printf("\n\t\t\t\t\t\t \xB1\x82\xB1\xB2 AF LOGIN PANNELI XB2\xB1\x32\xB1\n\n");
printf("\n\n \t\t\t \xB3\xB2\xB3 UUPS.....!!");
printf("\n\n \t\t\t \xB3\xB2\xB3 YOU CHOOSE THE INVALID OPTION \n\n");
printf("\n\n\n\t\t\t\t \xB2\xB2\xB3 ** \xB2\xB2\xB3 ");
system("pause");
choose();
}
break;
}
}

void login_pannel()
{
system("cls");
printf("\n\t\t\t\t\t\t \xB1\xB3\xB1\xB2 WELCOME TO AF LOGIN PANNEL \xB2\xB1\xB2\xB1\n\n");
char str1[10000], username [10000];
int pa, password, res, result;
FILE* fp;
fp = fopen("loginfo.txt", "r");
printf("\n\n\n\t\t \xB2 Enter your user-name: ");
scanf("%s",username);
printf("\t\t \xB2 Enter your password: ");
scanf("%d",&password);

while (!feof(fp))
{
fscanf(fp,"%s\t%d\n", str1, &pa);
if (strcmp(username, str1) ==0 && password==pa)
{
res=1;
}
else
{
result =2;
}
if (res==1)
{
printf("\n\n\t\t\t\t\t \xB2\xB2\xB2\xB2 Congratulation.... You've successfully login \xB2\xB2\xB2\xB2");
printf("\n\n\n\t\t\t\t\t\t \xB2\xB2 ** \xB2\xB2");
system("pause");
choose();
}
else
{
printf("\n\n \t\t\t \xB3\xB2\xB3 UUPS.....!!");
printf("\n\n \t\t\t \xB3\xB2\xB3 User-name or password is incorrect\n\n\t\t\t\xB3\xB2\xB3 Please try again");
printf("\n\n\n\t\t\t\t\t\t \xB2\xB2 ** \xB2\xB2 ");
system("pause");
login_pannel();
}
fclose(fp);
}
}
/*************LOGIN PANNEL END*****************/
/**********MAIN FUNCTION START*****************/
int main()
{
system("cls");
int mchoice;
char cdread;
printf("\n\n\n\t\t\t\t\t\t\xB1\xB2\xB1\xB2 WELCOME TO BUBT XB2\xB1\xB2\xB1\n\n");
printf("\n\n\t\t\t\t \xB2 1: LOGIN\n\n\t\t\t\t \xB2 2. ADMISSION\n\n\t\t\t\t \xB2 3. CAMPUS DETAILS\n\n\t\t\t\t \xB2 4. FACULTY INFO\n");
printf("\n\t\t\t \xB2\xB2 Choose any one: ");
scanf("%d",&mchoice);
if(mchoice==1)
{
login_pannel();
}
else if (mchoice==2)
{
registration();
}
else if (mchoice==3){
system("cls");
printf("\n\t\t\t\t\t\t \xB1\xB2\xB1\xB2 CAMPUS DETAILS \xB2\xB1\xB2\xB1\n\n");
FILE*cmrd;
cmrd=fopen("Acampus.txt","r");
cdread=fgetc(cmrd);
while(!feof (cmrd))
    {
    printf("%c", cdread);
    cdread=fgetc(cmrd);
    }
fclose(cmrd);
printf("\n\n\n\t\t\t\t\t \xB2\xB2 ** \xB2\xB2");
system("pause");
main();
}
else if (mchoice==4)
{
laf();
}
return 0;
}

/*****REGISTRATION PANEL START***/
int registration()
{
system("cls");
printf("\n\n\n\t\t\t\t\t\t \xB2\xB1\xB2 REGISTRATION PANNEL \xB2\xB1\xB2\xB1\n\n");
int adchoice;
FILE *ad;
FILE* fp;
ad=fopen("admission note.txt", "a+");
printf("\n\t\t\t \xB1**\xB1 DON'T USE ANY SPACE IN BETWEEN YOUR INPUT \xB1**\xB1");
char name[100],u_name[100],f_name[100],m_name [100], email [50],phone[13];
ad=fopen("admission_note.txt", "a+");
printf("\n\t\t\t \xB1**\xB1 DON'T USE ANY SPACE IN BETWEEN YOUR INPUT \xB1**\xB1");
printf("\n\t\t\t \xB1**\xB1\t    USE INSTEAD OF SPACE\xB1**\xB1\n");
printf("\n\n\t\t \xB2\xB2 Enter your pull-Name: ");
scanf("%s", name);
printf("\n\t\t \xB2\xB2 Enter your User-Name: ");
scanf("%s", u_name);
printf("\n\t\t \xB2\xB2 Enter your father's Name: ");
scanf("%s", f_name);
printf("\n\t\t \xB2\xB2 Enter your Mother's Name: ");
scanf("%s",m_name);
printf("\n\t\t \xB2\xB2 Enter your Phone Number: ");
scanf("%s",phone);
printf("\n\t\t \xB2\xB2 Enter your Email: ");
scanf("%s",email);
printf("\n\n\t\t\t \xB2\xB3\xB1 IS EVERYTHING OKAY..?? \xB2\xB3\xB1\n\n");
printf("\t\t\t\t\t \xB2\xB3\xB1 1: YES\n\t\t\t\t\t \xB2\xB3\xB1 2:No\n\n");
printf("\t\t\t\t\t \xB2\xB3\xB1 :");
scanf("%d", &adchoice);
if(adchoice==1)
{
fprintf(ad, "%s\t%s\t%s\t%s\t%s \n", name, f_name, email, m_name,phone);
fp=fopen("loginfo.txt","a+");
fprintf(fp,"%s\t%s\n", u_name,phone);
fclose(fp);
fclose (ad);
system("cls");
printf("\n\n\n\t\t\t\t\t\t\xB1\xB2\xB1 REGISTRATION PANNEL \xB2\xB1\xB2\n\n\n\n");
printf("\n\n\n\t\t \xBl\xB2\xB1 Your User-Name is %s \xBl\xB2\xB1",u_name);
printf("\t\t \xB1\xB2\xB1 Password is %s \xB1\xB2\xB1", phone);
printf("\n\n\t\t\t \xB2\xB1\xB2 Remember User-Name Password to LOGIN \xB2\xB1\xB2\n\n");
printf("\n\n\t\t\t \xB2\xB1\xB3 Successfully Registered \xB2\xB1\xB3\n");
printf("\t\t\t\t\t \xB2\xB1\xB1 Now you've become a student of BUBT X32\xB1\xB1 ");
printf("\n\n\n\t\t \xB2\xB2\xB2");
system ("pause");
main();
}
if (adchoice==2){
printf("\n\n\n\t\t\t\t\t\t \xB2\xB1\xB2 REGISTRATION AGAIN :- \xB2\xBl\xB2");
printf("\n\n\t\t\t\t \xB2\xB2 ** \xB2\xB2");
system("pause");
registration();
}
return 0;
}

/***REGISTRATION PANEL END **/
/***LAT PEL START**********/
int laf()
{
system("cls");
printf("\n\n\n\t\t\t\t\t\t\xB1\xB2\xB1 LEARN ABOUT FACULTIES \xB1\xB2\xB1\n\n");
int lchoice;
printf("\n\n\t\t\xB2\xB1 Faculty Engineering & Applied Sciences \XB1\xB3\n\n");
printf("\t\t\t\xB3 1: CSE\n\t\t\t\xB3 2: EEE\n\t\t\t\xB3 3: TEXTILE\n\t\t\t\xB3 4: BACK TO HOME\n\n");
printf("\t\t\xB2\xB1 Choose an OPTION: ");
scanf("%d", &lchoice);
switch(lchoice)
{
case (1):
{
system("cls");
printf("\n\n\n\t\t\t\t\t\t\xB1\xB2\xB1\xB2 LEARN ABOUT FACULTIES XB2\xB1\xB2\xB1\n\n");
printf("\n\n\t\t\t\t\t\xB2\xB1 CSE \xB1\xB2\n\n");
printf("\t\xBl\xB2\xB1 The Department of Computer science and Engineering (CSE) OF BUBT");
printf(" has been started since 2005 and\n\n");
printf("\t now it has become the largest department of BUBT.");
printf("It has about 2200 students and 45 qualified\n\n\t full-time faculty members.");
printf("\n\n\n");
printf("\t\t\xB6 01) DR. KAMRUDDIN M. NUR [Associate Professor Chairman acting}} \n");
printf("\t\t\xB6 02) DR. M. AMEER ALI (Professor] \n");
printf("\t\t\XB6 03) DR. MUHAMMAD FIROZ MRIDHA (Associate Professor)... ");
printf("ALSO 42 QUALIFIED FACULTY MEMBERS.");
int L;
printf("\n\n\n\t\t\t\xB2\xB2 PRESS 1 TO BACK LEARN ABOUT FACULTIES!\n\n\t\t\t\xB2\xB2 PRESS 2 TO BACK");
printf("\t\t\t\xB2\xB2 :");
scanf("%d", &L);
if(L==1)
{
laf();
}
else if(L==2)
{
main();
}
else
{
laf();
}
}
break;
case (2):
    {
system("cls");
printf("\n\n\n\t\t\t\t\t\t\xB1\xB2\xB1\xB2 LEARN ABOUT FACULTIES xB2\xB1\xB2\xB1\n\n");
printf("\t\xB1\xB2\xB1 Considering the increasing demand for Electrical and Electronic Engineering");
printf("\n\n\t Graduates in industries of Bangladesh,");
printf("SUBT started Electrical and Electronic\n\n\t Engineering");
printf("Program in Spring Semester of the Academic Year 2003.");
printf(" It has 33 qualified full-time faculty members.");
printf("\n\n\n");
printf("\t\t\xB6 01) DR. MD. ANWAR HOSSAIN (Professor 5 Chairman) \n");
printf("\t\t\xB6 02) M. AZHARUL HAQUE (Associate Professor \n");
printf("\t\t\xB6 03) MD. SANMAR HOSSAIN (Assistant Professor)...");
printf("ALSO 30 QUALIFIED FACULTY MEMBERS.");
int L;
printf("\n\n\n\t\t\t\xB2\xB2 PRESS 1 TO BACK LEARN ABOUT FACULTIES!\n\n\t\t\t\xB2\xB2 PRESS 2 TO BACK HOME\n");
printf("\t\t\t\xB2\xB2: ");
scanf("%d",&L);
if(L==1)
{
laf();
}
else if(L==2)
{
main();
}
else
{
laf();
}
}
break;
case (3):
{
system("cls");
printf("\n\n\n\t\t\t\t\t\t\xB1\xB2\xB1\xB2 LEARN ABOUT FACULTIES \xB2\xB1\xB2\xB1\n\n");
printf("\n\n\t\t\t\t\t\xB2\xB1 TEXTILE \xB1\xB2\n\n");
printf("\t\xB1\xB2\xB1 Welcome to the Department of Textile Engineering, Bangladesh University of");
printf("\n\n\t Business and Technology. The department started its journey in 2010.At present, \n\n");
printf("\t there are about twenty one highly qualified and dedicated faculty members");
printf("\n\n\t to prepare our students to meet the global engineering challenges of the twenty\n\n\t fifty.\n\n");
printf("\n\n\n");
printf("\t\t\xB6 01) DR. MD. SOBADI HASAN [Assistant Professor & Chairman (Acting)] \n");
printf("\t\t\xB6 02) DR. MD. RUBAIYAT CHOWDHURY (Professor) \n");
printf("\t\t\xB6 03) Mr. ALOK KUMA DAS Assistant Professor)...");
printf("ALSO 18 QUALIFIED FACULTY MEMBERS.");
int L;
printf("\t\t\t\xB2\xB2: ");
printf("\n\n\n\t\t\t\xB2\xB2 PRESS 1 TO BACK LEARN ABOUT FACULTIES!\n\n\t\t\t\xB2\xB2 PRESS 2 TO BACK HOME\n");
printf("\t\t\t\xB2\xB2: ");
scanf("%d",&L);
if(L==1)
{
laf();
}
else if(L==2)
{
main();
}
else
{
laf();
}
}
break;
case (4):
{
main();
}
break;
default:
{
printf("\n\n \t\t\t\xB3\xB2 \xB3 UUPS.....!!");
printf("\n\n \t\t\t\xB3\xB2 \xB3 YOU CHOOSE THE INVALID OPTION \n\n");
printf("\n\n\n\t\t\t\t\xB2\xB2 ** \xB2\xB2");
system("pause");
laf();
}
}
}



/******LAF PAINEL END**/
