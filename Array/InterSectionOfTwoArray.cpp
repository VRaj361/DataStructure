#include<iostream>
using namespace std;
int main(){
    int arr1[]={1,2,2,2,3,4};
    int arr2[]={2,2,3,3};
    int arr3[3];
    int count=0;
    //  for(int i=0;i<6;i++){
    //     int ele=arr1[i];
    //     for(int j=0;j<4;j++){
    //         if(arr2[j]>ele){
    //             break;
    //         }//element is bigger than why you check for before element

    //         if(arr2[j]==ele){
    //             arr3[count++]=ele;
    //             arr2[j]=-1;
                
    //             break;
    //         }
    //     }
    // }//end of outer for loop

    //another logic which takes better time complexity
    int i=0,j=0;
    while(i<6&&j<4){
        if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr1[i]==arr2[j]){
            arr3[count++]=arr1[i];
            i++;
            j++;
        }else{
            j++;
        }
    }

    //two pointer approch 

    for(int i=0;i<3;i++){
        cout<<arr3[i]<<" "<<endl;
    }


    return 0;
}