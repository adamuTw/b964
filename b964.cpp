#include <iostream>
#include<math.h>
using namespace std;
int main() {
    int number;
    cin>>number;
    int stu[number];
    for(int i=0;i<number;i++){
        cin>>stu[i];
    }
    int renew[number];
    for(int r=0;r<number;r++){
        for(int h=0;h<number-1;h++){
            if(stu[h]>stu[h+1]){
                int tmp=stu[h+1];
                stu[h+1]=stu[h];
                stu[h]=tmp;
            }
        }
    }
    for(int o=0;o<number;o++){
        cout<<stu[o]<<" ";
    }
    int lowest;
    if(stu[0]>=60){
        cout<<endl<<"best case";
    }
    else{
        for(int e=0;e<number;e++){
            if(stu[e]<60){
                lowest=stu[e];
            }
        }
        cout<<endl<<lowest;
    }
    int highest;
    if(stu[number-1]<60){
        cout<<endl<<"worst case";
    }
    else{
        for(int ey=number-1;ey>=0;ey--){
            if(stu[ey]>=60){
                highest=stu[ey];
            }
        }
        cout<<endl<<highest;
    }
}
