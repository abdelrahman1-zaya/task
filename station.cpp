#include <iostream>
#include <ctime>


using namespace std;

void ticket() ;

int main()
{
    cout<<"welcome to station "<<endl ;
    cout <<"-------------------------------------------------------------------------------"<<endl ;


    while (true){
    ticket() ;
    }

}
void ticket ()
{
    string name , place  ;
    int dd , mm , train_type , num_passengers , i ;
    time_t now = time(0);
    tm *ltm = localtime(&now) ;
    int arr[5]={1,2,3,4,5} ;
    arr[0]=100;
    arr[1]=80;
    arr[2]=60;
    arr[3]=40;
    arr[4]=25;

    cout << "enter your name :  ";
    cin>> name ;

    cout<<"enter the date  :  ";
    cin >> dd >> mm ;

    cout << "enter the place   :  " ;
    cin >> place ;

    cout << "enter the number of  passengers :  ";
    cin >> num_passengers ;

    cout << "enter the type of train  :  " ;
    cin>> i;

    cout <<"-------------------------------------------------------------------------------"<<endl ;


    cout << "name           : " << name <<endl ;

    cout << "date           : " << dd <<" - "<<mm <<" - 2022"<< endl ;


    cout << "place          : " <<place<<endl ;

    cout<< "num passengers : " <<num_passengers <<"  passengers"<< endl ;

    cout << "type           : "<<i <<endl ;

    cout << "prise          : " <<arr[i-1] << "$" <<endl ;



    cout <<"-------------------------------------------------------------------------------"<<endl ;


    cout << "time : " << ltm->tm_hour <<":" ;
    cout << 1 + ltm->tm_min<<":";
    cout << 1 + ltm->tm_sec<< endl ;

    cout << "date : " <<ltm->tm_mday<<"-";
    cout << 1+ltm->tm_mon<<"-";
    cout << 1900+ltm->tm_year<<endl ;

    cout<<"we wish you a happy trip" <<endl ;

    cout <<"-------------------------------------------------------------------------------"<<endl ;

}

