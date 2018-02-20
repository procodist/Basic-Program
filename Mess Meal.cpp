#include<iostream>
using namespace std;

class Messpeople
{
public:
    int check=0,day,month,year;
    double Total_Cost,Onedaymill=0,Totalmil,mell=0;
    char name[20];
    double nummil, Total_cost_this_people;
    void getdata(double n);
    void display(double n);
    void Showname();
    void getmilnumber(double n);
    void Onedaymilnumber(double n)
    {
        Onedaymill = 0;
        Onedaymill = Onedaymill + n;
        cout << "OneDay's Total MIll : "<<Onedaymill<<endl;
    }
    void Totalpersonal()
    {
        if(check==0)
        {
            Totalmil =  0;
            Totalmil =  Totalmil + nummil;
            cout << "Number of Mill : "<< Totalmil<<endl;
            check = 5;   /// 1st step For indivisual Mill Will be count///
        }
        else
        {
            Totalmil =  Totalmil + nummil;            ///  2nd step For indivisual Mill count///
            cout << "Number of Mill : "<< Totalmil<<endl;
        }

    }
    void Getdate()                 ///1st step the sequence of  Date:month:year  ///
    {
        cout << " Please Enter date : !!";
        cin >> day >> month >> year;
        cout << day << ":" << month << ":" <<year << endl;
    }
    void Showdate()                      ///2nd step calling for Showing date ///
    {
        day++;
        cout << day << ":" <<month << ":" <<year << endl;
    }
};


void Messpeople::getdata(double n)   ///1st step getdata of Milmember///
{
    nummil = n;
    cin >> name;
    cout << endl;
    cout << name << " Today's Mill number : "<<nummil;

}
void Messpeople::Showname()         ///2nd step Name show of Mill member ///
{
    cout <<"Your Mess member is "<< name << " : ";
}

void Messpeople::display(double n)          ///Display Off Mill member Total Information///
{
    if(mell==0)
        {
            Total_cost_this_people=0;
            Total_cost_this_people = Total_cost_this_people + nummil*n;
            cout << name <<" : " << "Today's Mill cost is : " << nummil*n << " & Total Mill cost = "<< Total_cost_this_people <<  endl;
            mell = 5;
        }
    else
    {
         Total_cost_this_people = Total_cost_this_people + nummil*n;
         cout << name <<" : " << "Today's Mill cost is : " << nummil*n << " & Total Mill cost = "<< Total_cost_this_people <<  endl;
    }

}

void Messpeople::getmilnumber(double n)             ///2nd Step Mill member's Number Of Mill///
{
    nummil = n;
    cout << endl;
}


int main()                                  /// Start Main function ///
{
    Messpeople student[5],date;
    int a,b,c;
    double Oneday_mill,n,TOTALMILL=0,TOTALCOST=0;
    a=b=c=0;
    while(1)
    {
        Oneday_mill = 0;
        if(b==0)                                /// For date ///
            {
                date.Getdate();
                b=5;
            }
        else
            date.Showdate();

        if(a==0)
        {
            for(int i=0;i<5;i++)            /// Mill Member Information ///
            {
                cout << "Please Enter mill number And then Name  : ";
                cin >> n;
                Oneday_mill = Oneday_mill + n;
                student[i].getdata(n);
                cout << endl;
                student[i].Totalpersonal();
                cout << endl;
                //student[i].Onedaymilnumber(n);
                cout << endl;
                a=5;
            }
        }
        else
        {
            for(int i=0;i<5;i++)
            {
                student[i].Showname();
                cin >> n;
                Oneday_mill = Oneday_mill + n;
                student[i].getmilnumber(n);
                cout << endl;
                student[i].Totalpersonal();
                cout << endl;
                //student[i].Onedaymilnumber(n);
                cout << endl;
            }
        }
        TOTALMILL = TOTALMILL + Oneday_mill;
        cout << endl;
        cout << "Please Enter Today Cost : ";
        double cost;
        cin >> cost;
        TOTALCOST = TOTALCOST + cost;
        cout << endl;
        double Averase = cost/Oneday_mill;

        for(int i=0;i<5;i++)
        {
            student[i].display(Averase);
            cout << endl;
        }
        cout << "Total Number of Mill : "<< TOTALMILL << endl;
        cout << "Total COST : " << TOTALCOST << endl;
        double update;
        update = TOTALCOST / TOTALMILL;
        cout << "Updatet Millrate is : "<< update << endl;

    }
    return 0;
}

