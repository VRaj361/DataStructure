#include <iostream>
using namespace std;

int ceiling(int arr[], int tar)
{
    int s = 0;
    int e = 7;  
    if(tar>arr[7]){
        return -1;
    }
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] > tar)
        {
            e = mid - 1;
        }
        else if (arr[mid] < tar)
        {
            s = mid + 1;
        }
        else
        {
            return mid;
        }
    }
        return s;
}
int floor(int arr[], int tar)
{
    int s = 0;
    int e = 7;
    if(tar<arr[0]){
        return -1;
    }
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] > tar)
        {
            e = mid - 1;
        }
        else if (arr[mid] < tar)
        {
            s = mid + 1;
        }
        else
        {
            return mid;
        }
    }
        return e;
}

int main()
{
    int arr[] = {2, 3, 5, 6, 9, 14, 16, 19};
    cout << "Ceiling of the number is => " << ceiling(arr, 15) << endl;
    cout << "floor of the number is => " << floor(arr, 15) << endl;
}