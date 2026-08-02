// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
             
//         }
//         cout<<'*'<< " ";
       
//         cout<<"\n";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// void linearsearch(int arr[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]==n)
//         {
//             cout<<"element found at index "<<i;
//         }
//     }

// }
// int main()
// {
//     int arr[]={1,2,3,4,5};
//     int n=5;
//     linearsearch(arr,n);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5};
//     int n=5;
//     int temp=arr[0];
//     for(int i=1;i<n;i++){
//         arr[i-1]=arr[i];
//     }
//     arr[n-1]=temp;
//     cout<<"After left rotation the array is: ";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }