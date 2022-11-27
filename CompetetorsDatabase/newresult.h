


// INCLUDING ALL THE HEADER FILES // 
#include<conio.h> 
#include<process.h> 
#include<fstream.h> 
#include<string.h> 
#include<stdio.h> 
#include<dos.h> 

// CLASS NAMED 'STUDENT' TO CALCULATE GRADE,TOTAL AND PERCANTAGE // 
class student 
{ 
private: 

public: 
char grade(long int x,int y); 
long int total(int a,int b,int c,int d,int e); 
float percent(long int z); 
}; 
char student::grade(long int x,int y) 
{ // FUNCTION TO CALCULATE GRADE // 
if((x*100/y)>74) 
return('A'); 
else 
{ 
if((x*100/y)>60) 
return('B'); 
else 
{ 
if((x*100/y)>33) 
return('C'); 
else 
return('E'); 
} 
} 
} 

long int student::total(int a,int b,int c,int d,int e) 
{ // FUNCTION TO CALCULATE TOTAL MARKS // 
int t; 
t=(a+b+c+d+e); 
return (t); 
} 

float student::percent(long int z) 
{ // FUNCTION TO CALCULATE PERCANTAGE //
float p=0; 
p=(z*100)/500; 
return(p); 
} 

// STRUCTURE TO INPUT DETAILS OF STUDENT // 
struct studres 
{ 

int clas; 
char s; 
int rollno; 
char name[30]; 
char fatername[30]; 
char teachname[30]; 
int engmark; 
int matmark; 
int phymark; 
int chemark; 
int commark; 
int total; 
float percentage; 

}stdres; 

struct temp 
{ 
int roll; 
char name[30]; 
int clas; 
char sec; 
int total; 

}temp; 

// ALL THE FUNCTIONS INITIALIZED // 
void create(); 
void add(); 
void search(); 
void modify(); 
void merit(); 
void merit1(); 
void delet(); 
char grade(long int x,int y); 
long int total(int a,int b,int c,int d,int e); 
float percent(long int z); 
int checking(int z, char y, int x); 
void menu(); 

void main() 
{ // MAIN PROGRAM STARTS HERE // 
clrscr(); 
gotoxy(20,6); 
cout<<" R E S U L T M A N A G E M E N T"; 

gotoxy(10,10); 
cout<<" By Suansh Singhal of class XII D"; 

getch(); 
clrscr(); 
menu(); // CALLING FUNCTION TO PRINT MENU // 

} 

void create() 

{ // FUNCTION TO CREATE THE MAIN FILE // 
clrscr(); 
char ans; 
fstream result; 
gotoxy(20,6); 
cout<<"WARNING !!! ALL PREVIOUS RECORDS WILL BE DELETED"; 
gotoxy(10,10); 
cout<<" DO YOU STILL WANT TO CONTINUE(Y/N):"; 
cin>>ans; 
if(ans != 'N' || ans != 'n') 
{ 
result.open("result.dat",ios::out|ios::binary); 
result.close(); 
} 
menu(); 
} 

void add() 

{ // FUNCTION TO ADD DETAILS OF THE STUDENT // 
top: 
clrscr(); 
int max1=100,max2=70,kar,l,m; 
char ch,n; 
cout<<"CLASS:"; 
gotoxy (16,1); 
cout<<"SECTION:"; 
gotoxy(31,1); 
cout<<"ROLL NO:"; 
gotoxy(47,1); 
cout<<"STUDENT'S NAME:"; 
gotoxy(1,5); 
cout<<"FATHER NAME:"; 
gotoxy(45,5); 
cout<<"CLASS TEACHER:"; 
gotoxy(1,9); 
cout<<"S.NO."; 
gotoxy(15,9); 
cout<<"SUBJECT"; 
gotoxy(30,9); 
cout<<"MARKS"; 
gotoxy(40,9); 
cout<<"MAXIMUM MARKS"; 
gotoxy(70,9); 
cout<<"GRADE"; 
gotoxy(3,11); 
cout<<"1"; 
gotoxy(15,11); 
cout<<"ENGLISH"; 
gotoxy(3,13); 
cout<<"2"; 
gotoxy(15,13); 
cout<<"MATHS"; 
gotoxy(3,15); 
cout<<"3"; 
gotoxy(15,15); 
cout<<"PHYSICS"; 
gotoxy(3,17); 
cout<<"4"; 
gotoxy(15,17); 
cout<<"CHEMISTRY"; 
gotoxy(3,19); 
cout<<"5"; 
gotoxy(15,19); 
cout<<"COMPUTER"; 
gotoxy(3,25); 
cout<<"6"; 
gotoxy(15,25); 
cout<<"TOTAL"; 
gotoxy(3,27); 
cout<<"7"; 
gotoxy(15,27); 
cout<<"PERCENTAGE"; 
// getting student information // 
gotoxy(8,1); 
cin>>m; 
gotoxy(25,1); 
n=getchar(); 
fflush(stdin); 

fstream result; 
result.open("result.dat",ios::app|ios::binary); 
gotoxy(40,1); 
cin>>l; 
kar=checking(m,n,l); 
if(kar==1) 
{ 
result.close(); 
goto top; 
} 
else 
{ 
stdres.clas=m; 
stdres.s=n; 
stdres.rollno=l; 
} 

gotoxy(63,1); 
gets(stdres.name); 
fflush(stdin); 

gotoxy(14,5); 
gets(stdres.fatername); 
fflush(stdin); 
gotoxy(60,5); 
gets(stdres.teachname); 

gotoxy(47,11); /*marks table*/ 
cout<<"100"; 
gotoxy(32,11); 
cin>>stdres.engmark; 
gotoxy(72,11); 
cout<<grade(stdres.engmark,max1); 

gotoxy(47,13); 
cout<<"100"; 
gotoxy(32,13); 
cin>>stdres.matmark; 
gotoxy(72,13); 
cout<<grade(stdres.matmark,max1); 

gotoxy(47,15); 
cout<<" 70"; 
gotoxy(32,15); 
cin>>stdres.phymark; 
gotoxy(72,15); 
cout<<grade(stdres.phymark,max2); 

gotoxy(47,17); 
cout<<" 70"; 
gotoxy(32,17); 
cin>>stdres.chemark; 
gotoxy(72,17); 
cout<<grade(stdres.chemark,max2); 

gotoxy(47,19); 
cout<<" 70"; 
gotoxy(32,19); 
cin>>stdres.commark; 
gotoxy(72,19); 
cout<<grade(stdres.commark,max2); 

gotoxy(47,25); 
cout<<"410"; 
gotoxy(31,25); 

cout<<total(stdres.engmark,stdres.matmark,stdres.phymark,stdres.chemark,stdres.commark); 

stdres.total=total(stdres.engmark,stdres.matmark,stdres.phymark,stdres.chemark,stdres.commark); 

gotoxy(32,27); 
stdres.percentage=percent(stdres.total); 
cout<<stdres.percentage; 
gotoxy(80,50); 


result.write((char*)&stdres,sizeof(stdres)); 
result.close(); 
getch(); 
menu(); 
} 

char grade(long int x,int y) 
{ // FUNCTION THAT CALCULATES GRADE OF THE STUDENT // 
if((x*100/y)>74) 
return('A'); 
else 
{ 
if((x*100/y)>60) 
return('B'); 
else 
{ 
if((x*100/y)>33) 
return('C'); 
else 
return('E'); 
} 
} 
} 

long int total(int a,int b,int c,int d,int e) 
{ // FUNCTION TO CALCULATE TOTAL OF STUDENT // 
int t; 
t=(a+b+c+d+e); 
return (t); 
} 

float percent(long int z) 
{ 
float p=0; 
p=(z*100)/410; 
return(p); 
} 

int checking(int z, char y, int x) 
{ // FUNCTION TO CALCULATE WETHER STUDENT EXISTS // 
int suansh=0; 
fstream result; 
result.open("result.dat",ios::in|ios::binary); 
result.read((char*)&stdres,sizeof(stdres)); 
while(result) 
{ 
if(stdres.clas==z&&stdres.s==y&&stdres.rollno==x) 
{ 
clrscr(); 
gotoxy(22,25); 
cout<<"ENTRY ALREADY EXISTS"; 
getch(); 
suansh=1; 
break; 
} 
result.read((char*)&stdres, sizeof(stdres)); 
} 
return(suansh); 
} 


void menu() 
// FUNCTION THAT PRINTS THE MAIN MENU //
{ 
clrscr(); 
int ans; 
gotoxy(25,10); 
cout<<"M A I N M E N U"; 
gotoxy(17,15); 
cout<<"1. Create the Primary Result Register"; 
gotoxy(17,16); 
cout<<"2. Add Result"; 
gotoxy(17,17); 
cout<<"3. Modify Result"; 
gotoxy(17,18); 
cout<<"4. Search Result"; 
gotoxy(17,19); 
cout<<"5. Delete Result"; 
gotoxy(17,20); 
cout<<"6. Generate Merit List Grade wise per subject"; 
gotoxy(17,21); 
cout<<"7. Generate Merit List on basis of Total Marks"; 
gotoxy(17,22); 
cout<<"8. Exit"; 

gotoxy(40,25); 
cout<<"Enter Option(1-8):"; 
cin>>ans; 
// SWITCH USED TO MAKE PROGRAM MENU BASED // 
switch(ans) 
{ 
case 1:create(); 
break; 
case 2: add(); 
break; 
case 3: modify(); 
break; 
case 4: search(); 
break; 
case 5: delet(); 
break; 
case 6: merit(); 
break; 
case 7: merit1(); 
break; 
case 8: exit(0); 
} 


} 

void search() 

{ // FUNCTION TO SEARCH A STUDENT // 
{ 
clrscr(); 
int max1=100,max2=70,roll,flag=0; 
char ch; 
gotoxy(23,15); 
cout<<"Enter the Roll No. of the student: "; 
cin>>roll; 
fstream result; 
result.open("result.dat",ios::in|ios::binary); 
result.read((char*)&stdres,sizeof(stdres)); 
while(result) 
{ 
if(stdres.rollno==roll) 
{ 
flag=1; 
clrscr(); 
gotoxy(23,25); 
cout<<"RECORD FOUND"; 
gotoxy(23,27); 
cout<<"PRESS ANY KEY TO CONTINUE ..."; 
getch(); 


clrscr(); 
cout<<"CLASS:"; 
gotoxy (16,1); 
cout<<"SECTION:"; 
gotoxy(31,1); 
cout<<"ROLL NO:"; 
gotoxy(47,1); 
cout<<"STUDENT'S NAME:"; 
gotoxy(1,5); 
cout<<"FATHER NAME:"; 
gotoxy(45,5); 
cout<<"CLASS TEACHER:"; 
gotoxy(1,9); 
cout<<"S.NO."; 
gotoxy(15,9); 
cout<<"SUBJECT"; 
gotoxy(30,9); 
cout<<"MARKS"; 
gotoxy(40,9); 
cout<<"MAXIMUM MARKS"; 
gotoxy(70,9); 
cout<<"GRADE"; 
gotoxy(3,11); 
cout<<"1"; 
gotoxy(15,11); 
cout<<"ENGLISH"; 
gotoxy(3,13); 
cout<<"2"; 
gotoxy(15,13); 
cout<<"MATHS"; 
gotoxy(3,15); 
cout<<"3"; 
gotoxy(15,15); 
cout<<"PHYSICS"; 
gotoxy(3,17); 
cout<<"4"; 
gotoxy(15,17); 
cout<<"CHEMISTRY"; 
gotoxy(3,19); 
cout<<"5"; 
gotoxy(15,19); 
cout<<"COMPUTER"; 
gotoxy(3,25); 
cout<<"6"; 
gotoxy(15,25); 
cout<<"TOTAL"; 
gotoxy(3,27); 
cout<<"7"; 
gotoxy(15,27); 
cout<<"PERCENTAGE"; 
gotoxy(8,1); 
cout<<stdres.clas; /*printing student information*/ 
gotoxy(25,1); 
cout<<stdres.s; 
gotoxy(40,1); 
cout<<stdres.rollno; 
gotoxy(63,1); 
puts(stdres.name); 
fflush(stdout); 
gotoxy(14,5); 
puts(stdres.fatername); 
fflush(stdout); 
gotoxy(60,5); 
puts(stdres.teachname); 

gotoxy(47,11); /*marks table*/ 
cout<<"100"; 
gotoxy(32,11); 
cout<<stdres.engmark; 
gotoxy(72,11); 
cout<<grade(stdres.engmark,max1); 

gotoxy(47,13); 
cout<<"100"; 
gotoxy(32,13); 
cout<<stdres.matmark; 
gotoxy(72,13); 
cout<<grade(stdres.matmark,max1); 

gotoxy(47,15); 
cout<<" 70"; 
gotoxy(32,15); 
cout<<stdres.phymark; 
gotoxy(72,15); 
cout<<grade(stdres.phymark,max2); 

gotoxy(47,17); 
cout<<" 70"; 
gotoxy(32,17); 
cout<<stdres.chemark; 
gotoxy(72,17); 
cout<<grade(stdres.chemark,max2); 

gotoxy(47,19); 
cout<<" 70"; 
gotoxy(32,19); 
cout<<stdres.commark; 
gotoxy(72,19); 
cout<<grade(stdres.commark,max2); 

gotoxy(47,25); 
cout<<"410"; 
gotoxy(31,25); 

cout<<total(stdres.engmark,stdres.matmark,stdres.phymark,stdres.chemark,stdres.commark); 

stdres.total=total(stdres.engmark,stdres.matmark,stdres.phymark,stdres.chemark,stdres.commark); 

gotoxy(32,27); 
stdres.percentage=percent(stdres.total); 
cout<<stdres.percentage; 
gotoxy(80,50); 

result.close(); 
getch(); 
menu(); 


} 
else 
result.read((char*)&stdres,sizeof(stdres)); 


} 

if(flag==0) 
{ 

clrscr(); 
gotoxy(23,23); 
cout<<"SORRY! The Roll No."<<roll<<" does not exist."; 
gotoxy(23,25); 
cout<<" PLEASE! TRY AGAIN."; 
result.close(); 
getch(); 
menu(); 
} 
} 
} 

void modify() 

{ // FUNCTION TO MODIFY STUDENT'S DATA // 
clrscr(); 
int max1=100,max2=70,roll,flag=0,flag2=0; 
char ch,z,n; 
gotoxy(23,15); 
cout<<"Enter the Roll No. of the student: "; 
cin>>roll; 
fstream result,tfile; 
result.open("result.dat",ios::in|ios::binary); 
tfile.open("tfile.dat",ios::out|ios::binary); 
result.read((char*)&stdres,sizeof(stdres)); 
while(result) 
{ 
if(stdres.rollno==roll) 
{ 
flag=1; 
clrscr(); 
gotoxy(23,25); 
cout<<"RECORD FOUND"; 
gotoxy(23,27); 
cout<<"PRESS ANY KEY TO CONTINUE ..."; 
getch(); 


clrscr(); 
cout<<"CLASS:"; 
gotoxy (16,1); 
cout<<"SECTION:"; 
gotoxy(31,1); 
cout<<"ROLL NO:"; 
gotoxy(47,1); 
cout<<"STUDENT'S NAME:"; 
gotoxy(1,5); 
cout<<"FATHER NAME:"; 
gotoxy(45,5); 
cout<<"CLASS TEACHER:"; 
gotoxy(1,9); 
cout<<"S.NO."; 
gotoxy(15,9); 
cout<<"SUBJECT"; 
gotoxy(30,9); 
cout<<"MARKS"; 
gotoxy(40,9); 
cout<<"MAXIMUM MARKS"; 
gotoxy(70,9); 
cout<<"GRADE"; 
gotoxy(3,11); 
cout<<"1"; 
gotoxy(15,11); 
cout<<"ENGLISH"; 
gotoxy(3,13); 
cout<<"2"; 
gotoxy(15,13); 
cout<<"MATHS"; 
gotoxy(3,15); 
cout<<"3"; 
gotoxy(15,15); 
cout<<"PHYSICS"; 
gotoxy(3,17); 
cout<<"4"; 
gotoxy(15,17); 
cout<<"CHEMISTRY"; 
gotoxy(3,19); 
cout<<"5"; 
gotoxy(15,19); 
cout<<"COMPUTER"; 
gotoxy(3,25); 
cout<<"6"; 
gotoxy(15,25); 
cout<<"TOTAL"; 
gotoxy(3,27); 
cout<<"7"; 
gotoxy(15,27); 
cout<<"PERCENTAGE"; 

gotoxy(8,1); 
cout<<stdres.clas; /*printing student information*/ 
gotoxy(25,1); 
cout<<stdres.s; 
gotoxy(40,1); 
cout<<stdres.rollno; 
gotoxy(63,1); 
puts(stdres.name); 
fflush(stdout); 
gotoxy(14,5); 
puts(stdres.fatername); 
fflush(stdout); 
gotoxy(60,5); 
puts(stdres.teachname); 

gotoxy(47,11); /*marks table*/ 
cout<<"100"; 
gotoxy(32,11); 
cout<<stdres.engmark; 
gotoxy(72,11); 
cout<<grade(stdres.engmark,max1); 

gotoxy(47,13); 
cout<<"100"; 
gotoxy(32,13); 
cout<<stdres.matmark; 
gotoxy(72,13); 
cout<<grade(stdres.matmark,max1); 

gotoxy(47,15); 
cout<<" 70"; 
gotoxy(32,15); 
cout<<stdres.phymark; 
gotoxy(72,15); 
cout<<grade(stdres.phymark,max2); 

gotoxy(47,17); 
cout<<" 70"; 
gotoxy(32,17); 
cout<<stdres.chemark; 
gotoxy(72,17); 
cout<<grade(stdres.chemark,max2); 

gotoxy(47,19); 
cout<<" 70"; 
gotoxy(32,19); 
cout<<stdres.commark; 
gotoxy(72,19); 
cout<<grade(stdres.commark,max2); 

gotoxy(47,25); 
cout<<"410"; 
gotoxy(31,25); 

cout<<total(stdres.engmark,stdres.matmark,stdres.phymark,stdres.chemark,stdres.commark); 

stdres.total=total(stdres.engmark,stdres.matmark,stdres.phymark,stdres.chemark,stdres.commark); 

gotoxy(32,27); 
stdres.percentage=percent(stdres.total); 
cout<<stdres.percentage; 



getch(); 

gotoxy(32,40); 
cout<<"WOULD YOU LIKE TO MAKE ANY CHANGES"; 
cout<<"IF YES .. PRESS 'A' "; 
z=getch(); 
if(z=='a'||z=='A') 
{ 
flag2=1; 
clrscr(); /*again printing format for modification*/ 
cout<<"CLASS:"; 
gotoxy (16,1); 
cout<<"SECTION:"; 
gotoxy(31,1); 
cout<<"ROLL NO:"; 
gotoxy(47,1); 
cout<<"STUDENT'S NAME:"; 
gotoxy(1,5); 
cout<<"FATHER NAME:"; 
gotoxy(45,5); 
cout<<"CLASS TEACHER:"; 
gotoxy(1,9); 
cout<<"S.NO."; 
gotoxy(15,9); 
cout<<"SUBJECT"; 
gotoxy(30,9); 
cout<<"MARKS"; 
gotoxy(40,9); 
cout<<"MAXIMUM MARKS"; 
gotoxy(70,9); 
cout<<"GRADE"; 
gotoxy(3,11); 
cout<<"1"; 
gotoxy(15,11); 
cout<<"ENGLISH"; 
gotoxy(3,13); 
cout<<"2"; 
gotoxy(15,13); 
cout<<"MATHS"; 
gotoxy(3,15); 
cout<<"3"; 
gotoxy(15,15); 
cout<<"PHYSICS"; 
gotoxy(3,17); 
cout<<"4"; 
gotoxy(15,17); 
cout<<"CHEMISTRY"; 
gotoxy(3,19); 
cout<<"5"; 
gotoxy(15,19); 
cout<<"COMPUTER"; 
gotoxy(3,25); 
cout<<"6"; 
gotoxy(15,25); 
cout<<"TOTAL"; 
gotoxy(3,27); 
cout<<"7"; 
gotoxy(15,27); 
cout<<"PERCENTAGE"; 


gotoxy(8,1); 
cout<<stdres.clas; /*printing student information*/ 
gotoxy(25,1); 
cout<<stdres.s; 
gotoxy(40,1); 
cout<<stdres.rollno; 
gotoxy(63,1); 



gotoxy(63,1); 
gets(stdres.name); 
fflush(stdin); 

gotoxy(14,5); 
gets(stdres.fatername); 
fflush(stdin); 
gotoxy(60,5); 
gets(stdres.teachname); 

gotoxy(47,11); /*marks table*/ 
cout<<"100"; 
gotoxy(32,11); 
cin>>stdres.engmark; 
gotoxy(72,11); 
cout<<grade(stdres.engmark,max1); 

gotoxy(47,13); 
cout<<"100"; 
gotoxy(32,13); 
cin>>stdres.matmark; 
gotoxy(72,13); 
cout<<grade(stdres.matmark,max1); 

gotoxy(47,15); 
cout<<" 70"; 
gotoxy(32,15); 
cin>>stdres.phymark; 
gotoxy(72,15); 
cout<<grade(stdres.phymark,max2); 

gotoxy(47,17); 
cout<<" 70"; 
gotoxy(32,17); 
cin>>stdres.chemark; 
gotoxy(72,17); 
cout<<grade(stdres.chemark,max2); 

gotoxy(47,19); 
cout<<" 70"; 
gotoxy(32,19); 
cin>>stdres.commark; 
gotoxy(72,19); 
cout<<grade(stdres.commark,max2); 

gotoxy(47,25); 
cout<<"410"; 
gotoxy(31,25); 

cout<<total(stdres.engmark,stdres.matmark,stdres.phymark,stdres.chemark,stdres.commark); 

stdres.total=total(stdres.engmark,stdres.matmark,stdres.phymark,stdres.chemark,stdres.commark); 

gotoxy(32,27); 
stdres.percentage=percent(stdres.total); 
cout<<stdres.percentage; 
gotoxy(80,50); 


tfile.write((char*)&stdres,sizeof(stdres)); 
result.read((char*)&stdres,sizeof(stdres)); 

getch(); 
} 
else 
{ 
tfile.write((char*)&stdres,sizeof(stdres)); 
result.read((char*)&stdres,sizeof(stdres)); 
} 


} 
else 
{ 
tfile.write((char*)&stdres,sizeof(stdres)); 

result.read((char*)&stdres,sizeof(stdres)); 
} 

} 
result.close(); 
tfile.close(); 

if(flag2==1) 
{ 
result.open("result.dat",ios::out|ios::binary); 
tfile.open("tfile.dat",ios::in|ios::binary); 
tfile.read((char*)&stdres,sizeof(stdres)); 
while(tfile) 
{ 
result.write((char*)&stdres,sizeof(stdres)); 
tfile.read((char*)&stdres,sizeof(stdres)); 
} 
result.close(); 
tfile.close(); 



} 

if(flag==0) 
{ 

clrscr(); 
gotoxy(23,23); 
cout<<"SORRY! The Roll No."<<roll<<" does not exist."; 
gotoxy(23,25); 
cout<<" PLEASE! TRY AGAIN."; 
result.close(); 
getch(); 

} 


menu(); 
} 



void merit1() 


{ // FUNCTION TO GENERATE MERIT LIST // 
clrscr(); 
int larg,l,flag=0; 
gotoxy(15,17); 
cout<<"Press any key for the merit list"; 
gotoxy(80,50); 
getch(); 
clrscr(); 
gotoxy(15,17); 
cout<<"PLEASE wait while the list is being generated..."; 
gotoxy(80,50); 
delay(2000); 
clrscr(); 
gotoxy(15,15); 
cout<<"LIST generated."; 
gotoxy(15,17); 
cout<<"press any key to continue..."; 
gotoxy(80,50); 
getch(); 
clrscr(); 
fstream result,tfile; 
result.open("result.dat",ios::in|ios::binary); 
tfile.open("tfile.dat",ios::out|ios::binary); 


result.read((char*)&stdres,sizeof(stdres)); 
while(result) 
{ 

l=total(stdres.engmark,stdres.matmark,stdres.phymark,stdres.chemark,stdres.commark); 
if(l>368) 
{ 
temp.roll=stdres.rollno; 
strcpy(temp.name,stdres.name); 
temp.clas=stdres.clas; 
temp.sec=stdres.s; 
temp.total=l; 
tfile.write((char*)&temp,sizeof(temp)); 
} 
result.read((char*)&stdres,sizeof(stdres)); 


} 


result.close(); 
tfile.close(); 
gotoxy(12,1); 
cout<<"ROLL NO."; 
gotoxy(22,1); 
cout<<"NAME"; 
gotoxy(38,1); 
cout<<"TOTAL"; 

int k=3; 
for(int i=410;i>368;i--) 
{ 

tfile.open("tfile.dat",ios::in|ios::binary); 
tfile.read((char*)&temp,sizeof(temp)); 
while(tfile) 
{ 
if(temp.total==i) 
{ 
flag=1; 
gotoxy(15,k); 
cout<<temp.roll; 
gotoxy(22,k); 
cout<<temp.name; 
gotoxy(39,k++); 
cout<<temp.total; 
k++; 

} 
tfile.read((char*)&temp,sizeof(temp)); 

} 
tfile.close(); 
} 


if(flag==0) 
{ 
clrscr(); 
gotoxy(15,20); 
cout<<"SORRY! No record found."; 
} 
gotoxy(80,50); 
getch(); 
menu(); 

} 

void merit() 
{ 
// FUNCTION TO GENERATE SECOND MERIT LIST // 
reverse: 
clrscr(); 
int n,c,k=3,flag=0,i; 
gotoxy(15,2); 
cout<<"MENU"; 
gotoxy(15,4); 
cout<<"1. ENGLISH"; 
gotoxy(15,5); 
cout<<"2. MATHEMATICS"; 
gotoxy(15,6); 
cout<<"3. PHYSICS"; 
gotoxy(15,7); 
cout<<"4. CHEMISTRY"; 
gotoxy(15,8); 
cout<<"5. COMPUTER"; 
gotoxy(15,18); 
cout<<"Enter your option: "; 
cin>>n; 
clrscr(); 

fstream result; 
switch(n) 
{ 

/*english*/ 

case 1: back1: 
gotoxy(15,2); 
cout<<"1. Students with Grade 'A'"; 
gotoxy(15,3); 
cout<<"2. Students with Grade 'B'"; 
gotoxy(15,4); 
cout<<"3. Students with Grade 'C'"; 
gotoxy(15,5); 
cout<<"4. Students with Grade 'E' "; 
gotoxy(15,7); 
cout<<"Enter your Option: "; 
cin>>c; 
clrscr(); 
gotoxy(14,1); 
cout<<"Roll no."; 
gotoxy(25,1); 
cout<<"Name"; 
gotoxy(37,1); 
cout<<"Class"; 
gotoxy(45,1); 
cout<<"Section"; 
gotoxy(60,1); 
cout<<"<Marks"; 
switch(c) 
{ 
case 1: for(i=100;i>74;i--) 
{ 

result.open("result.dat",ios::in|ios::binary); 
result.read((char*)&stdres,sizeof(stdres)); 
while(result) 
{ 
if(stdres.engmark==i) 
{ 
flag=1; 
gotoxy (17,k); 
cout<<stdres.rollno; 
gotoxy(25,k); 
cout<<stdres.name; 
gotoxy(39,k); 
cout<<stdres.clas; 
gotoxy(47,k); 
cout<<stdres.s; 
gotoxy(62,k++); 
cout<<stdres.engmark; 
k++; 

} 
result.read((char*)&stdres,sizeof(stdres)); 

} 
result.close(); 
gotoxy(80,50); 

} 
if(flag==0) 
{ 
gotoxy(20,22);	gotoxy(20,22); 
cout<<"NO RECORD FOUND."; 
gotoxy(80,50); 

} 

getch(); 

break; 

case 2: for(i=74;i>60;i--) 
{ 

result.open("result.dat",ios::in|ios::binary); 
result.read((char*)&stdres,sizeof(stdres)); 
while(result) 
{ 
if(stdres.engmark==i) 
{ 
flag=1; 
gotoxy (17,k); 
cout<<stdres.rollno; 
gotoxy(25,k); 
cout<<stdres.name; 
gotoxy(39,k); 
cout<<stdres.clas; 
gotoxy(47,k); 
cout<<stdres.s; 
gotoxy(62,k++); 
cout<<stdres.engmark; 
k++; 

} 
result.read((char*)&stdres,sizeof(stdres)); 

} 
result.close(); 
} 
gotoxy(80,50); 
if(flag==0) 
{ 

gotoxy(20,22); 
cout<<"NO RECORD FOUND."; 
gotoxy(80,50); 

} 
getch(); 
break; 

case 3: for(i=60;i>33;i--) 
{ 

result.open("result.dat",ios::in|ios::binary); 
result.read((char*)&stdres,sizeof(stdres)); 
while(result) 
{ 
if(stdres.engmark==i) 
{ 
flag=1; 
gotoxy (17,k); 
cout<<stdres.rollno; 
gotoxy(25,k); 
cout<<stdres.name; 
gotoxy(39,k); 
cout<<stdres.clas; 
gotoxy(47,k); 
cout<<stdres.s; 
gotoxy(62,k++); 
cout<<stdres.engmark; 
k++; 

} 
result.read((char*)&stdres,sizeof(stdres)); 

} 
result.close(); 
} 
gotoxy(80,50); 
if(flag==0) 
{ 
gotoxy(20,22); 
cout<<"NO RECORD FOUND."; 
gotoxy(80,50); 
} 
getch(); 
break; 
case 4: for( i=33;i>0;i--) 
{ 

result.open("result.dat",ios::in|ios::binary); 
result.read((char*)&stdres,sizeof(stdres)); 
while(result) 
{ 
if(stdres.engmark==i) 
{ 
flag=1; 
gotoxy (17,k); 
cout<<stdres.rollno; 
gotoxy(25,k); 
cout<<stdres.name; 
gotoxy(39,k); 
cout<<stdres.clas; 
gotoxy(47,k); 
cout<<stdres.s; 
gotoxy(62,k++); 
cout<<stdres.engmark; 
k++; 

} 
result.read((char*)&stdres,sizeof(stdres)); 

} 
result.close(); 
} 
gotoxy(80,50); 
if(flag==0) 
{ 
gotoxy(20,22); 
cout<<"NO RECORD FOUND."; 
gotoxy(80,50); 
} 
getch(); 
break; 
default:clrscr(); 
gotoxy(25,25); 
cout<<"Invalid Option."; 
getch(); 
goto back1; 
} 

menu(); 


/*mathematics*/ 
case 2: back2: 
gotoxy(15,2); 
cout<<"1. Students with Grade 'A'"; 
gotoxy(15,3); 
cout<<"2. Students with Grade 'B'"; 
gotoxy(15,4); 
cout<<"3. Students with Grade 'C'"; 
gotoxy(15,5); 
cout<<"4. Students with Grade 'E' "; 
gotoxy(15,7); 
cout<<"Enter your Option: "; 
cin>>c; 
clrscr(); 
gotoxy(14,1); 
cout<<"Roll no."; 
gotoxy(25,1); 
cout<<"Name"; 
gotoxy(37,1); 
cout<<"Class"; 
gotoxy(45,1); 
cout<<"Section"; 
gotoxy(60,1); 
cout<<"Marks"; 
switch(c) 
{ 
case 1: for(i=100;i>74;i--) 
{ 

result.open("result.dat",ios::in|ios::binary); 
result.read((char*)&stdres,sizeof(stdres)); 
while(result) 
{ 
if(stdres.matmark==i) 
{ 
flag=1; 
gotoxy (17,k); 
cout<<stdres.rollno; 
gotoxy(25,k); 
cout<<stdres.name; 
gotoxy(39,k); 
cout<<stdres.clas; 
gotoxy(47,k); 
cout<<stdres.s; 
gotoxy(62,k++); 
cout<<stdres.matmark; 
k++; 

} 
result.read((char*)&stdres,sizeof(stdres)); 

} 
result.close(); 
gotoxy(80,50); 

} 
if(flag==0) 
{ 
gotoxy(20,22);	gotoxy(20,22); 
cout<<"NO RECORD FOUND."; 
gotoxy(80,50); 

} 

getch(); 

break; 

case 2: for(i=74;i>60;i--) 
{ 

result.open("result.dat",ios::in|ios::binary); 
result.read((char*)&stdres,sizeof(stdres)); 
while(result) 
{ 
if(stdres.matmark==i) 
{ 
flag=1; 
gotoxy (17,k); 
cout<<stdres.rollno; 
gotoxy(25,k); 
cout<<stdres.name; 
gotoxy(39,k); 
cout<<stdres.clas; 
gotoxy(47,k); 
cout<<stdres.s; 
gotoxy(62,k++); 
cout<<stdres.matmark; 
k++; 

} 
result.read((char*)&stdres,sizeof(stdres)); 

} 
result.close(); 
} 
gotoxy(80,50); 
if(flag==0) 
{ 

gotoxy(20,22); 
cout<<"NO RECORD FOUND."; 
gotoxy(80,50); 

} 
getch(); 
break; 

case 3: for(i=60;i>33;i--) 
{ 

result.open("result.dat",ios::in|ios::binary); 
result.read((char*)&stdres,sizeof(stdres)); 
while(result) 
{ 
if(stdres.matmark==i) 
{ 
flag=1; 
gotoxy (17,k); 
cout<<stdres.rollno; 
gotoxy(25,k); 
cout<<stdres.name; 
gotoxy(39,k); 
cout<<stdres.clas; 
gotoxy(47,k); 
cout<<stdres.s; 
gotoxy(62,k++); 
cout<<stdres.matmark; 
k++; 

} 
result.read((char*)&stdres,sizeof(stdres)); 

} 
result.close(); 
} 
gotoxy(80,50); 
if(flag==0) 
{ 
gotoxy(20,22); 
cout<<"NO RECORD FOUND."; 
gotoxy(80,50); 
} 
getch(); 
break; 
case 4: for( i=33;i>0;i--) 
{ 

result.open("result.dat",ios::in|ios::binary); 
result.read((char*)&stdres,sizeof(stdres)); 
while(result) 
{ 
if(stdres.matmark==i) 
{ 
flag=1; 
gotoxy (17,k); 
cout<<stdres.rollno; 
gotoxy(25,k); 
cout<<stdres.name; 
gotoxy(39,k); 
cout<<stdres.clas; 
gotoxy(47,k); 
cout<<stdres.s; 
gotoxy(62,k++); 
cout<<stdres.matmark; 
k++; 

} 
result.read((char*)&stdres,sizeof(stdres)); 

} 
result.close(); 
} 
gotoxy(80,50); 
if(flag==0) 
{ 
gotoxy(20,22); 
cout<<"NO RECORD FOUND."; 
gotoxy(80,50); 
} 
getch(); 
break; 
default:clrscr(); 
gotoxy(25,25); 
cout<<"Invalid Option."; 
getch(); 
goto back2; 
} 

menu(); 

/*physics*/ 

case 3: back3: 
gotoxy(15,2); 
cout<<"1. Students with Grade 'A'"; 
gotoxy(15,3); 
cout<<"2. Students with Grade 'B'"; 
gotoxy(15,4); 
cout<<"3. Students with Grade 'C'"; 
gotoxy(15,5); 
cout<<"4. Students with Grade 'E' "; 
gotoxy(15,7); 
cout<<"Enter your Option: "; 
cin>>c; 
clrscr(); 
gotoxy(14,1); 
cout<<"Roll no."; 
gotoxy(25,1); 
cout<<"Name"; 
gotoxy(37,1); 
cout<<"Class"; 
gotoxy(45,1); 
cout<<"Section"; 
gotoxy(60,1); 
cout<<"Marks"; 
switch(c) 
{ 
case 1: for(i=100;i>74;i--) 
{ 

result.open("result.dat",ios::in|ios::binary); 
result.read((char*)&stdres,sizeof(stdres)); 
while(result) 
{ 
if(stdres.phymark==i) 
{ 
flag=1; 
gotoxy (17,k); 
cout<<stdres.rollno; 
gotoxy(25,k); 
cout<<stdres.name; 
gotoxy(39,k); 
cout<<stdres.clas; 
gotoxy(47,k); 
cout<<stdres.s; 
gotoxy(62,k++); 
cout<<stdres.phymark; 
k++; 

} 
result.read((char*)&stdres,sizeof(stdres)); 

} 
result.close(); 
gotoxy(80,50); 

} 
if(flag==0) 
{ 
gotoxy(20,22);	gotoxy(20,22); 
cout<<"NO RECORD FOUND."; 
gotoxy(80,50); 

} 

getch(); 

break; 

case 2: for(i=74;i>60;i--) 
{ 

result.open("result.dat",ios::in|ios::binary); 
result.read((char*)&stdres,sizeof(stdres)); 
while(result) 
{ 
if(stdres.phymark==i) 
{ 
flag=1; 
gotoxy (17,k); 
cout<<stdres.rollno; 
gotoxy(25,k); 
cout<<stdres.name; 
gotoxy(39,k); 
cout<<stdres.clas; 
gotoxy(47,k); 
cout<<stdres.s; 
gotoxy(62,k++); 
cout<<stdres.phymark; 
k++; 

} 
result.read((char*)&stdres,sizeof(stdres)); 

} 
result.close(); 
} 
gotoxy(80,50); 
if(flag==0) 
{ 

gotoxy(20,22); 
cout<<"NO RECORD FOUND."; 
gotoxy(80,50); 

} 
getch(); 
break; 

case 3: for(i=60;i>33;i--) 
{ 

result.open("result.dat",ios::in|ios::binary); 
result.read((char*)&stdres,sizeof(stdres)); 
while(result) 
{ 
if(stdres.phymark==i) 
{ 
flag=1; 
gotoxy (17,k); 
cout<<stdres.rollno; 
gotoxy(25,k); 
cout<<stdres.name; 
gotoxy(39,k); 
cout<<stdres.clas; 
gotoxy(47,k); 
cout<<stdres.s; 
gotoxy(62,k++); 
cout<<stdres.phymark; 
k++; 

} 
result.read((char*)&stdres,sizeof(stdres)); 

} 
result.close(); 
} 
gotoxy(80,50); 
if(flag==0) 
{ 
gotoxy(20,22); 
cout<<"NO RECORD FOUND."; 
gotoxy(80,50); 
} 
getch(); 
break; 
case 4: for( i=33;i>0;i--) 
{ 

result.open("result.dat",ios::in|ios::binary); 
result.read((char*)&stdres,sizeof(stdres)); 
while(result) 
{ 
if(stdres.phymark==i) 
{ 
flag=1; 
gotoxy (17,k); 
cout<<stdres.rollno; 
gotoxy(25,k); 
cout<<stdres.name; 
gotoxy(39,k); 
cout<<stdres.clas; 
gotoxy(47,k); 
cout<<stdres.s; 
gotoxy(62,k++); 
cout<<stdres.phymark; 
k++; 

} 
result.read((char*)&stdres,sizeof(stdres)); 

} 
result.close(); 
} 
gotoxy(80,50); 
if(flag==0) 
{ 
gotoxy(20,22); 
cout<<"NO RECORD FOUND."; 
gotoxy(80,50); 
} 
getch(); 
break; 
default:clrscr(); 
gotoxy(25,25); 
cout<<"Invalid Option."; 
getch(); 
goto back3; 
} 

menu(); 


/*chemistry*/ 
case 4: back4: 
gotoxy(15,2); 
cout<<"1. Students with Grade 'A'"; 
gotoxy(15,3); 
cout<<"2. Students with Grade 'B'"; 
gotoxy(15,4); 
cout<<"3. Students with Grade 'C'"; 
gotoxy(15,5); 
cout<<"4. Students with Grade 'E' "; 
gotoxy(15,7); 
cout<<"Enter your Option: "; 
cin>>c; 
clrscr(); 
gotoxy(14,1); 
cout<<"Roll no."; 
gotoxy(25,1); 
cout<<"Name"; 
gotoxy(37,1); 
cout<<"Class"; 
gotoxy(45,1); 
cout<<"Section"; 
gotoxy(60,1); 
cout<<"Marks"; 
switch(c) 
{ 
case 1: for(i=100;i>74;i--) 
{ 

result.open("result.dat",ios::in|ios::binary); 
result.read((char*)&stdres,sizeof(stdres)); 
while(result) 
{ 
if(stdres.chemark==i) 
{ 
flag=1; 
gotoxy (17,k); 
cout<<stdres.rollno; 
gotoxy(25,k); 
cout<<stdres.name; 
gotoxy(39,k); 
cout<<stdres.clas; 
gotoxy(47,k); 
cout<<stdres.s; 
gotoxy(62,k++); 
cout<<stdres.chemark; 
k++; 

} 
result.read((char*)&stdres,sizeof(stdres)); 

} 
result.close(); 
gotoxy(80,50); 

} 
if(flag==0) 
{ 
gotoxy(20,22);	gotoxy(20,22); 
cout<<"NO RECORD FOUND."; 
gotoxy(80,50); 

} 

getch(); 

break; 

case 2: for(i=74;i>60;i--) 
{ 

result.open("result.dat",ios::in|ios::binary); 
result.read((char*)&stdres,sizeof(stdres)); 
while(result) 
{ 
if(stdres.chemark==i) 
{ 
flag=1; 
gotoxy (17,k); 
cout<<stdres.rollno; 
gotoxy(25,k); 
cout<<stdres.name; 
gotoxy(39,k); 
cout<<stdres.clas; 
gotoxy(47,k); 
cout<<stdres.s; 
gotoxy(62,k++); 
cout<<stdres.chemark; 
k++; 

} 
result.read((char*)&stdres,sizeof(stdres)); 

} 
result.close(); 
} 
gotoxy(80,50); 
if(flag==0) 
{ 

gotoxy(20,22); 
cout<<"NO RECORD FOUND."; 
gotoxy(80,50); 

} 
getch(); 
break; 

case 3: for(i=60;i>33;i--) 
{ 

result.open("result.dat",ios::in|ios::binary); 
result.read((char*)&stdres,sizeof(stdres)); 
while(result) 
{ 
if(stdres.chemark==i) 
{ 
flag=1; 
gotoxy (17,k); 
cout<<stdres.rollno; 
gotoxy(25,k); 
cout<<stdres.name; 
gotoxy(39,k); 
cout<<stdres.clas; 
gotoxy(47,k); 
cout<<stdres.s; 
gotoxy(62,k++); 
cout<<stdres.chemark; 
k++; 

} 
result.read((char*)&stdres,sizeof(stdres)); 

} 
result.close(); 
} 
gotoxy(80,50); 
if(flag==0) 
{ 
gotoxy(20,22); 
cout<<"NO RECORD FOUND."; 
gotoxy(80,50); 
} 
getch(); 
break; 
case 4: for( i=33;i>0;i--) 
{ 

result.open("result.dat",ios::in|ios::binary); 
result.read((char*)&stdres,sizeof(stdres)); 
while(result) 
{ 
if(stdres.chemark==i) 
{ 
flag=1; 
gotoxy (17,k); 
cout<<stdres.rollno; 
gotoxy(25,k); 
cout<<stdres.name; 
gotoxy(39,k); 
cout<<stdres.clas; 
gotoxy(47,k); 
cout<<stdres.s; 
gotoxy(62,k++); 
cout<<stdres.chemark; 
k++; 

} 
result.read((char*)&stdres,sizeof(stdres)); 

} 
result.close(); 
} 
gotoxy(80,50); 
if(flag==0) 
{ 
gotoxy(20,22); 
cout<<"NO RECORD FOUND."; 
gotoxy(80,50); 
} 
getch(); 
break; 
default:clrscr(); 
gotoxy(25,25); 
cout<<"Invalid Option."; 
getch(); 
goto back4; 
} 

menu(); 

/*computer*/ 

case 5: back5: 
gotoxy(15,2); 
cout<<"1. Students with Grade 'A'"; 
gotoxy(15,3); 
cout<<"2. Students with Grade 'B'"; 
gotoxy(15,4); 
cout<<"3. Students with Grade 'C'"; 
gotoxy(15,5); 
cout<<"4. Students with Grade 'E' "; 
gotoxy(15,7); 
cout<<"Enter your Option: "; 
cin>>c; 
clrscr(); 
gotoxy(14,1); 
cout<<"Roll no."; 
gotoxy(25,1); 
cout<<"Name"; 
gotoxy(37,1); 
cout<<"Class"; 
gotoxy(45,1); 
cout<<"Section"; 
gotoxy(60,1); 
cout<<"Marks"; 
switch(c) 
{ 
case 1: for(i=100;i>74;i--) 
{ 

result.open("result.dat",ios::in|ios::binary); 
result.read((char*)&stdres,sizeof(stdres)); 
while(result) 
{ 
if(stdres.commark==i) 
{ 
flag=1; 
gotoxy (17,k); 
cout<<stdres.rollno; 
gotoxy(25,k); 
cout<<stdres.name; 
gotoxy(39,k); 
cout<<stdres.clas; 
gotoxy(47,k); 
cout<<stdres.s; 
gotoxy(62,k++); 
cout<<stdres.commark; 
k++; 

} 
result.read((char*)&stdres,sizeof(stdres)); 

} 
result.close(); 
gotoxy(80,50); 

} 
if(flag==0) 
{ 
gotoxy(20,22);	gotoxy(20,22); 
cout<<"NO RECORD FOUND."; 
gotoxy(80,50); 

} 

getch(); 

break; 

case 2: for(i=74;i>60;i--) 
{ 

result.open("result.dat",ios::in|ios::binary); 
result.read((char*)&stdres,sizeof(stdres)); 
while(result) 
{ 
if(stdres.commark==i) 
{ 
flag=1; 
gotoxy (17,k); 
cout<<stdres.rollno; 
gotoxy(25,k); 
cout<<stdres.name; 
gotoxy(39,k); 
cout<<stdres.clas; 
gotoxy(47,k); 
cout<<stdres.s; 
gotoxy(62,k++); 
cout<<stdres.commark; 
k++; 

} 
result.read((char*)&stdres,sizeof(stdres)); 

} 
result.close(); 
} 
gotoxy(80,50); 

if(flag==0) 
{ 

gotoxy(20,22); 
cout<<"NO RECORD FOUND."; 
gotoxy(80,50); 

} 
getch(); 
break; 

case 3: for(i=60;i>33;i--) 
{ 

result.open("result.dat",ios::in|ios::binary); 
result.read((char*)&stdres,sizeof(stdres)); 
while(result) 
{ 
if(stdres.commark==i) 
{ 
flag=1; 
gotoxy (17,k); 
cout<<stdres.rollno; 
gotoxy(25,k); 
cout<<stdres.name; 
gotoxy(39,k); 
cout<<stdres.clas; 
gotoxy(47,k); 
cout<<stdres.s; 
gotoxy(62,k++); 
cout<<stdres.commark; 
k++; 

} 
result.read((char*)&stdres,sizeof(stdres)); 

} 
result.close(); 
} 
gotoxy(80,50); 
if(flag==0) 
{ 
gotoxy(20,22); 
cout<<"NO RECORD FOUND."; 
gotoxy(80,50); 
} 
getch(); 
break; 
case 4: for( i=33;i>0;i--) 
{ 

result.open("result.dat",ios::in|ios::binary); 
result.read((char*)&stdres,sizeof(stdres)); 
while(result) 
{ 
if(stdres.commark==i) 
{ 
flag=1; 
gotoxy (17,k); 
cout<<stdres.rollno; 
gotoxy(25,k); 
cout<<stdres.name; 
gotoxy(39,k); 
cout<<stdres.clas; 
gotoxy(47,k); 
cout<<stdres.s; 
gotoxy(62,k++); 
cout<<stdres.commark; 
k++; 

} 
result.read((char*)&stdres,sizeof(stdres)); 

} 
result.close(); 
} 
gotoxy(80,50); 
if(flag==0) 
{ 
gotoxy(20,22); 
cout<<"NO RECORD FOUND."; 
gotoxy(80,50); 
} 
getch(); 
break; 
default:clrscr(); 
gotoxy(25,25); 
cout<<"Invalid Option."; 
getch(); 
goto back5; 
} 

menu(); 


default: clrscr(); 
cout<<"INVALID OPTION"; 
getch(); 
menu(); 

} 





gotoxy(80,50); 


} 

void delet() 


{ // FUNCTION TO DELETE A RESULT ENTRY // 
clrscr(); 
student stud; 
int r,s,flag=0; 
char t,z; 
cout<<"Enter the class: "; 
cin>>s; 
cout<<"Enter the section: "; 
cin>>t; 
cout<<"Enter the roll no."; 
cin>>r; 
fstream result,tfile; 

result.open("result.dat",ios::in|ios::binary); 
tfile.open("tfile.dat",ios::out|ios::binary); 
result.read((char*)&stdres,sizeof(stdres)); 
while(result) 
{ 
if(stdres.clas==s&&stdres.s==t&&stdres.rollno==r) 
{ 
clrscr(); 
flag=1; 
gotoxy(20,20); 
cout<<"RECORD FOUND AND DELETED."; 
getch(); 
} 
else 
tfile.write((char*)&stdres,sizeof(stdres)); 
result.read((char*)&stdres,sizeof(stdres)); 
} 
result.close(); 
tfile.close(); 

if(flag==0) 
{ 
clrscr(); 
gotoxy(25,22); 
cout<<"RECORD NOT FOUND."; 
getch(); 
exit(0); 
} 


result.open("result.dat",ios::out|ios::binary); 
tfile.open("tfile.dat",ios::in|ios::binary); 
tfile.read((char*)&stdres,sizeof(stdres)); 
while(tfile) 
{ 
result.write((char*)&stdres,sizeof(stdres)); 
tfile.read((char*)&stdres,sizeof(stdres)); 
} 
result.close(); 
tfile.close(); 

/*DISPLAYING THE RECORDS AFTER DELETION*/ 

clrscr(); 
cout<<"New File after Deletion of Record"; 
getch(); 




result.open("result.dat",ios::in|ios::binary); 
result.read((char*)&stdres,sizeof(stdres)); 


while(result) 
{ 
clrscr(); 
int max1=100,max2=70; 
char ch; 
cout<<"CLASS:"; 
gotoxy (16,1); 
cout<<"SECTION:"; 
gotoxy(31,1); 
cout<<"ROLL NO:"; 
gotoxy(47,1); 
cout<<"STUDENT'S NAME:"; 
gotoxy(1,5); 
cout<<"FATHER NAME:"; 
gotoxy(45,5); 
cout<<"CLASS TEACHER:"; 
gotoxy(1,9); 
cout<<"S.NO."; 
gotoxy(15,9); 
cout<<"SUBJECT"; 
gotoxy(30,9); 
cout<<"MARKS"; 
gotoxy(40,9); 
cout<<"MAXIMUM MARKS"; 
gotoxy(70,9); 
cout<<"GRADE"; 
gotoxy(3,11); 
cout<<"1"; 
gotoxy(15,11); 
cout<<"ENGLISH"; 
gotoxy(3,13); 
cout<<"2"; 
gotoxy(15,13); 
cout<<"MATHS"; 
gotoxy(3,15); 
cout<<"3"; 
gotoxy(15,15); 
cout<<"PHYSICS"; 
gotoxy(3,17); 
cout<<"4"; 
gotoxy(15,17); 
cout<<"CHEMISTRY"; 
gotoxy(3,19); 
cout<<"5"; 
gotoxy(15,19); 
cout<<"COMPUTER"; 
gotoxy(3,25); 
cout<<"6"; 
gotoxy(15,25); 
cout<<"TOTAL"; 
gotoxy(3,27); 
cout<<"7"; 
gotoxy(15,27); 
cout<<"PERCENTAGE"; 
gotoxy(8,1); 
cout<<stdres.clas; /*printing student information*/ 
gotoxy(25,1); 
cout<<stdres.s; 
gotoxy(40,1); 
cout<<stdres.rollno; 
gotoxy(63,1); 
puts(stdres.name); 
fflush(stdout); 
gotoxy(14,5); 
puts(stdres.fatername); 
fflush(stdout); 
gotoxy(60,5); 
puts(stdres.teachname); 

gotoxy(47,11); /*marks table*/ 
cout<<"100"; 
gotoxy(32,11); 
cout<<stdres.engmark; 
gotoxy(72,11); 
cout<<stud.grade(stdres.engmark,max1); 

gotoxy(47,13); 
cout<<"100"; 
gotoxy(32,13); 
cout<<stdres.matmark; 
gotoxy(72,13); 
cout<<stud.grade(stdres.matmark,max1); 

gotoxy(47,15); 
cout<<" 70"; 
gotoxy(32,15); 
cout<<stdres.phymark; 
gotoxy(72,15); 
cout<<stud.grade(stdres.phymark,max2); 

gotoxy(47,17); 
cout<<" 70"; 
gotoxy(32,17); 
cout<<stdres.chemark; 
gotoxy(72,17); 
cout<<stud.grade(stdres.chemark,max2); 

gotoxy(47,19); 
cout<<" 70"; 
gotoxy(32,19); 
cout<<stdres.commark; 
gotoxy(72,19); 
cout<<stud.grade(stdres.commark,max2); 


gotoxy(47,25); 
cout<<"410"; 
gotoxy(31,25); 

cout<< stud.total(stdres.engmark, stdres.matmark, stdres.phymark, stdres.chemark,stdres.commark); 

stdres.total = stud.total(stdres.engmark,stdres.matmark, stdres.phymark, stdres.chemark, stdres.commark); 

gotoxy(32,27); 
stdres.percentage=stud.percent(stdres.total); 
cout<<stdres.percentage; 
gotoxy(80,50); 
result.read((char*)&stdres,sizeof(stdres)); 
getch(); 

} 

result.close(); 
menu(); 

} 
