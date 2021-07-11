#include<unistd.h>
#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
using namespace std;
class user{

private :
    string user;

public :
    string name;
	float h,w;
	void getname();
	void givename();
	void input();
	void realprint();
	



}h;

class bmical: public user{
	public:
		float y;
		void bmi();
		void print();
}bmicalculator;

class diet : public user{
	public:
		int d,g,age;
		void diets();
		void eeprint();
		void cal();
}dietss;

class exercise : protected user{
	public:
	 int n;
	 void exe();
	 void eprint();
}exer;

void user :: getname()
{
  cout << " Enter user name :" <<endl;
  cin >> name;
}

void user :: givename()
{
    cout << name;

}
 void user :: input()
 {


 	getline(cin,name);
 	cout<<""<<endl<<endl;
 	cout<<"Enter your Height(in meter)"<<endl;
 	cin>>h;
 	cout<<""<<endl<<endl;
 	cout<<"Enter your Weight(in Kg)"<<endl;
 	cin>>w;
 	cout<<""<<endl;
 }
 void user:: realprint()
 {
 	ofstream file;

 	file<<"_________"<<endl;
 	file<<"  AV's Health Advisor   "<<endl;
 	file<<"_________"<<endl<<endl;
 	file<<" NAME: "<<setw(5)<<name<<endl;
 	file<<" HEIGHT: "<<h<<" meters"<<endl;
 	file<<" WEIGHT: "<<w<<" kg"<<endl<<endl;

 }
 void bmical::bmi()
 {
 	int n;
 	cout << "Enter your BMI calculate by BMI calculator device : " <<endl;
 	cin >> y;
 	system("cls");
 	

 	cout<<"   ***********    "<<endl;
 	cout<<"   BODY MASS INDEX"<<endl;
    cout<<"   BMI CALCULATOR"<<endl;
    cout<<"   ***********    "<<endl<<endl;

	

	system("cls");
	cout<<"   ***********    "<<endl;
 	cout<<"   BODY MASS INDEX"<<endl;
    cout<<"   BMI CALCULATOR"<<endl;
    cout<<"   ***********    "<<endl<<endl;
    if(y>18.5 && y<25){



    cout<<"YOUR B.M.I is : ";
    cout<<y<<endl<<endl;
	}
	else if(y>25)
	{
		

		cout<<"       !! pay attention !!"<<endl<<endl;
		

		cout<<" HELLO " << name <<" YOU ARE OVERWEIGHT "<<endl<<endl;
	
		cout<<" YOUR B.M.I is: ";
	
		cout<<y<<endl<<endl;
	}
	else if(y<18.5)
	{


		cout<<"      !! Need To Improve !!"<<endl<<endl;

		cout<<" HELLO "<<name<<" you are under weight "<<endl<<endl;
	
		cout<<" YOUR B.M.I is: ";

		cout<<y<<endl<<endl;
	}
	cout<<" PRESS [1] to save REPORT!!"<<endl<<"PRESS [2] to go on MENU"<<endl<<" PRESS any key & ENTER to EXIT!!!"<<endl;
	    cout<<"ENTER YOUR INPUT HERE: "<<endl;
	    cin>>n;
	    

	    switch (n)
	    {
	    	case 1:
	    		bmicalculator.print();

	    		break;

				default:
				exit (0);
		}

	}
	void bmical::print()
	{
		 realprint();
		 ofstream file;
		
		 file<<"------------BMI REPORT-----------"<<endl<<endl;
		 file<<" B.M.I is : "<<y<<endl<<endl;
		 file<<"---------------------------------"<<endl<<" THANK YOU!!! "<<endl<<endl;
		 file<<"************************";
	}
void diet::diets(){
	system("cls");

	cout<<"      ********************************         "<<endl;
	cout<<"              SELECT YOUR DIET PLAN                  "<<endl;
	cout<<"      ********************************         "<<endl<<endl;
	input();
	cout<<"  ENTER YOUR AGE   (in years) "<<endl;
	cin>>age;
	cout<<""<<endl;
	cout<<"SELECT GENDER MEN[1]  WOMEN[2]"<<endl<<endl;
	cout<<"ENTER YOUR INPUT HERE"<<endl;
	cin>>g;
	system("cls");




	cout<<"SELECT ANY CATEGORY FROM THE BELOW :-"<<endl<<endl;
	cout<<"LOW CALORIE DIETS        PRESS[1]"<<endl;
	cout<<"LOW CARBOHYDRATE DIETS   PRESS[2]"<<endl;
	cout<<"LOW FAT DIETS            PRESS[3]"<<endl<<endl;
	cout<<"ENTER YOUR INPUT HERE : "<<endl ;
	cin>>d;
cout << "Now select Exercises according to your diet plan :" << endl;

    cout << "    *********************    " << endl;
    cout << "            KNOW YOUR"<< endl;
    cout << "            EXERCISE" << endl;
    cout << "    *********************    "  << endl << endl;


    cout << ""<<endl<< endl;

    cout << " SELECT ANY CATGORY FROM THE BELOW :-"<< endl << endl;

    cout << " Aerobic (Endurance) Exercise  PRESS [1]" <<endl;
    cout << " Strength exercise             PRESS [2]" <<endl;
    cout << " Flexibility exercise          PRESS [3]" <<endl;
    cout << " Balance exercise              PRESS [4]" <<endl;


    cin >> d;
    system("cls");

    cout << "    ********    " << endl;
    cout << "               YOUR"<< endl;
    cout << "            EXERCISEs" << endl;
    cout << "    ********    "  << endl << endl;
    switch (d)
    {
    case 1 :

        cout << " hey " << name << " Aerobic (Endurance) Exercise are : " << endl << endl;

        cout<< " A brisk walk" << endl << " Climbing the stairs" << endl << "Playing Tennis" << endl;
        break;
    case 2 :

        cout << " hey " << name << " Strength Exercise are : " << endl << endl;

        cout << "Lifting free weights"<<endl << " Usng resistance machines at the gym" << endl;
        break;
    case 3 :

        cout << " hey " << name << " Flexibility Exercise are : " << endl << endl;

        cout << " Stretching various parts of the body " << endl << " Doing Yoga" << endl;
        break;
    case 4 :

        cout << " hey " << name << " Balance Exercise are : " << endl << endl;

        cout << " Heel-to-toe walking" << endl << " Standing on one foot" << endl << " Practicing tai chi poses" << endl;
        break;
    default :
        exit(0);
    }

    cout<<""<<endl;






    switch (d)
    {
    case 1 :
        exer.eprint();

        break;


    default :
        exit(0);
    }
 }

 void exercise ::eprint()
  {
      realprint();
      ofstream file;
      
      file<<" -------EXERCISE REPORT----------" << endl <<endl;
      file<< " VARIOUS EXERCISE ARE : - "<<endl << endl;
      file<<" Aerobic (Endurance) Exercise " <<endl << "Aerobic Exercise increase your breathing and heart rate " <<endl;
      file<< " A brisk walk" << endl << " Climbing the stairs" << endl << "Playing Tennis" << endl<<endl;

      file<<" STRENGTH exercise " <<endl;
      file<< "Lifting free weights"<<endl << " Usng resistance machines at the gym" << endl<<endl;
      file<<" Flexibility exercises" <<endl << " Stretching various parts of the body " << endl << " Doing Yoga" << endl<<endl;
      file<<" Balance exercises" <<endl << " Heel-to-toe walking" << endl << " Standing on one foot" << endl << " Practicing tai chi poses" << endl<<endl;
      file<<" YOU PREFERED EXERCISE NO : " << n << endl<<endl;
      file<<"------------------------------"<<endl<<"THANK YOU!!!"<< endl;
      file<<"  oom2021_project_work" << endl;
      file<<"*****************";

  }







int main()
{
    int n;

    
    cout << "      WELCOME    " << endl << endl;
    cout << "  ***************    " <<endl;
    

    cout << "    Personal Record  "<<endl;
    cout << "  ****************    " << endl<< endl;
    // PROJECT WORK
    cout << "      THE PROJECT WORK   " << endl << endl;
    cout << " CREATED BY : " <<endl;
    cout << " Hemant Pal      - LCS2020031" <<endl;
    cout << " Abhishek Saini  - LCS2020039" <<endl;
    cout << " Aman Gangwar    - LCS2020049" <<endl;
    cout << " Maurya Abhishek - LCS2020060" <<endl;
  


    
    cout << "PRESS <1> TO CONTINUE : ";
    cin >> n;
    


    system("cls");



   
    cout <<  "                 WELCOME " <<  endl;
    cout << "        *********************        " <<endl << endl;

   
    cout << "    KNOW YOUR B.M.I                                 :  PRESS[1] "<<endl;
    cout << "    KNOW YOUR DIET and Exercises you need           :  PRESS[2] "<<endl<<endl;

  
    cout << " PRESS [3] TO EXIT " << endl;
    cout << " ENTER YOUR INPUT HERE : ";
    cin >> n;

    switch(n)
    {
    case 1 :
        bmicalculator.bmi();
        break;

    case 2 :
        dietss.diets();
        break;

    case 3 :
        exit(0);
        break;

    default :
        cout << "please enter valid option" << endl;

    }


}
