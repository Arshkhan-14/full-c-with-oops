//******** standar syntax for open function******

#include<iostream>
#include<fstream>
//#include<string>
#include<cstring>  // use this for binary
#include<stdio.h>
using namespace std;

// storing structure data in binary file
typedef struct employee
{
  int no;
  char name[100];
  int rollno;
 
} emp;

// storing class data in binaary file
class bin{
  protected:
   int age;
   char name[100];

   public:
   bin(){
     age=50;
     strcpy(this->name,"arsh khan");
   }

  // bin(int age,char *c){
    // this->age=age;
    // strcpy(this->c,"arsh khan");
     
   //}

   void show(void){
    cout<<" age is "<<age<<" name is "<<name<<endl;
       }

    void change(){
       age=500;
       strcpy(this->name,"xxxxx");
    }
};


int main(){
  
//***************string**************

//string data;
//cin>>data;    // write a string( hi iam arsh) if we use cin again it raed (iam)
//cout<<data;   //recive(hi) only

// to get full line
//getline(cin,data);
//cout<<data; 



//*************file handling************
 /*
  1.for reading(in) and writing(out),append(app),trunk,etc  we use fstream 
    -> if u use trunk ,append mod if file not exit new file created 
    -> trunk will also wipeout file content
    ->append add content to file end
    -> if u use fstem to write  ONLY in file it will NOT wipeout || sATART REPALcING FROM STARTING
  2.for reading only we use ifstream which is drived from fstream 
     ->               
  3.for writing only we use ofstream which is drived from fstream   
     -> if we use ofstrem  to write file if it not exit new will created
        if file exit it content wipeout | because it contain trunk            


*/

////**********FSTREAM AS WRITE/READ/APPEND/TRUNK ETC***********
/*
  fstream file;
  file.open("sample60.txt",ios :: in | ios :: out | ios ::app);

   if(!file.is_open()){

     cout<<" no file is open"<<endl;
   }
    else{
    // read and write
    cout<<"file open succesfully"<<endl;
 
       file<<" psitian";

      file.seekg(0);

   cout<<" reading a file"<<endl;

      string str; 

      while (file.eof()==0)
      {
        getline(file,str);
        cout<<str<<endl;
      }
      
       // getline(file,str);

      // cout<<str;
       
    }
    
  file.close();
  */
  
  /*
   //fstream file("filehandling1.txt",ios :: in | ios:: out);
    fstream file;
    file.open("filehandling1.txt",ios :: in| ios :: out);
    string str1;
    if (!file)
    {
        cout<<" no file open"<<endl;
    }
    else{
        cout<<"writing in file "<<endl;

         cout<<file.tellp()<<endl;
    file<<"my name is arsh khan i am from bakewar"<<endl;
    //file<<" check";
           cout<<file.tellp()<<endl;

        //file.seekp(3);  //ios:: beg point in begning| ios::cur  point current position||ios::end point at end
        cout<<file.tellp()<<endl;


    file.seekg(0);
    while (file.eof()==0)
    {
        getline(file,str1);
        cout<<str1<<endl;
    }
    cout<<file.tellg()<<endl;
    
     
    }

*/

// ************BINARY FILE*************character by charcter
 /*
char input[100];
  strcpy(input," hi arsh bhai kaise ho");
 fstream file("binaryfile.bin",ios:: binary|ios::in|ios::out|ios::trunc);
 
 if (!file.is_open())
 {
    cout<<" no file exits"<<endl;
 }
 else{
        int length= strlen(input);

        for (int i = 0; i < length; i++)
        {
            file.put(input[i]);
            
        }
        

    file.seekg(0);
     char ch;
    while (file.eof()==0)
    {
        file.get(ch);
        cout<<ch;
    }
    

 }
 */

//***********binary file with read/write function 
   /*   
  emp st2r,student={10,"arsh khan",500};
  fstream file("binaryfile.bin",ios::in |ios::out|ios::binary|ios::trunc);
   if (!file.is_open())
   {
    cout<<" no file open"<<endl;
   }
   else{
       cout<<"writing file"<<endl;
       file.write((char*)&student,sizeof(student));
       file.close();

       cout<<"reading file"<<endl;
       file.seekg(0);
       file.read((char* )&st2r,sizeof(st2r));
       cout<<st2r.no<<"\t"<<st2r.name<<"\t"<<st2r.rollno<<endl;
       file.close();
        
      
      
   }
 */
 //****************with sepatre read and write*****
   //writing
/*
  emp student={3,"muhid khan",10000};
   ofstream file("binaryfile.bin",ios::binary|ios::app);
   if (!file.is_open())
   {
    cout<<" no file open"<<endl;
   }
   else{
       cout<<"writing file"<<endl;
       file.write((char*)&student,sizeof(student));
       file.close(); 
   }
   
    */
// reading
/*
emp st2;
  ifstream file("binaryfile.bin",ios::binary|ios::in);
   if (!file.is_open())
   {
    cout<<" no file open"<<endl;
   }
   else{
       cout<<"reading file"<<endl;
       while(file.read((char *)&st2,sizeof(st2))){
       cout<<st2.no<<"\t"<<st2.name<<"\t"<<st2.rollno<<endl;
       }
       file.close(); 
   }
   */

  //searching records
  
   int n1;
   emp st2;
  ifstream file("binaryfile.bin",ios::binary|ios::in);
   if (!file.is_open())
   {
    cout<<" no file open"<<endl;
   }
   else{
      cout<<" enter no of employee you wamt to search"<<endl;
      cin>>n1;
      
       cout<<"reading file"<<endl;
       while(file.read((char *)&st2,sizeof(st2))){
        if (st2.no==n1)
        {
          cout<<st2.no<<"\t"<<st2.name<<"\t"<<st2.rollno<<endl;
          file.close(); 
        }
        
       
       }
       
   }
    


   //***********updating record********
   /*
    int n2;
   emp st,student={10,"arsh khan",500};
  fstream file("binaryfile.bin",ios::binary|ios::in |ios::out);
   if (!file.is_open())
   {
    cout<<" no file open"<<endl;
   }
   else{
        file.seekg(0);
        cout<<" enter no of record to update"<<endl;
        cin>>n2;
         cout<<"reading file"<<endl;
         while(file.read((char *)&st,sizeof(st))){
         if (st.no==n2)
         {
          cout<<"writing file"<<endl;
          cout<<" enter no of upated record"<<endl;
          cin>>st.no;
          fflush(stdin);
          cout<<"enter name of updating record"<<endl;
          cin>>st.name;
            fflush(stdin);
          cout<<"enter rollno of updating record"<<endl;
          cin>>st.rollno;
            fflush(stdin);
          file.seekp(-sizeof(st),ios::cur);
          file.write((char*)&st,sizeof(st));
          file.close();

         }
         
         }
       
  
      
   }
*/


//*********STORING CLASS DATA IN FILE *****
/*
 bin b1;

 fstream file("classdata.bin",ios::binary|ios::in|ios::out);
   if (!file.is_open())
   {
     cout<<" no such file"<<endl;

   }
   else{
      cout<<"writing file"<<endl;
      file.write((char *)&b1,sizeof(bin));
      file.seekg(0);

    bin b2;
      file.read((char *)&b2,sizeof(bin));

      


  b1.show();
   b2.show();

   b1.change();
   b2.change();

   b1.show();
   b2.show();
   


   }
file.close();
  */
  return 0;
}