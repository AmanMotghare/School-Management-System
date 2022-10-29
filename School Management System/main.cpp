//UPDATED CODE
#include <iostream>
#include <unistd.h>
using namespace std;

class Address
{
    private:
    string address,pincode,city;

    public:

    void SetAddress()
    {
        cin>>address;
    }

    string GetAddress()
    {
        return address;
    }

    void SetPincode()
    {
       cin>>pincode;
    }

    string GetPincode()
    {
        return pincode;
    }

    void SetCity()
    {
       cin>>city;
    }

    string GetCity()
    {
        return city;
    }

    //Constructor
    Address()
    {
        address="UNKNOWN";
        pincode="UNKNOWN";
        city="UNKNOWN";
    }

    void SetAddressInfo()
    {
    cout<<"  Enter your Address: ";
    SetAddress();
    cout<<"  Enter your Pin code: ";
    SetPincode();
    cout<<"  Enter your City: ";
    SetCity();
    }


    void ShowAddress()
    {
        cout<<"  ADDRESS      : "<<GetAddress()<<endl;
        cout<<"  CITY         : "<<GetCity()<<endl;
        cout<<"  PINCODE      : "<<GetPincode()<<endl;
    }

};

class Teacher
{
    private:
    string TeacherName,TeacherUsername,SubjectCode,Password,Subject;
    Address ad;
    public:

    void SetTeacherName()
    {
        cin>>TeacherName;
    }

    string GetTeacherName()
    {
        return TeacherName;
    }

    void SetTeacherUsername(string Tid)
    {
        TeacherUsername=Tid;
    }

    string  GetTeacherUsername()
    {
      return TeacherUsername;
    }

    void SetPassword()
    {
        cin>>Password;
    }

    string GetPassword()
    {
        return Password;
    }

    void SetSubjectCode()
    {
        cin>>SubjectCode;
    }

    string GetSubjectCode()
    {
        return SubjectCode;
    }

    void SetSubject(string Sub)
    {
        Subject=Sub;
    }

    string GetSubject()
    {
        return Subject;
    }

    Teacher()
    {
        TeacherName="UNKNOWN";
        TeacherUsername="UNKNOWN";
        SubjectCode="UNKNOWN";
        Subject="UNKNOWN";
    }

    void TeacherInfo()
    {
        string SubjectCode;//This Variable is made to throw an Exception.
       // sleep(1);

        cout<<"\n  *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;
        cout<<"               NOW, PLEASE FILL YOUR DETAILS           "<<endl;
        cout<<"  *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;

        sleep(1);

        cout<<"\n  Enter your Name: ";
        SetTeacherName();

        sub:cout<<"\n  ======================"<<endl;
        cout<<"  | FOR ENGLISH -> ENG |"<<endl;
        cout<<"  | FOR MATHS   -> MAT |"<<endl;
        cout<<"  | FOR SCIENCE -> SCI |"<<endl;
        cout<<"  ======================"<<endl;
        cout<<"\n  Enter Subject Code here (REFER TO THE TABLE ABOVE): ";

        try
        {
            SetSubjectCode();

            if(GetSubjectCode() == "ENG")
            {
                SetSubject("ENGLISH");
            }
            else if(GetSubjectCode() =="MAT")
            {
               SetSubject("MATHS");
            }
            else if(GetSubjectCode() =="SCI")
            {
               SetSubject("SCIENCE");
            }
            else if(GetSubjectCode() !="ENG" || GetSubjectCode() !="MAT" || GetSubjectCode() !="SCI" )
            {
                throw SubjectCode;
            }
        }
        catch(...)
        {
            cout<<"\n  -------------------------------------------------"<<endl;
            cout<<"    ALERT : PLEASE ENTER IN CAPITAL LETTERS ONLY. "<<endl;
            cout<<"  -------------------------------------------------"<<endl;
            sleep(1);
            goto sub;
        }
    }

    void SetTeacherInfo()
    {
        TeacherInfo();
        ad.SetAddressInfo();
    }

    void ShowTeacherData()
    {
        cout<<"\n  -------------------------------"<<endl;
        cout<<"  "<<GetTeacherName()<<"'s Login Credentials"<<endl;
        cout<<"  -------------------------------"<<endl;
        cout<<"  USERNAME   : "<<GetTeacherUsername()<<endl;
        cout<<"  PASSWORD   : "<<GetPassword()<<endl;
        cout<<"  -------------------------------"<<endl;
        cout<<"  "<<GetTeacherName()<<"'s Details"<<endl;
        cout<<"  ::::::::::::::::::::::::::::::::"<<endl<<endl;
        cout<<"  NAME         : "<<GetTeacherName()<<endl;
        cout<<"  SUBJECT      : "<<GetSubject()<<endl;
        cout<<"  SUBJECT CODE : "<<GetSubjectCode()<<endl;
        ad.ShowAddress();
        cout<<"\n  ::::::::::::::::::::::::::::::::"<<endl;
    }


    void UpdateTeacherName()
    {
        cout<<"  Current Name: "<<GetTeacherName()<<endl;
        cout<<"  Enter Updated Name: ";
        SetTeacherName();

        cout<<"\n  Updated Name"<<" is "<<GetTeacherName()<<endl;
    }

    void UpdateTeacherAddress()
    {
        cout<<"  Current Address: "<<ad.GetAddress()<<endl;
        cout<<"  Enter Updated Address: ";
        ad.SetAddress();

        cout<<"\n  Updated Address of "<<GetTeacherName()<<" is "<<ad.GetAddress()<<endl;
    }

    void UpdateTeacherPincode()
    {
        cout<<"  Current Pin Code : "<<ad.GetPincode()<<endl;
        cout<<"  Enter Updated Pin Code : ";
        ad.SetPincode();

        cout<<"\n  Updated Pin Code of "<<GetTeacherName()<<" is "<<ad.GetPincode()<<endl;
    }

    void UpdateTeacherCity()
    {
        cout<<"  Current City : "<<ad.GetCity()<<endl;
        cout<<"  Enter Updated City : ";
        ad.SetCity();

        cout<<"\n  Updated City of "<<GetTeacherName()<<" is "<<ad.GetCity()<<endl;
    }

    void UpdateTeacherSubject()
    {
        cout<<"  Current Subject : "<<GetSubject()<<endl;
        sub:cout<<"\n  ======================"<<endl;
        cout<<"  | FOR ENGLISH -> ENG |"<<endl;
        cout<<"  | FOR MATHS   -> MAT |"<<endl;
        cout<<"  | FOR SCIENCE -> SCI |"<<endl;
        cout<<"  ======================"<<endl;
        cout<<"\n  Enter Subject Code of an updated subject here (REFER TO THE TABLE ABOVE): ";

        try
        {
            SetSubjectCode();

            if(GetSubjectCode() == "ENG")
            {
                SetSubject("ENGLISH");
            }
            else if(GetSubjectCode() =="MAT")
            {
               SetSubject("MATHS");
            }
            else if(GetSubjectCode() =="SCI")
            {
               SetSubject("SCIENCE");
            }
            else if(GetSubjectCode() !="ENG" || GetSubjectCode() !="MAT" || GetSubjectCode() !="SCI" )
            {
                throw SubjectCode;
            }
        }
        catch(...)
        {
            cout<<"\n  -------------------------------------------------"<<endl;
            cout<<"    ALERT : PLEASE ENTER IN CAPITAL LETTERS ONLY. "<<endl;
            cout<<"  -------------------------------------------------"<<endl;
            sleep(1);
            goto sub;
        }

        cout<<"\n  Updated Subject of "<<GetTeacherName()<<" is "<<GetSubject()<<endl;

    }

};

class Student
{
    private:
    string StudentName,StudentRollNo;
    string StudentPassword;
    float Science,Maths,English,Total,Percentage;

    Address ad;

    public:
    //Default Constructor
    Student()
    {
     StudentName="UNKNOWN";
     StudentRollNo="UNKNOWN";
     StudentPassword="UNKNOWN";
     Science=0;
     Maths=0;
     English=0;
     Percentage=0;
    }

    void SetStudentRollNo(string RollNo)
    {
        StudentRollNo=RollNo;
    }

    string GetStudentRollNo()
    {
        return StudentRollNo;
    }

    void SetStudentPassword()
    {
        cin>>StudentPassword;
    }

    string GetStudentPassword()
    {
        return StudentPassword;
    }

    void SetStudentName()
    {
        cin>>StudentName;
    }

    string GetStudentName()
    {
        return StudentName;
    }

    void SetStudentInfo()
    {
        sleep(1);

        cout<<"\n  *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;
        cout<<"                 PLEASE FILL YOUR DETAILS              "<<endl;
        cout<<"  *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;

        sleep(1);

        cout<<"\n  Enter your Name: ";
        SetStudentName();
        ad.SetAddressInfo();
    }

    void SetScience()
    {
        cin>>Science;
    }

    float GetScience()
    {
        return Science;
    }

    void SetMaths()
    {
        cin>>Maths;
    }

    float GetMaths()
    {
        return Maths;
    }

    void SetEnglish()
    {
        cin>>English;
    }

    float GetEnglish()
    {
        return English;
    }

    void StudentResult()
    {
        Total = GetMaths() + GetScience() + GetEnglish();
        Percentage=(Total/300)*100;
        cout<<"\n  --------------------------"<<endl;
        cout<<"  ----------RESULT----------"<<endl;
        cout<<"  --------------------------"<<endl;
        cout<<"       MATHEMATICS : "<<GetMaths()<<endl;
        cout<<"       SCIENCE     : "<<GetScience()<<endl;
        cout<<"       ENGLISH     : "<<GetEnglish()<<endl;
        cout<<"  --------------------------"<<endl;
        cout<<"       TOTAL       : "<<Percentage<<endl;
        cout<<"  --------------------------"<<endl;
    }

    void ShowStudentData()
    {
        cout<<endl;
        cout<<"\n  --------------------------------"<<endl;
        cout<<"  "<<GetStudentName()<<"'s Login Credentials"<<endl;
        cout<<"  --------------------------------"<<endl;
        cout<<"  ROLL NUMBER : "<<GetStudentRollNo()<<endl;
        cout<<"  PASSWORD    : "<<GetStudentPassword()<<endl;
        cout<<"  --------------------------------"<<endl;
        cout<<"  "<<GetStudentName()<<"'s Details"<<endl;
        cout<<"  ::::::::::::::::::::::::::::::::"<<endl<<endl;
        ad.ShowAddress();
        StudentResult();
        cout<<"\n  ::::::::::::::::::::::::::::::::"<<endl;
    }

    void UpdateStudentName()
    {
        cout<<"  Current Name: "<<GetStudentName()<<endl;
        cout<<"  Enter Updated Name: ";
        SetStudentName();

        cout<<"\n  Updated Name of Roll Number "<<GetStudentRollNo()<<" is "<<GetStudentName()<<endl;
    }

    void UpdateStudentAddress()
    {
        cout<<"  Current Address: "<<ad.GetAddress()<<endl;
        cout<<"  Enter Updated Address: ";
        ad.SetAddress();

        cout<<"\n  Updated Address of Roll Number "<<GetStudentRollNo()<<" is "<<ad.GetAddress()<<endl;
    }

    void UpdateStudentCity()
    {
        cout<<"  Current City: "<<ad.GetCity()<<endl;
        cout<<"  Enter Updated City: ";
        ad.SetCity();

        cout<<"\n  Updated City of Roll Number "<<GetStudentRollNo()<<" is "<<ad.GetCity()<<endl;
    }

    void UpdateStudentPinCode()
    {
        cout<<"  Current Pin Code: "<<ad.GetPincode()<<endl;
        cout<<"  Enter Updated PinCode: ";
        ad.SetPincode();

        cout<<"\n  Updated City of Roll Number "<<GetStudentRollNo()<<" is "<<ad.GetPincode()<<endl;
    }

};

//Global Variables
Teacher t[50];
Student s[50];

int totalTeachers = 0;//It will store total number of teachers in an array.
int totalStudents = 0;//It will store total n umber of students in an array.
int num,i;


void SetStudentLoginCredit()
{

    sleep(1);
    string RollNumber,RepeatPassword;

    cout<<"\n  :::: NOW, SET YOUR LOG-IN CREDENTIALS ::::"<<endl;

    RollNumber = to_string(i+1);

    s[i].SetStudentRollNo(RollNumber);

    cout<<"\n  Your Roll Number is : "<<s[i].GetStudentRollNo();

    a:cout<<"\n  Set your Password: ";
    s[i].SetStudentPassword();

    cout<<"  Re-Enter Password: ";
    cin>>RepeatPassword;

    sleep(1);

    if(RepeatPassword != s[i].GetStudentPassword())
    {
        cout<<"\n  !! Passwords did not match !! "<<endl<<endl;
        goto a;
    }
    else
    {
    cout<<"\n  !! Your Password has been set successfully !! "<<endl;
    }
}

void RegisterStudent()
{
    string checkRollno;
    cout<<"\n   -*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*- "<<endl;
    cout<<"  |       Sign-in as a Student      |"<<endl;
    cout<<"   -*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*- "<<endl;

    sleep(1);

    cout<<"\n  How many accounts you want to create ? : ";
    cin>>num;

    for(i=totalStudents;i<totalStudents+num;i++)
    {
        sleep(1);
        cout<<"\n   ---------------------------- "<<endl;
        cout<<"  [   Creating Account no: "<<i+1<<"   ]"<<endl;
        cout<<"   ---------------------------- "<<endl;
        s[i].SetStudentInfo();
        SetStudentLoginCredit();
    }

    totalStudents=totalStudents+num;
}

void SearchStudent()
{

    string SearchRollNumber;
    int flag = 1;
    Ssearch:
    cout<<"\n  Enter Roll Number : ";
    cin>>SearchRollNumber;

    cout<<"\n  Searching Student  ";

    for(i=0;i<3;i++)
    {
        cout<<".";
        sleep(1);
    }

    for(i=0;i<totalStudents;i++)
    {
        if(SearchRollNumber == s[i].GetStudentRollNo())
        {
            s[i].ShowStudentData();
            flag=0;
            break;
        }
    }

    if(flag==1)
    {
        cout<<"\n  ROLL NUMBER NOT FOUND!"<<endl;
        goto Ssearch;
    }
}

void RepeatStudentDataUpdate()
{
    cout<<"\n  ~~~~~~~~ UPDATE STUDENTS DATA ~~~~~~~~"<<endl;
    cout<<"  --------------------------------------"<<endl;
    cout<<"  |*|*|*|*|*|*|* ASTERISC *|*|*|*|*|*|*|"<<endl;
    cout<<"  ||                                  ||"<<endl;
    cout<<"  ||     PRESS (a). UPDATE NAME       ||"<<endl;
    cout<<"  ||     PRESS (b). UPDATE ADDRESS    ||"<<endl;
    cout<<"  ||     PRESS (c). UPDATE CITY       ||"<<endl;
    cout<<"  ||     PRESS (d). UPDATE PINCODE    ||"<<endl;
    cout<<"  ||                                  ||"<<endl;
    cout<<"   ------------------------------------ "<<endl;
    cout<<"  ||         PRESS (x). EXIT          ||"<<endl;
    cout<<"   ------------------------------------ "<<endl;
    cout<<"  |*|*|*|*|*|*|*|ASTERISC|*|*|*|*|*|*|*|"<<endl;
    cout<<"  --------------------------------------"<<endl;
}

void StudentDataUpdate()
{
    cout<<"\n  ~~~~~~~~ UPDATE STUDENTS DATA ~~~~~~~~"<<endl;
    cout<<"  --------------------------------------"<<endl;
    cout<<"  |*|*|*|*|*|*|* ASTERISC *|*|*|*|*|*|*|"<<endl;
    cout<<"  ||                                  ||"<<endl;
    cout<<"  ||     PRESS (a). UPDATE NAME       ||"<<endl;
    cout<<"  ||     PRESS (b). UPDATE ADDRESS    ||"<<endl;
    cout<<"  ||     PRESS (c). UPDATE CITY       ||"<<endl;
    cout<<"  ||     PRESS (d). UPDATE PINCODE    ||"<<endl;
    cout<<"  ||                                  ||"<<endl;
    cout<<"   ------------------------------------ "<<endl;
    cout<<"  ||         PRESS (x). EXIT          ||"<<endl;
    cout<<"   ------------------------------------ "<<endl;
    cout<<"  |*|*|*|*|*|*|*|ASTERISC|*|*|*|*|*|*|*|"<<endl;
    cout<<"  --------------------------------------"<<endl;

    int b=1,num,flag = 1,yesno,i;
    char choice;
    string SearchRollNumber;
    while(b)
    {

        cout<<"  What do you want to update? : ";
        cin>>choice;

        switch(choice)
        {
        case'a':
        case'A':

        //UpdateName

        system("CLS");
        Sname:cout<<"\n  Enter Roll Number to update name : ";
        cin>>SearchRollNumber;

        for(i=0;i<totalStudents;i++)
        {

            if(SearchRollNumber==s[i].GetStudentRollNo())
            {
                cout<<"  Do you really want to update ? "<<endl;
                cout<<"  PRESS (1). YES"<<endl;
                cout<<"  PRESS (0). NO"<<endl;
                cout<<"  Enter Here : ";
                cin>>yesno;

                if(yesno==1)
                {
                    s[i].UpdateStudentName();
                    flag=0;
                    break;
                }

                else if(yesno==0)
                {
                    cout<<"\n  !!OK!!"<<endl;
                    break;
                }

            }

            if(flag==1)
            {
                cout<<"\n  ROLL NUMBER NOT FOUND!"<<endl;
                goto Sname;
            }

        }
        RepeatStudentDataUpdate();
        break;

        case'b':
        case'B':

        //UpdateAddress

        system("CLS");
        SAddress:cout<<"\n  Enter Roll Number to update Address : ";
        cin>>SearchRollNumber;

        for(i=0;i<totalStudents;i++)
        {

            if(SearchRollNumber==s[i].GetStudentRollNo())
            {
                cout<<"  Do you really want to update an Address ? "<<endl;
                cout<<"  PRESS (1). YES"<<endl;
                cout<<"  PRESS (0). NO"<<endl;
                cout<<"  Enter Here : ";
                cin>>yesno;

                if(yesno==1)
                {
                    s[i].UpdateStudentAddress();
                    flag=0;
                    break;
                }

                else if(yesno==0)
                {
                    cout<<"\n  !!OK!!"<<endl;
                    break;
                }

            }

            if(flag==1)
            {
                cout<<"\n  ROLL NUMBER NOT FOUND!"<<endl;
                goto SAddress;
            }

        }
        RepeatStudentDataUpdate();
        break;

        case 'c':
        case 'C':

        //UpdateCity

        system("CLS");
        SCity:cout<<"\n  Enter Roll Number to update City : ";
        cin>>SearchRollNumber;

        for(i=0;i<totalStudents;i++)
        {

            if(SearchRollNumber==s[i].GetStudentRollNo())
            {
                cout<<"  Do you really want to update City ? "<<endl;
                cout<<"  PRESS (1). YES"<<endl;
                cout<<"  PRESS (0). NO"<<endl;
                cout<<"  Enter Here : ";
                cin>>yesno;

                if(yesno==1)
                {
                    s[i].UpdateStudentCity();
                    flag=0;
                    break;
                }

                else if(yesno==0)
                {
                    cout<<"\n  !!OK!!"<<endl;
                    break;
                }

            }

            if(flag==1)
            {
                cout<<"\n  ROLL NUMBER NOT FOUND!"<<endl;
                goto SCity;
            }

        }
        RepeatStudentDataUpdate();
        break;

        case 'd':
        case 'D':

        //UpdatePincode

        system("CLS");
        SPincode:cout<<"\n  Enter Roll Number to update PinCode : ";
        cin>>SearchRollNumber;

        for(i=0;i<totalStudents;i++)
        {

            if(SearchRollNumber==s[i].GetStudentRollNo())
            {
                cout<<"  Do you really want to update Pincode ? "<<endl;
                cout<<"  PRESS (1). YES"<<endl;
                cout<<"  PRESS (0). NO"<<endl;
                cout<<"  Enter Here : ";
                cin>>yesno;

                if(yesno==1)
                {
                    s[i].UpdateStudentPinCode();
                    flag=0;
                    break;
                }

                else if(yesno==0)
                {
                    cout<<"\n  !!OK!!"<<endl;
                    break;
                }

            }

            if(flag==1)
            {
                cout<<"\n  ROLL NUMBER NOT FOUND!"<<endl;
                goto SPincode;
            }

        }
        RepeatStudentDataUpdate();
        break;

        case'x':
        case'X':
            int i;
            system("CLS");

            cout<<"  Taking you out in ";

            for(i=3;i>=1;i--)
            {
                cout<<i<<" ";
                sleep(1);
            }

            sleep(1);
            b=0;
        break;

        default:
            cout<<"  !! INVALID INPUT !!"<<endl;

        }

    }

}

void RepeatHomepageStudent()
{
    cout<<"\n  ~~~~~~~~~~ STUDENTS HOMEPAGE ~~~~~~~~~"<<endl;
    cout<<"  --------------------------------------"<<endl;
    cout<<"  |*|*|*|*|*|*|*|ASTERISC|*|*|*|*|*|*|*|"<<endl;
    cout<<"  ||                                  ||"<<endl;
    cout<<"  ||     (a). LIST OF ALL STUDENTS    ||"<<endl;
    cout<<"  ||     (b). SEARCH YOUR DATA        ||"<<endl;
    cout<<"  ||     (c). UPDATE YOUR DATA        ||"<<endl;
    cout<<"  ||                                  ||"<<endl;
    cout<<"   ------------------------------------ "<<endl;
    cout<<"  || (0).TAKE ME TO BACK TO HOMEPAGE  ||"<<endl;
    cout<<"   ------------------------------------ "<<endl;
    cout<<"  |*|*|*|*|*|*|*|ASTERISC|*|*|*|*|*|*|*|"<<endl;
    cout<<"  --------------------------------------"<<endl;
}

void HomepageStudent()
{
    system ("color 0B");//USED TO SET THE BACKGROUND AND FONT COLOR OF AN APPLICATION.

    cout<<"\n  ~~~~~~~~~~ STUDENTS HOMEPAGE ~~~~~~~~~"<<endl;
    cout<<"  --------------------------------------"<<endl;
    cout<<"  |*|*|*|*|*|*|*|ASTERISC|*|*|*|*|*|*|*|"<<endl;
    cout<<"  ||                                  ||"<<endl;
    cout<<"  ||     (a). LIST OF ALL STUDENTS    ||"<<endl;
    cout<<"  ||     (b). SEARCH YOUR DATA        ||"<<endl;
    cout<<"  ||     (c). UPDATE YOUR DATA        ||"<<endl;
    cout<<"  ||                                  ||"<<endl;
    cout<<"   ------------------------------------ "<<endl;
    cout<<"  || (0).TAKE ME TO BACK TO HOMEPAGE  ||"<<endl;
    cout<<"   ------------------------------------ "<<endl;
    cout<<"  |*|*|*|*|*|*|*|ASTERISC|*|*|*|*|*|*|*|"<<endl;
    cout<<"  --------------------------------------"<<endl;

    int a=1;
    char choice;
    while(a)
    {
        cout<<"  Enter Your Choice : ";
        cin>>choice;

        switch(choice)
        {
        case 'a':
        case 'A':
        //LIST OF ALL STUDENTS.
            system("CLS");
            if(totalStudents!=0)
            {
               for(i=0;i<totalStudents;i++)
                {
                    cout<<"\n"<<"  "<<i+1<<". "<<endl;
                    s[i].ShowStudentData();
                }
            }
            else if(totalStudents==0)
            {
                cout<<"\n  -------------------------------------------"<<endl;
                cout<<"   ALERT : List Is Empty. No Students Found. "<<endl;
                cout<<"  -------------------------------------------"<<endl;
            }


            RepeatHomepageStudent();

        break;


        case 'b':
        case 'B':
        //SEARCH SPECIFIC STUDENT.
            system("CLS");
            if(totalStudents!=0)
            {
               SearchStudent();
            }
            else if(totalStudents==0)
            {
                cout<<"\n  -------------------------------------------"<<endl;
                cout<<"   ALERT : List Is Empty. No Students Found. "<<endl;
                cout<<"  -------------------------------------------"<<endl;
            }
            RepeatHomepageStudent();

        break;

        case 'c':
        case 'C':
        //UPDATE STUDENT'S DATA.
            system("CLS");
            if(totalStudents!=0)
            {
               StudentDataUpdate();
            }
            else if(totalStudents==0)
            {
                cout<<"\n  -------------------------------------------"<<endl;
                cout<<"   ALERT : List Is Empty. No Students Found. "<<endl;
                cout<<"  -------------------------------------------"<<endl;
            }
            RepeatHomepageStudent();
        break;

        case '0':
            cout<<"\n  Signing Out ";
            for(i=0;i<3;i++)
            {
                cout<<". ";
                sleep(1);
            }
            system("CLS");
            a=0;
        break;

        default:
            cout<<"\n  !! INVALID INPUT !!"<<endl;

        }
    }

}

void StudentLogin()
{
    string CheckRollNo,CheckPassword;
    int flag=0;
    int i;

    cout<<"\n  :::: STUDENT LOGIN ::::"<<endl;

    Studentlogin:cout<<"  Enter Your Roll Number : ";
    cin>>CheckRollNo;
    cout<<"  Enter Your Password : ";
    cin>>CheckPassword;

    for(i=0;i<totalStudents;i++)
    {
        if(CheckRollNo == s[i].GetStudentRollNo() && CheckPassword == s[i].GetStudentPassword())
        {
            HomepageStudent();
            flag = 1;
            break;
        }
    }

    if(flag==0)
    {
        if(CheckRollNo!=s[i].GetStudentRollNo() && CheckPassword!=s[i].GetStudentPassword())
        {
            cout<<"\n  !! Incorrect Login Credentials !!"<<endl;
            goto Studentlogin;
        }
        else if(CheckRollNo!=s[i].GetStudentRollNo())
        {
            cout<<"\n  !! Incorrect Roll Number !!"<<endl;
            goto Studentlogin;
        }
    }

}

void SearchTeacher()
{

    string teacherSearch;
    int flag=1;

    tsearch:cout<<"\n  Enter Username : ";
    cin>>teacherSearch;

    cout<<"\n  Searching Teacher  ";

    for(i=0;i<3;i++)
    {
        cout<<".";
        sleep(1);
    }

    for(i=0;i<totalTeachers;i++)
    {
        if(teacherSearch==t[i].GetTeacherUsername())
        {
           t[i].ShowTeacherData();
           flag=0;
           break;
        }
    }
    if(flag==1)
    {
        cout<<"\n  !! USERNAME NOT FOUND !!"<<endl;
        goto tsearch;
    }

}

void EngMarks()
{
    eng:
    string studentSearch;
    cout<<"\n  Enter Roll Number of a Student : ";
    cin>>studentSearch;

    for(i=0;i<totalStudents;i++)
    {
        if(studentSearch==s[i].GetStudentRollNo())
        {
            s[i].ShowStudentData();
            cout<<"\n  Enter "<<s[i].GetStudentName()<<"'s marks in ENGLISH : ";
            s[i].SetEnglish();
            cout<<"\n  "<<s[i].GetStudentName()<<"'s marks in ENGLISH are : "<<s[i].GetEnglish()<<endl;

            s[i].StudentResult();
            break;
        }
    }
    if(studentSearch!=s[i].GetStudentRollNo())
    {
        cout<<"\n  ROLL NUMBER NOT FOUND!"<<endl;
        goto eng;
    }
}

void SciMarks()
{
    sci:
    string studentSearch;
    cout<<"\n  Enter Roll Number of a Student : ";
    cin>>studentSearch;

    for(i=0;i<totalStudents;i++)
    {
        if(studentSearch==s[i].GetStudentRollNo())
        {
            s[i].ShowStudentData();
            cout<<"\n  Enter "<<s[i].GetStudentName()<<"'s marks in SCIENCE : ";
            s[i].SetScience();
            cout<<"\n  "<<s[i].GetStudentName()<<"'s marks in SCIENCE are : "<<s[i].GetScience()<<endl;

            s[i].StudentResult();
            break;
        }
    }
    if(studentSearch!=s[i].GetStudentRollNo())
    {
        cout<<"\n  ROLL NUMBER NOT FOUND!"<<endl;
        goto sci;
    }
}

void MathMarks()
{
    maths:
    string studentSearch;
    cout<<"\n  Enter Roll Number of a Student : ";
    cin>>studentSearch;

    for(i=0;i<totalStudents;i++)
    {
        if(studentSearch==s[i].GetStudentRollNo())
        {
            s[i].ShowStudentData();
            cout<<"\n  Enter "<<s[i].GetStudentName()<<"'s marks in MATHS : ";
            s[i].SetMaths();
            cout<<"\n  "<<s[i].GetStudentName()<<"'s marks in MATHS are : "<<s[i].GetMaths()<<endl;

            s[i].StudentResult();
            break;
        }
    }
    if(studentSearch!=s[i].GetStudentRollNo())
    {
        cout<<"\n  ROLL NUMBER NOT FOUND!"<<endl;
        goto maths;
    }
}

void Marks()
{
    if(t[i].GetSubjectCode()=="ENG")
    {
        EngMarks();
    }
    else if(t[i].GetSubjectCode()=="SCI")
    {
        SciMarks();
    }
    else if(t[i].GetSubjectCode()=="MAT")
    {
        MathMarks();
    }
}

void EnterMarks()
{
    string checkUsername,checkPassword;
    int Flag=0;

    cout<<"\n  ::::< TEACHER LOG-IN >::::"<<endl;
    Tlogin:

    if(totalStudents!=0)
    {
        cout<<"\n  Enter your Username: ";
        cin>>checkUsername;
        cout<<"  Enter your Password: ";
        cin>>checkPassword;

        for(i=0;i<totalTeachers;i++)
        {
            if(checkUsername==t[i].GetTeacherUsername()   &&   checkPassword==t[i].GetPassword())
            {
                t[i].ShowTeacherData();
                Marks();
                cout<<"\n  MARKS ENTERED SUCCESSFULLY."<<endl;
                Flag = 1;
                break;
            }
        }

        if(Flag==0)
        {
            cout<<"  !! UserName Not Found !!"<<endl;
            goto Tlogin;
        }
    }
    else
    {

        cout<<"\n  ---------------------------------------"<<endl;
        cout<<"  ALERT: NO STUDENTS ARE REGISTERED YET. "<<endl;
        cout<<"  ---------------------------------------"<<endl;
    }
}

void RepeatTeacherDataUpdate()
{
    cout<<"\n  ~~~~~~~~ UPDATE TEACHERS DATA ~~~~~~~~"<<endl;
    cout<<"  --------------------------------------"<<endl;
    cout<<"  |*|*|*|*|*|*|* ASTERISC *|*|*|*|*|*|*|"<<endl;
    cout<<"  ||                                  ||"<<endl;
    cout<<"  ||   PRESS (a). UPDATE NAME         ||"<<endl;
    cout<<"  ||   PRESS (b). UPDATE ADDRESS      ||"<<endl;
    cout<<"  ||   PRESS (c). UPDATE SUBJECT      ||"<<endl;
    cout<<"  ||   PRESS (d). UPDATE PINCODE      ||"<<endl;
    cout<<"  ||   PRESS (e). UPDATE CITY         ||"<<endl;
    cout<<"  ||                                  ||"<<endl;
    cout<<"   ------------------------------------ "<<endl;
    cout<<"  ||         PRESS (x). EXIT          ||"<<endl;
    cout<<"   ------------------------------------ "<<endl;
    cout<<"  |*|*|*|*|*|*|*|ASTERISC|*|*|*|*|*|*|*|"<<endl;
    cout<<"  --------------------------------------"<<endl;
}

void TeacherDataUpdate()
{
    cout<<"\n  ~~~~~~~~ UPDATE TEACHERS DATA ~~~~~~~~"<<endl;
    cout<<"  --------------------------------------"<<endl;
    cout<<"  |*|*|*|*|*|*|* ASTERISC *|*|*|*|*|*|*|"<<endl;
    cout<<"  ||                                  ||"<<endl;
    cout<<"  ||   PRESS (a). UPDATE NAME         ||"<<endl;
    cout<<"  ||   PRESS (b). UPDATE ADDRESS      ||"<<endl;
    cout<<"  ||   PRESS (c). UPDATE SUBJECT      ||"<<endl;
    cout<<"  ||   PRESS (d). UPDATE PINCODE      ||"<<endl;
    cout<<"  ||   PRESS (e). UPDATE CITY         ||"<<endl;
    cout<<"  ||                                   ||"<<endl;
    cout<<"   ------------------------------------ "<<endl;
    cout<<"  ||         PRESS (x). EXIT          ||"<<endl;
    cout<<"   ------------------------------------ "<<endl;
    cout<<"  |*|*|*|*|*|*|*|ASTERISC|*|*|*|*|*|*|*|"<<endl;
    cout<<"  --------------------------------------"<<endl;

    int a=1,yesno,flag=1;
    string SearchUserName;
    char choice;

    while(a)
    {
        cout<<"  Enter Your Choice : ";
        cin>>choice;
        switch(choice)
        {
        case 'a':
        case 'A':
        //UPDATE NAME

        system("CLS");
        Tname:cout<<"\n  Enter UserName to Update Name : ";
        cin>>SearchUserName;

        for(i=0;i<totalTeachers;i++)
        {

            if(SearchUserName==t[i].GetTeacherUsername())
            {
                cout<<"  Do you really want to update NAME? "<<endl;
                cout<<"  PRESS (1). YES"<<endl;
                cout<<"  PRESS (0). NO"<<endl;
                cout<<"  Enter Here : ";
                cin>>yesno;

                if(yesno==1)
                {
                    t[i].UpdateTeacherName();
                    flag=0;
                    break;
                }

                else if(yesno==0)
                {
                    cout<<"\n  !!OK!!"<<endl;
                    break;
                }

            }

            if(flag==1)
            {
                cout<<"\n  ROLL NUMBER NOT FOUND!"<<endl;
                goto Tname;
            }

        }
        RepeatTeacherDataUpdate();
        break;

        case 'B':
        case 'b':
        //UPDATE ADDRESS
        system("CLS");
        TAddress:cout<<"\n  Enter UserName to update Address : ";
        cin>>SearchUserName;

        for(i=0;i<totalTeachers;i++)
        {

            if(SearchUserName==t[i].GetTeacherUsername())
            {
                cout<<"  Do you really want to update ADDRESS? "<<endl;
                cout<<"  PRESS (1). YES"<<endl;
                cout<<"  PRESS (0). NO"<<endl;
                cout<<"  Enter Here : ";
                cin>>yesno;

                if(yesno==1)
                {
                    t[i].UpdateTeacherAddress();
                    flag=0;
                    break;
                }

                else if(yesno==0)
                {
                    cout<<"\n  !!OK!!"<<endl;
                    break;
                }

            }

            if(flag==1)
            {
                cout<<"\n  !! ROLL NUMBER NOT FOUND !!"<<endl;
                goto TAddress;
            }

        }
        RepeatTeacherDataUpdate();
        break;

        case 'c':
        case 'C':
        //UPDATE SUBJECT

        system("CLS");
        Tsubject:cout<<"\n  Enter UserName to update Subject : ";
        cin>>SearchUserName;

        for(i=0;i<totalTeachers;i++)
        {

            if(SearchUserName==t[i].GetTeacherUsername())
            {
                cout<<"  Do you really want to update SUBJECT ? "<<endl;
                cout<<"  PRESS (1). YES"<<endl;
                cout<<"  PRESS (0). NO"<<endl;
                cout<<"  Enter Here : ";
                cin>>yesno;

                if(yesno==1)
                {
                    t[i].UpdateTeacherSubject();
                    flag=0;
                    break;
                }

                else if(yesno==0)
                {
                    cout<<"\n  !!OK!!"<<endl;
                    break;
                }

            }

            if(flag==1)
            {
                cout<<"\n  ROLL NUMBER NOT FOUND!"<<endl;
                goto Tsubject;
            }

        }
        RepeatTeacherDataUpdate();
        break;

        case 'd':
        case 'D':
        //UPDATE PINCODE
        system("CLS");
        TPin:cout<<"\n  Enter UserName to update Pin Code : ";
        cin>>SearchUserName;

        for(i=0;i<totalTeachers;i++)
        {

            if(SearchUserName==t[i].GetTeacherUsername())
            {
                cout<<"  Do you really want to update Pin Code? "<<endl;
                cout<<"  PRESS (1). YES"<<endl;
                cout<<"  PRESS (0). NO"<<endl;
                cout<<"  Enter Here : ";
                cin>>yesno;

                if(yesno==1)
                {
                    t[i].UpdateTeacherPincode();
                    flag=0;
                    break;
                }

                else if(yesno==0)
                {
                    cout<<"\n  !!OK!!"<<endl;
                    break;
                }

            }

            if(flag==1)
            {
                cout<<"\n  ROLL NUMBER NOT FOUND!"<<endl;
                goto TPin;
            }

        }
        RepeatTeacherDataUpdate();

        break;
        case'E':
        case'e':
        //UPDATE CITY
        system("CLS");
        TCity:cout<<"\n  Enter UserName to update City : ";
        cin>>SearchUserName;

        for(i=0;i<totalTeachers;i++)
        {

            if(SearchUserName==t[i].GetTeacherUsername())
            {
                cout<<"  Do you really want to update CITY ? "<<endl;
                cout<<"  PRESS (1). YES"<<endl;
                cout<<"  PRESS (0). NO"<<endl;
                cout<<"  Enter Here : ";
                cin>>yesno;

                if(yesno==1)
                {
                    t[i].UpdateTeacherCity();
                    flag=0;
                    break;
                }

                else if(yesno==0)
                {
                    cout<<"\n  !!OK!!"<<endl;
                    break;
                }

            }

            if(flag==1)
            {
                cout<<"\n  ROLL NUMBER NOT FOUND!"<<endl;
                goto TCity;
            }

        }
        RepeatTeacherDataUpdate();
        break;


        case'x':
        case'X':
            int i;
            system("CLS");

            cout<<"  Taking you out in ";

            for(i=3;i>=1;i--)
            {
                cout<<i<<" ";
                sleep(1);
            }

            sleep(1);
            a=0;
        break;

        default:
            cout<<"\n  !! INVALID CHOICE !!"<<endl;

        }
    }

}

void RepeatHomepageTeacher()
{
    cout<<"\n  ----------------------------------  "<<endl;
    cout<<"  ~~~~~~~~ TEACHERS HOMEPAGE ~~~~~~~  "<<endl;
    cout<<"  ----------------------------------  "<<endl;
    cout<<"                                      "<<endl;
    cout<<"  |*|*|*|*| A S T E R I S C |*|*|*|*| "<<endl;
    cout<<"                                      "<<endl;
    cout<<"  ----------------------------------  "<<endl;
    cout<<" |     (a). LIST OF ALL TEACHERS    | "<<endl;
    cout<<"  ----------------------------------  "<<endl;
    cout<<"                                      "<<endl;
    cout<<"  ----------------------------------  "<<endl;
    cout<<" |     (b). SEARCH YOUR PROFILE     | "<<endl;
    cout<<"  ----------------------------------  "<<endl;
    cout<<"                                      "<<endl;
    cout<<"  ----------------------------------  "<<endl;
    cout<<" |     (c). ENTER MARKS             | "<<endl;
    cout<<"  ----------------------------------  "<<endl;
    cout<<"                                      "<<endl;
    cout<<"  ----------------------------------  "<<endl;
    cout<<" |     (d). UPDATE DATA             | "<<endl;
    cout<<"  ----------------------------------  "<<endl;
    cout<<"                                      "<<endl;
    cout<<"  ----------------------------------  "<<endl;
    cout<<" |     (e). STUDENTS HOMEPAGE       | "<<endl;
    cout<<"  ----------------------------------  "<<endl;
    cout<<"                                      "<<endl;
    cout<<"  ----------------------------------  "<<endl;
    cout<<" |     (0). LOG-OUT                 | "<<endl;
    cout<<"  ----------------------------------  "<<endl;
}

void HomepageTeacher()
{
    cout<<"\n  ----------------------------------  "<<endl;
    cout<<"  ~~~~~~~~ TEACHERS HOMEPAGE ~~~~~~~  "<<endl;
    cout<<"  ----------------------------------  "<<endl;
    cout<<"                                      "<<endl;
    cout<<"  |*|*|*|*| A S T E R I S C |*|*|*|*| "<<endl;
    cout<<"                                      "<<endl;
    cout<<"  ----------------------------------  "<<endl;
    cout<<" |     (a). LIST OF ALL TEACHERS    | "<<endl;
    cout<<"  ----------------------------------  "<<endl;
    cout<<"                                      "<<endl;
    cout<<"  ----------------------------------  "<<endl;
    cout<<" |     (b). SEARCH YOUR PROFILE     | "<<endl;
    cout<<"  ----------------------------------  "<<endl;
    cout<<"                                      "<<endl;
    cout<<"  ----------------------------------  "<<endl;
    cout<<" |     (c). ENTER MARKS             | "<<endl;
    cout<<"  ----------------------------------  "<<endl;
    cout<<"                                      "<<endl;
    cout<<"  ----------------------------------  "<<endl;
    cout<<" |     (d). UPDATE DATA             | "<<endl;
    cout<<"  ----------------------------------  "<<endl;
    cout<<"                                      "<<endl;
    cout<<"  ----------------------------------  "<<endl;
    cout<<" |     (e). STUDENTS HOMEPAGE       | "<<endl;
    cout<<"  ----------------------------------  "<<endl;
    cout<<"                                      "<<endl;
    cout<<"  ----------------------------------  "<<endl;
    cout<<" |     (0). LOG-OUT                 | "<<endl;
    cout<<"  ----------------------------------  "<<endl;

    int a=1;
    char choice;

    while(a)
    {
        cout<<"\n  Enter Your Choice : ";
        cin>>choice;

        switch(choice)
        {
        case 'a':
        case 'A':
        //ALL TEACHERS
            system("CLS");

            cout<<"\n  Generating List ";

            for(i=0;i<3;i++)
            {
                cout<<".";
                sleep(1);
            }
            cout<<endl;
            if(totalTeachers!=0)
            {
                for(i=0;i<totalTeachers;i++)
                {
                    cout<<"\n"<<"  "<<i+1<<". "<<endl;
                    t[i].ShowTeacherData();
                }
            }
            else if(totalTeachers==0)
            {
                cout<<"\n  --------------------------"<<endl;
                cout<<"   ALERT: NO TEACHERS FOUND."<<endl;
                cout<<"  --------------------------"<<endl;
            }

            RepeatHomepageTeacher();

        break;

        case 'b':
        case 'B':
        //SEARCH TEACHER
            system("CLS");

            if(totalTeachers!=0)
            {
              SearchTeacher();
            }
            else if(totalTeachers==0)
            {
                cout<<"\n  --------------------------"<<endl;
                cout<<"   ALERT: NO TEACHERS FOUND."<<endl;
                cout<<"  --------------------------"<<endl;
            }
            sleep(1);
            RepeatHomepageTeacher();

        break;

        case 'c':
        case 'C':
        //ENTER MARKS
            system("CLS");
            if(totalTeachers!=0)
            {
              EnterMarks();
              sleep(1);
            }
            else if(totalTeachers==0)
            {
                cout<<"\n  --------------------------"<<endl;
                cout<<"   ALERT: NO TEACHERS FOUND."<<endl;
                cout<<"  --------------------------"<<endl;
            }

            sleep(1);
            RepeatHomepageTeacher();

        break;

        case 'd':
        case 'D':
        //UPDATE DATA
            system("CLS");
            if(totalTeachers!=0)
            {
               TeacherDataUpdate();
            }
            else if(totalTeachers==0)
            {
                cout<<"\n  --------------------------"<<endl;
                cout<<"   ALERT: NO TEACHERS FOUND."<<endl;
                cout<<"  --------------------------"<<endl;
            }
            RepeatHomepageTeacher();

        break;

        case 'e':
        case 'E':
        //JUMP TO STUDENT PAGE
            system("CLS");
            HomepageStudent();
            RepeatHomepageTeacher();
        break;

        case '0':
        //SIGNING OUT
            cout<<"  Signing Out ";
            for(i=0;i<3;i++)
            {
                cout<<". ";
                sleep(1);
            }
            system("CLS");
            a=0;
        break;

        default:
            cout<<"\n  !! INVALID INPUT !!"<<endl;

        }
    }

}

void TeacherLogin()
{
    string CheckUsername,CheckPassword;
    int flag=0;
    int i;

    cout<<"\n  :::: TEACHER LOGIN ::::"<<endl;

    Teacherlogin:cout<<"  Enter Your Username : ";
    cin>>CheckUsername;
    cout<<"  Enter Your Password : ";
    cin>>CheckPassword;

    for(i=0;i<totalTeachers;i++)
    {
        if(CheckUsername == t[i].GetTeacherUsername() && CheckPassword == t[i].GetPassword())
        {
            HomepageTeacher();
            flag = 1;
            break;
        }
    }

    if(flag==0)
    {
        if(CheckUsername != t[i].GetTeacherUsername() && CheckPassword != t[i].GetPassword())
        {
            cout<<"\n  !! Incorrect Login Credentials !!"<<endl;
            goto Teacherlogin;
        }
        else if(CheckUsername != t[i].GetTeacherUsername())
        {
            cout<<"\n  !! Incorrect Username !!"<<endl;
            goto Teacherlogin;
        }
    }
}

void CheckSimilarTeachers()
{
    int i,j,flag=0;

    cout<<"\n  CHECKING SIMILAR USERNAMES ";
    for(i=0;i<3;i++)
    {
        cout<<".";
        sleep(1);
    }

    for(i=0;i<totalTeachers;i++)
    {
        for (j=i+1;j<totalTeachers;j++)
        {
            if(t[i].GetTeacherUsername()==t[j].GetTeacherUsername())
            {
                system("CLS");
                cout<<"\n  --------------------------------"<<endl;
                cout<<"   ALERT: SIMILAR USERNAMES FOUND."<<endl;
                cout<<"  --------------------------------"<<endl;
                cout<<"\n\n  --------------------------------------------------------------------------------------------"<<endl;
                cout<<"   NOTE: "<<t[i].GetTeacherName()<<" AND "<<t[j].GetTeacherName()<< " GOT SIMILAR USERNAMES, PLEASE SET AN UNIQUE USERNAME FOR "<<t[j].GetTeacherName()<<" . "<<endl;
                cout<<"  --------------------------------------------------------------------------------------------"<<endl;
                //t[j].UpdateTeacherUsername();
                flag=1;
            }
        }
    }
    if (flag==0)
    {
        cout<<"\n\n  --------------------------------"<<endl;
        cout<<"   NO SIMILAR USERNAMES DETECTED  "<<endl;
        cout<<"  --------------------------------"<<endl;
    }
}

void SetTeacherLoginCredit()
{
    string Username;
    string RepeatPassword;//Used for re-verification of password.
    //to_string() method is used to concatenate integer and string.

    cout<<"\n  :::: NOW, SET YOUR LOG-IN CREDENTIALS ::::"<<endl;

    Username =  t[i].GetTeacherName() + to_string(i) + to_string(i+1) ;

    t[i].SetTeacherUsername(Username);

    cout<<"\n  Your Username is : " <<t[i].GetTeacherUsername();

    a:cout<<"\n  Set your Password: ";
    t[i].SetPassword();

    cout<<"  Re-Enter Password: ";
    cin>>RepeatPassword;

    sleep(1);

    if(RepeatPassword != t[i].GetPassword())
    {
        cout<<"\n  !! Passwords did not match !! "<<endl<<endl;
        goto a;
    }
    else
    {
        cout<<"\n  !! Your Password has been set successfully !!  "<<endl;
    }

    cout<<"\n  Your account is being created ";

    for(int i=0;i<3;i++)
    {
        cout<<".";
        sleep(1);
    }

    cout<<"\n\n  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
    cout<<"   CONGRATULATIONS !! YOUR ACCOUNT IS CREATED. "<<endl;
    cout<<"  ---------------------------------------------"<<endl;
    sleep(1);
}

void RegisterTeacher()
{
    cout<<"\n   -*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*- "<<endl;
    cout<<"  |       Sign-in as a Teacher      |"<<endl;
    cout<<"   -*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*- "<<endl;

    sleep(1);

    cout<<"\n  How many accounts you want to create ? : ";
    cin>>num;

    for(i=totalTeachers;i<totalTeachers+num;i++)
    {
        sleep(1);
        cout<<"\n   ---------------------------- "<<endl;
        cout<<"  [   Creating Account no: "<<i+1<<"   ]"<<endl;
        cout<<"   ---------------------------- "<<endl;

        t[i].SetTeacherInfo();
        SetTeacherLoginCredit();
    }

    totalTeachers=totalTeachers+num;
}

void RepeatChoice()
{
    cout<<"\n  *************************************"<<endl;
    cout<<"                                       "<<endl;
    cout<<"      A   S   T   E   R   I   S   C    "<<endl;
    cout<<"                                       "<<endl;
    cout<<"  *************************************"<<endl;
    sleep(1);
    cout<<"  -------------------------------------"<<endl;
    cout<<"  ||    ??  CREATE NEW ACCOUNT  ??   ||"<<endl;
    cout<<"  -------------------------------------"<<endl;
    cout<<"  ||                                 ||"<<endl;
    cout<<"  ||   (1). REGISTER AS A TEACHER    ||"<<endl;
    cout<<"  ||   (2). REGISTER AS A STUDENT    ||"<<endl;
    cout<<"  ||                                 ||"<<endl;
    cout<<"  |*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|"<<endl;
    cout<<"  -------------------------------------"<<endl;
    sleep(1);
    cout<<"  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    sleep(1);
    cout<<"  -------------------------------------"<<endl;
    cout<<"  ||  ?? ALREADY HAVE AN ACCOUNT ??  ||"<<endl;
    cout<<"  -------------------------------------"<<endl;
    cout<<"  ||                                 ||"<<endl;
    cout<<"  ||   (3). LOG-IN AS A TEACHER      ||"<<endl;
    cout<<"  ||   (4). LOG-IN AS A STUDENT      ||"<<endl;
    cout<<"  ||   (0). EXIT                     ||"<<endl;
    cout<<"  ||                                 ||"<<endl;
    cout<<"  |*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|"<<endl;
    cout<<"  -------------------------------------"<<endl;
}

int main()
{
    system ("color 0B");

    cout<<"\n  *************************************"<<endl;
    cout<<"                                       "<<endl;
    cout<<"      A   S   T   E   R   I   S   C    "<<endl;
    cout<<"                                       "<<endl;
    cout<<"  *************************************"<<endl;
    sleep(1);
    cout<<"  -------------------------------------"<<endl;
    cout<<"  ||    ??  CREATE NEW ACCOUNT  ??   ||"<<endl;
    cout<<"  -------------------------------------"<<endl;
    cout<<"  ||                                 ||"<<endl;
    cout<<"  ||   (1). REGISTER AS A TEACHER    ||"<<endl;
    cout<<"  ||   (2). REGISTER AS A STUDENT    ||"<<endl;
    cout<<"  ||                                 ||"<<endl;
    cout<<"  |*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|"<<endl;
    cout<<"  -------------------------------------"<<endl;
    sleep(1);
    cout<<"  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    sleep(1);
    cout<<"  -------------------------------------"<<endl;
    cout<<"  ||  ?? ALREADY HAVE AN ACCOUNT ??  ||"<<endl;
    cout<<"  -------------------------------------"<<endl;
    cout<<"  ||                                 ||"<<endl;
    cout<<"  ||   (3). LOG-IN AS A TEACHER      ||"<<endl;
    cout<<"  ||   (4). LOG-IN AS A STUDENT      ||"<<endl;
    cout<<"  ||   (0). EXIT                     ||"<<endl;
    cout<<"  ||                                 ||"<<endl;
    cout<<"  |*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|"<<endl;
    cout<<"  -------------------------------------"<<endl;

    int choice,a=1;

    while(a)
    {
        cout<<"\n  Enter your Choice : ";
        cin>>choice;

        system("CLS");

        switch(choice)
        {
        case 1:
            RegisterTeacher();

            //CheckSimilarTeachers();

            cout<<"\n\n"<<"  [ "<<totalTeachers<<" Teacher(s) account(s) has been created successfully. ]"<<endl;

            cout<<"\n   Taking you to the Teachers Homepage ";

            for(i=0;i<3;i++)
            {
                cout<<".";
                sleep(1);
            }

            system("CLS");


            HomepageTeacher();
            RepeatChoice();
        break;

        case 2:
            RegisterStudent();

            cout<<"\n\n"<<"  [ "<<totalStudents<<" Student(s) account(s) has been created successfully. ]"<<endl;

            cout<<"\n  Taking you to the Students Homepage ";

            for(i=0;i<3;i++)
            {
                cout<<".";
                sleep(1);
            }

            system("CLS");
            HomepageStudent();
            RepeatChoice();
        break;

        case 3:
            system("CLS");
            if(totalTeachers!=0)
            {
               TeacherLogin();
            }
            else if(totalTeachers==0)
            {
                cout<<"\n  ----------------------------------------------------"<<endl;
                cout<<"   ALERT: No Teachers Found. Kindly Register Yourself."<<endl;
                cout<<"  ----------------------------------------------------"<<endl;            }
            RepeatChoice();
        break;

        case 4:

            system("CLS");
            if(totalStudents!=0)
            {
               StudentLogin();
            }
            else
            {
                cout<<"\n  ----------------------------------------------------"<<endl;
                cout<<"   ALERT: No Students Found. Kindly Register Yourself."<<endl;
                cout<<"  ----------------------------------------------------"<<endl;
            }
            RepeatChoice();

        break;

        case 0:

            system("CLS");
            cout<<"  ----------------------------------------------------"<<endl;
            cout<<"          Project Created by : AMAN MOTGHARE          "<<endl;
            cout<<"  ----------------------------------------------------"<<endl;
            sleep(1);
            cout<<"\n  Shutting Down ";
            for(int i=1;i<=3;i++)
            {
                cout<<". ";
                sleep(1);
            }

            a=0;

        break;
        }


    }
    return 0;
}
