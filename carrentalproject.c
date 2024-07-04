#include<iostream>
using namepace std;
struct car{
    string company,model;
    int year,rgNo,model;
    bool rented;
};
displayCar(Car car){
    cout<<"Company:"<<car.company<<endl;
    cout<<"Model:"<<car.company<<endl;
    cout<<"Year:"<<car.company<<endl;
    cout<<"Registration no:"<<car.rGNo<<endl;
    cout<<"Rent: Rs"<<car.rent<<"/day"<<endl;
}
int main(){
    Car car123={"Toyota","Corolla",2022,123,5000,false};
    Car car345={"Honda","Civic",2023,345,7000,true};
    Car car567={"Suzuki","Alto",2021,567,4000,false};
    cout<<"....Available Cars...."<<endl;
    displayCar(car123);
    displayCar(car345);
    displayCar(car567);
    while(true){
        int choice;
        cout<<"Enter 0 to exit or"<<endl;
        cout<<"Enter Registration No"<<endl;
    }

    cout<<"Enter Registration No"<<endl;
    int choice;
    cout<<"Enter:";
    cin>>choice;
    switch(choice){
        case 123:{
            if(!car123.rented){
                car123.rented=true;
                cout<<"You have successfully rented the following car"<<endl;
                displayCar(car123);

            }
            else{cout<<"This car is already rented"<<endl<<endl;
            break;
        }
        case 345:{
            if(!car345.rented){
                car345.rented=true;
                cout<<"You have successfully rented the following car:"<<endl;
                displayCar(car345);
            }
            else{cout<<"This car is already rented"<<endl<<endl;
            break;
            }
            case 567:{
                if(!car567.rented){
                    car567.rented=true;
                    cout<<"You have successfully rented the following car"<<endl;
                    displayCar(car567);
                }
                else{cout<<"This car is already rented"<<endl<<endl;
                break;
                }
                default:{
                    cout<<"Invalid Input"<<endl<<endl;
                    break;
                }
            }

        }
    }
}