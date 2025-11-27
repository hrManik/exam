#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i = 0; i<n-1 ;i++){
        for(int j =0; j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void insertionSort(int arr[], int n){
    for(int i = 1; i < n; i++){
        int key = arr[i];
        int j = i-1;

        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void selection(int a[], int n){
    for(int i = 0; i<n-1;i++){
        int m = i;
        for(int j = i + 1; j<n; j++){
            if(a[j]<a[m]){
                m=j;
            }
        }
        swap(a[i],a[m]);
    }
}

int main(){
    int n ,a[100];
    cout<<"Enter size : ";
    cin>>n;
    cout<<"Enter elements :";
    for(int i = 0; i<n; i++)
    cin>>a[i];

    int op;
    cout<<"1.Bubble 2. Insertion 3. Selection \n choise: ";
    cin>>op;
    if(op==1)
    bubbleSort(a,n);
    else if(op==2)
    insertionSort(a,n);
    else if(op==3)
    selection(a,n);
    else{
        cout<<"Invalid "<<endl;

        
    }
    cout << "Sorted array: ";
    for(int i = 0; i<n; i++)
        cout << a[i] << " ";
    cout << endl;

    return 0;
}