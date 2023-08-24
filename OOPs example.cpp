#include <bits/stdc++.h>
using namespace std;

class Bicycle{
    public:
        int number_of_gears;
        int speed_of_bicycle;
};

class MountainBike:public Bicycle{
    public:
        int height_seat;
};

int main()
{
    int gears,speed_of_bicycle,height_seat;
    cin>>gears>>speed_of_bicycle>>height_seat;
    MountainBike obj;
    obj.height_seat=height_seat;
    obj.number_of_gears=gears;
    obj.speed_of_bicycle=speed_of_bicycle;
    cout<<obj.number_of_gears<<" "<<obj.speed_of_bicycle<<'\n'<<obj.height_seat<<'\n';
    return 0;
}
