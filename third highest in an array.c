int thirdLargest(int a[], int n)
{
     //Your code here
     if(n<3)return -1;
     
      int first=INT_MIN;
      int second=INT_MIN,third=INT_MIN;
      for(int i=0;i<n;i++){
          if(a[i]>first){
              third=second;
              second=first;
              first=a[i];
          }else if(a[i]>second){
              third=second;
              second=a[i];
          }else if(a[i]>third){
              third=a[i];
          }
      }
      return third;
}
