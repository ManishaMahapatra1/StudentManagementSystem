  //********STUDENT MANAGEMENT SYSTEM********//
  #include<fstream.h>
  #include<conio.h>
  #include<process.h>
  #include<stdio.h>
  #include<string.h>
  class student
  {
  char fname[20],mname[20],gen[5],add[30],e_id[30],br[8],hsf;//father name & mother name
  int rollno,admin_no,dd,mm,yy,dt,mt,yt;//roll number, admission number, date, month,year
  char ph_no[15];
  public:
  char name[20];
  void getdata();           //function for input data
  void putdata();
  void modifydata();      //function to edit data
  void display();        //function to display data
  int get_roll()       //function return rollno
  {
  return rollno;
  }
  }s1;
  void student::getdata()
  {
  clrscr();
  gotoxy(10,2);textcolor(0);textbackground(10);
  cprintf(":: Record Entry Section::");
  gotoxy(12,6);textcolor(3);textbackground(0);
  cprintf("1. Enter the rollno:");cin>>rollno;
  gotoxy(12,7);textcolor(3);
  cprintf("2. Enter the name:");gets(name);
  gotoxy(12,8);textcolor(3);
  cprintf("3. Gender:");gets(gen);
  gotoxy(12,9);textcolor(3);
  cprintf("4. Father name:");gets(fname);
  gotoxy(12,10);textcolor(3);
  cprintf("5. Mother name:");gets(mname);
  gotoxy(12,11);textcolor(3);
  cprintf("6. Address:");gets(add);
  gotoxy(12,12);textcolor(3);
  cprintf("7. Phone no.:");gets(ph_no);
  gotoxy(12,13);textcolor(3);
  cprintf("8. e-mail id:");gets(e_id);
  gotoxy(12,14);textcolor(3);
  cprintf("9. Branch(CSE/ECE/EEE/EE/IT/Others):");gets(br);
  gotoxy(12,15);textcolor(3);-
  cprintf("10. Enter admission no.:");
  cin>>admin_no;
  gotoxy(12,16);textcolor(3);
  cprintf("11. Admission date:");
  gotoxy(14,17);textcolor(3);
  cprintf("Date:");cin>>dt;
  gotoxy(14,18);textcolor(3);
  cprintf("Month:");cin>>mt;
  gotoxy(14,19);textcolor(3);
  cprintf("Year:");cin>>yt;
  gotoxy(12,20);textcolor(3);
  cprintf("12. Enter date of birth:");
  gotoxy(14,21);textcolor(3);
  cprintf("Date:");cin>>dd;
  gotoxy(14,22);textcolor(3);
  cprintf("Month:");cin>>mm;
  gotoxy(14,23);textcolor(3);
  cprintf("Year:");cin>>yy;
  gotoxy(12,24);textcolor(3);
  cprintf("13. Hostel Facility(y/n):");cin>>hsf;
}
//---------------Display Student Record-------------//
void student::putdata()
{
clrscr();
gotoxy(10,2);textcolor(7);textbackground(5);
cprintf("::RECORD::");
gotoxy(12,6);textcolor(3);textbackground(0);
cprintf("1.Rollno:");
cout<<rollno;
gotoxy(12,7);textcolor(3);
cprintf("2.Name:");
puts(name);
gotoxy(12,8);textcolor(3);
cprintf("3.Gender:");puts(gen);
gotoxy(12,9);textcolor(3);
cprintf("4.Father name:");puts(fname);
gotoxy(12,10);textcolor(3);
cprintf("5.Mother name:");puts(mname);
gotoxy(12,11);textcolor(3);
cprintf("6.Address:");puts(add);
gotoxy(12,12);textcolor(3);
cprintf("7.Phone no:");puts(ph_no);
gotoxy(12,13);textcolor(3);
cprintf("8.email-id:");puts(e_id);
gotoxy(12,14);textcolor(3);
cprintf("9.Branch:");puts(br);
gotoxy(12,15);textcolor(3);
cprintf("10.Admission ID:");cout<<admin_no;
gotoxy(12,16);textcolor(3);
cprintf("11.Admission date:");
cout<<dt<<"/"<<mt<<"/"<<yt;
gotoxy(12,17);textcolor(3);
cprintf("12.Date of birth:");
cout<<dd<<"/"<<mm<<"/"<<yy;
gotoxy(12,18);textcolor(3);
cprintf("13.Hostel facility:");cout<<hsf;
}

//---------------Modify Student Record-----------//
void student::modifydata()
{
char nm[15],fath[15],moth[15],gn[5],adr[30],phn[15],id[30],hf,brh[8];
int rno,d,m,y,admis,dh,mh,yh;
clrscr();
gotoxy(10,2);textcolor(0);textbackground(8);
cprintf("Enter New Record:");
gotoxy(11,5);textcolor(14);textbackground(0);
cprintf("Name:");
gets(nm);
gotoxy(11,6);textcolor(14);
cprintf("Roll No.:");
cin>>rno;
gotoxy(11,7);textcolor(14);
cprintf("Gender:");gets(gn);
gotoxy(11,8);
cprintf("Father name:");
gets(fath);
gotoxy(11,9);textcolor(14);
cprintf("Mother name:");
gets(moth);
gotoxy(11,10);textcolor(14);
cprintf("Address:");gets(adr);
gotoxy(11,11);textcolor(14);
cprintf("Phone no:");gets(phn);
gotoxy(11,12);textcolor(14);
cprintf("email-id:");gets(id);
gotoxy(11,13);textcolor(14);
cprintf("Branch:");gets(brh);
gotoxy(11,14);textcolor(14);
cprintf("Admission ID:");
cin>>admis;
gotoxy(11,15);textcolor(14);
cprintf("Admission date:");
gotoxy(14,16);textcolor(14);
cprintf("Date:");
cin>>dh;
gotoxy(14,17);textcolor(14);
cprintf("Month:");
cin>>mh;
gotoxy(14,18);textcolor(14);
cprintf("Year:");
cin>>yh;
gotoxy(11,19);textcolor(14);
cprintf("Date of Birth:");
gotoxy(14,20);textcolor(14);
cprintf("Date:");
cin>>d;
gotoxy(14,21);textcolor(14);
cprintf("Month:");
cin>>m;
gotoxy(14,22);textcolor(14);
cprintf("Year:");
cin>>y;
strcpy(name,nm);
strcpy(gen,gn);
strcpy(fname,fath);
strcpy(mname,moth);
strcpy(add,adr);
strcpy(ph_no,phn);
strcpy(e_id,id);
strcpy(br,brh);
hsf=hf;
rollno=rno;
admin_no=admis;dd=d;mm=m;yy=y;
dt=dh;mt=mh;yt=yh;
}
//----------------Display all records of the student----------------//
void student::display()
{
student *p3;
int z=6;
clrscr();
gotoxy(30,1);
textbackground(1);textcolor(6);
cprintf("Student Information");
gotoxy(30,2);textbackground(RED);
textcolor(WHITE);
cprintf("::Display Record::");
textbackground(0);textcolor(11);
gotoxy(1,3);
cprintf("--------------------------------------------------------------------------------");
gotoxy(1,4);
cprintf("Name        Rollno Admission no.  Dateofbirth        Fathername       Mothername");
gotoxy(1,5);
cprintf("--------------------------------------------------------------------------------");
textcolor(7);
ifstream fff;
fff.open("student.txt",ios::in);
while(!fff.eof())
 {
  fff.read((char*)&s1,sizeof(s1));
  {
   gotoxy(1,z);
   cout<<name;
   gotoxy(15,z);
   cout<<rollno;
   gotoxy(24,z);
   cout<<admin_no;
   gotoxy(38,z);
   cout<<dd<<"/"<<mm<<"/"<<yy;
   gotoxy(54,z);
   puts(fname);
   gotoxy(70,z);
   puts(mname);
   z++;
  }
 }
  gotoxy(50,24);
  textcolor(13);
  cprintf("press any key to continue");
  getch();
}
//------------------------main function--------------------------//
int main()
{
 start:
 clrscr();
 int a;
 textcolor(5);
 textbackground(7);
 gotoxy(25,2);
 cprintf("::STUDENT INFORMATION SYSTEM::");
 gotoxy(10,4);
 textcolor(12);
 textbackground(0);
 cprintf("1.Enter new record");
 gotoxy(10,6);textcolor(12);
 cprintf("2.Search student record");
gotoxy(10,8);textcolor(12);
cprintf("3.Display record");
gotoxy(10,10);textcolor(12);
cprintf("4.Modify the record");
gotoxy(10,12);textcolor(12);
cprintf("5.Delete student record");
gotoxy(10,14);textcolor(12);
cprintf("6.Exit");
gotoxy(31,16);textcolor(2);
cprintf("Enter the option:");cin>>a;
do{
switch(a)
{
case 1:
clrscr();
char ch;
ofstream fout;
fout.open("student.txt",ios::app|ios::ate);
if(!fout)
{
cout<<"file not exist";
exit(1);
}
do{
s1.getdata();
fout.write((char*)&s1,sizeof(s1));
clrscr();
gotoxy(10,7);textcolor(4);
cprintf("---record added successfully---");
gotoxy(10,8);textcolor(3);
cprintf("do u want to add more record(y/n):");cin>>ch;
}while(ch=='y'||ch=='Y');
fout.close();
goto start;
case 2:
start3:
clrscr();
int a;
gotoxy(10,2);textcolor(10);
cprintf("::Search Record::");
gotoxy(11,6);textcolor(14);
cprintf("1.Search by roll no.");
gotoxy(11,7);textcolor(14);
cprintf("2.Search by name");
gotoxy(11,8);textcolor(14);
cprintf("3.Back");
gotoxy(17,9);textcolor(6);
cprintf("Enter the option:");cin>>a;
switch(a)
{
case 1:
	clrscr();
	int r_no;
	char found='n';
	gotoxy(17,17);textcolor(14);
	cprintf("Enter the roll no:");cin>>r_no;
	ifstream fin;
	fin.open("student.txt",ios::in);
	while(!fin.eof())
	{
	fin.read((char*)&s1,sizeof(s1));
	if(s1.get_roll()==r_no)
	{
	s1.putdata();
	found='y';
	getch();
	goto start3;
	}
	}
	if(found=='n')
	{
	clrscr();gotoxy(25,25);textcolor(9);
	cprintf("Sorry!record not found");
	getch();
	}
	fin.close();
	getch();
	goto start3;
case 2:
clrscr();
student *s;
s=&s1;
char s_name[20];
char confirm='n';
gotoxy(17,17);textcolor(14);
cprintf("Enter the name:");gets(s_name);
ifstream fn;
fn.open("student.txt",ios::in);
while(!fn.eof())
{
fn.read((char*)&s1,sizeof(s1));
if(strcmpi(s_name,s->name)==0)
{s->putdata();
confirm='Y';
getch();
goto start3;
}}
if(confirm=='n')
{
clrscr();gotoxy(25,25);textcolor(9);
cprintf("Sorry!record not found");
getch();
}
fn.close();
getch();
goto start3;
case 3:
     goto start;
     default:gotoxy(15,10);textcolor(4);
     cprintf("Illegal option");
    break;
      }
     break;
case 3:
     clrscr();
     s1.display();
     goto start;
case 4:
     clrscr();
     char find='n';
     int r_n;
     long pos;
     fstream ff;
     ff.open("student.txt",ios::in|ios::out|ios::binary);
     gotoxy(15,15);textcolor(5);
     cprintf("Enter the rollno to modify");
     cin>>r_n;
     while(!ff.eof())
     {
     pos=ff.tellg();
     ff.read((char*)&s1,sizeof(s1));
     if(s1.get_roll()==r_n)
     {
     find='y';
     s1.modifydata();
     ff.seekg(pos);
     ff.write((char*)&s1,sizeof(s1));
     ff.close();
     goto start;
     }}
     if(find=='n')
     {
     clrscr();
     gotoxy(15,15);
     textcolor(3);
     cprintf("Record not found !");
     }
     break;
case 5:
     clrscr();
     student *ss;
     ss=&s1;
     int stno;              //for rollno
     char found='f',confirm='n';
     ifstream fi;
     fi.open("student.txt",ios::in);
     ofstream fo;
     fo.open("tem.txt",ios::out);
     cout<<"Enter the rollno to delete:";
     cin>>stno;
     while(!fi.read((char*)&s1,sizeof(s1)))
     {
     if(ss->get_roll()==stno)
     {
     ss->putdata();
     found='y';
     cprintf("Are you sure (y/n):");
     cin>>confirm;
     if(confirm=='n'||confirm=='N')
     {
     fo.write((char*)&s1,sizeof(s1));
     cprintf("Abort by the user");
     getch();
     }
     else
     fo.write((char*)&s1,sizeof(s1));
     }}
     if(found=='f')
     {
     cprintf("Record not found");
     }
     fi.close();
     fo.close();
     remove("student.txt");
     rename("tem.txt","student.txt");
     goto start;
case 6:
     clrscr();
     exit(0);
      break;
     default:textcolor(1);
     gotoxy(10,20);
     //clrscr();
     cprintf("!!!Wrong choice!!!");     //break;
     getch();
     goto start;
     }}
while(0);
getch();
return 0;
}




