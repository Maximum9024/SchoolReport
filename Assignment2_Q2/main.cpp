#include <iostream>

using namespace std;

string name,surname,schoolName;
//variable for mark
int Englishmark,Mathmark,LifeOrientmark,Historymark, CompLitmark, Artmark;
//variable for code
   int englishCode, mathCode, historyCode, LifeOrientCode,artCode,compLitCode;
   //variable for symbols
  string englishSymbol, mathSymbol, historySymbol, LifeOrientSymbol,artSymbol,compLitSymbol;

 float  Average,averageCode,averageSymbol;

void studentName(){

cout<<"please key in  your \nname: ";
cin>>name>>surname;

cout<<"please key in  your \nschool: ";
cin>>schoolName;


}
void getMarks()
{

cout<<"Key in  your mark for English:\n";
cin>>Englishmark;

cout<<"Key in  your mark for Mathematics:\n";
cin>>Mathmark;

cout<<"Key in  your mark for Life Orientation:\n";
cin>>LifeOrientmark;

cout<<"Key in  your mark  History:\n";
cin>>Historymark;

cout<<"Key in  your mark  Computer literacy:\n";
cin>>CompLitmark;

cout<<"Key in  your mark  Art:\n";
cin>>Artmark;


}
 float calcAverageYearMark(int mark1,int mark2,int mark3,int mark4,int mark5,int mark6){


Average=(mark1+mark2+mark3+mark4+mark5+mark6)/600*100;

 return Average;
 }
 void minMax(){

// variable declarations
 float minMark=101;
 float maxMark=0;

 //finding the lowest mark
  if(Englishmark<minMark){
    minMark= Englishmark;
  }
  if(Mathmark<minMark)
  {
      minMark= Mathmark;
  }
  if(LifeOrientmark<minMark)
  {
      minMark=LifeOrientmark;
  }
  if(Historymark<minMark)
  {
      minMark=Historymark;
  }
  if(CompLitmark<minMark)
  {
      minMark=CompLitmark;
  }
  if(Artmark<minMark)
  {
      minMark= Artmark;
  }
  //finding  the highest mark
  if(Englishmark>maxMark){ maxMark= Englishmark;}
   if(Mathmark>maxMark){ maxMark= Mathmark; }
   if (LifeOrientmark>maxMark){ maxMark= LifeOrientmark; }
   if(Historymark>maxMark){ maxMark=Historymark;}
   if (CompLitmark>maxMark){ maxMark= CompLitmark; }
   if (Artmark>maxMark){ maxMark= Artmark; }


cout<<"  min marks is "<<minMark<<" max mark "<<maxMark;
}
 string passOrFail(){
 string outcome;
 if(Average<50.0)
    outcome="Failed";
 if (Average>=50.0)
    outcome="Passed";


 return  outcome;
 }
 void awardDisction(){
     string awaDistinction;
     if(Average>=75){
        awaDistinction="passed with Distinction"
     }
   if(Englishmark>=75){
      awaDistinction="\n English has received a distinction";
   }
    if(Mathmark>=75){
      awaDistinction=awardDisction+"\n Mathmathics  has received a distinction";
   }
   if(Historymark>=75){
      awaDistinction=awardDisction+"\n History  has received a distinction";
   }
     if(Artmark>=75){
      awaDistinction=awardDisction+"\n Arts  has received a distinction";
   }
     if(LifeOrientmark>=75){
      awaDistinction=awardDisction+"\n Life Orientation has received a distinction";
   }
     if(CompLitmark>=75){
      awaDistinction=awardDisction+"\n Computer literacy  has received a distinction";
   }








 }
void codeSymbol()
{
  //code for english
   //Symbol and code for English
   if(Englishmark>=0 &&Englishmark<30){
    englishCode= 1;
    englishSymbol="FF";
   }else if(Englishmark>30 &&Englishmark<=40){
      englishCode= 2;
    englishSymbol="F";
   }else if(Englishmark>39 &&Englishmark<50){
      englishCode= 3;
    englishSymbol="E";
   }
   else if(Englishmark>49 &&Englishmark<60){
      englishCode= 4;
    englishSymbol="D";
   }else if(Englishmark>60 &&Englishmark<70){
      englishCode= 5;
    englishSymbol="C";
   }else if(Englishmark>70 &&Englishmark<80){
      englishCode= 6;
    englishSymbol="B";
   }else{
      englishCode= 7;
    englishSymbol="A";
   }
   //code and symbol for mathematics
    if(Mathmark>=0 && Mathmark<30){
    mathCode= 1;
    mathSymbol="FF";
   }else if(Mathmark>30 &&Mathmark<=40){
      mathCode= 2;
    mathSymbol="F";
   }else if(Mathmark>39 &&Mathmark<50){
      mathCode= 3;
    mathSymbol="E";
   }
   else if(Mathmark>49 && Mathmark<60){
      mathCode= 4;
    mathSymbol="D";
   }else if(Mathmark>60 &&Mathmark<70){
      mathCode= 5;
    mathSymbol="C";
   }else if(Mathmark>70 &&Mathmark<80){
      mathCode= 6;
    mathSymbol="B";
   }else{
      mathCode= 7;
    mathSymbol="A";
   }

   // code and Symbol for History
      if(Historymark>=0 &&Historymark<30){
    historyCode= 1;
     historySymbol ="FF";
   }else if(Historymark>30 &&Historymark<=40){
     historyCode= 2;
    englishSymbol="F";
   }else if(Historymark>39 &&Historymark<50){
     historyCode= 3;
    englishSymbol="E";
   }
   else if(Historymark>49 &&Historymark<60){
       historyCode= 4;
    englishSymbol="D";
   }else if(Historymark>60 &&Historymark<70){
      historyCode= 5;
    englishSymbol="C";
   }else if(Historymark>70 &&Historymark<80){
       historyCode= 6;
    englishSymbol="B";
   }else{
       historyCode= 7;
    englishSymbol="A";
}

//code for Life orientation
 if(LifeOrientmark>=0 &&LifeOrientmark<30){
    englishCode= 1;
    LifeOrientSymbol="FF";
   }else if(LifeOrientmark>30 &&LifeOrientmark<40){
      englishCode= 2;
  LifeOrientSymbol="F";
   }else if(LifeOrientmark>39 &&LifeOrientmark<50){
      englishCode= 3;
   LifeOrientSymbol="E";
   }
   else if(LifeOrientmark>49 &&LifeOrientmark<60){
      LifeOrientCode= 4;
    LifeOrientSymbol="D";
   }else if(Englishmark>60 &&Englishmark<70){
      LifeOrientCode= 5;
   LifeOrientSymbol="C";
   }else if(Englishmark>70 &&Englishmark<80){
      LifeOrientCode= 6;
   LifeOrientSymbol="B";
   }else{
      LifeOrientCode= 7;
    LifeOrientSymbol="A";
   }


   // code and symbol computer literacy
      if(CompLitmark>=0 &&CompLitmark<30){
   compLitCode= 1;
   compLitSymbol="FF";
   }else if(CompLitmark>30 &&CompLitmark<=40){
      compLitCode= 2;
    compLitSymbol="F";
   }else if(CompLitmark>39 &&CompLitmark<50){
     compLitCode= 3;
    compLitSymbol="E";
   }
   else if(CompLitmark>49 &&CompLitmark<60){
     compLitCode= 4;
    compLitSymbol="D";
   }else if(CompLitmark>60 &&CompLitmark<70){
     compLitCode= 5;
    compLitSymbol="C";
   }else if(CompLitmark>70 &&CompLitmark<80){
     compLitCode= 6;
    compLitSymbol="B";
   }else{
       compLitCode= 7;
    compLitSymbol="A";
   }

   //code and symbol for art
     if( Average>=0 &&Average<30){
   artCode= 1;
  artSymbol="FF";
   }else if( Artmark>30 && Artmark<=40){
         artCode= 2;
    artSymbol="F";
   }else if( Artmark>39 && Artmark<50){
     artCode= 3;
    artSymbol="E";
   }
   else if( Artmark>49 && Artmark<60){
     artCode= 4;
    artSymbol="D";
   }else if( Artmark>60 && Artmark<70){
     artCode= 5;
    artSymbol="C";
   }else if(CompLitmark>70 &&CompLitmark<80){
     artCode= 6;
   artSymbol="B";
   }else{
       artCode= 7;
    artSymbol="A";
   }

   // code and symbol average mark
     if( Average>=0 && Average<30){
   averageCode= 1;
  averageSymbol="FF";
   }else if( Average>30 && Average<=40){
     averageCode= 2;
    averageSymbol="F";
   }else if( Average>39 && Average<50){
    averageCode= 3;
    averageSymbol="E";
   }
   else if( Average>49 && Average<60){
     averageCode= 4;
    averageSymbol="D";
   }else if( Average>60 && Average<70){
     averageCode= 5;
    averageSymbol="C";
   }else if(Average>70 &&Average<80){
     averageCode= 6;
  averageSymbol="B";
   }else{
      averageCode= 7;
    aaverageSymbol="A";
   }


}
void displayReport(){


}

int main()
{
    studentName();
    getMarks();
    calcAverageYearMark();
    minMax();
    codeSymbol();
    cout << englishCode<<" "<<englishSymbol  <<endl;
    return 0;
}
