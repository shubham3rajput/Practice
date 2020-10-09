// // // #include<iostream>
// // // int main()
// // // {
// // //     int x;
// // //     std::cin>>x;
// // //     switch(x)
// // //     {
// // //         case 0:std::cout<<"The number is zero";
// // //         break;
// // //         default:
// // //         int y;
// // //         y=x%2;
// // //         switch(y)
// // //         {
// // //             case 0:std::cout<<"Even number";
// // //             break;
// // //             case 1:std::cout<<"Odd number";
// // //             break;
// // //         }
// // //     }
// // // }


// // #include<iostream>
// // using namespace std;
// // int main()
// // {
// //   int weight_boat_can_handle,no_of_adults,no_of_children;
  
// //   int weight_of_adults,weight_of_children,total_weight;
  
// //   cin>>weight_boat_can_handle>>no_of_adults>>no_of_children;
// //   weight_of_adults=no_of_adults*75;
  
// //   weight_of_children=no_of_children*30;
// //   total_weight=weight_of_adults + weight_of_children;
  
// //   if(weight_boat_can_handle <total_weight)
// //   {
// //     cout<<"Boat will drow";
// //   }
// //   else
// //   {
// //     cout<<"Boat is stable";
// //   }
// //   return 0;
  
// // }



// #include<iostream>
// using namespace std;
// int main()
// {
// int u=0;
//   int bill;
//   cin>>u;
//   if(u<=200){
//       bill=u*0.5;
//   }

//   else if(u<=400){
//       bill=u*0.65+100;
//   }
//   else if(u<=600){
//       bill=u*0.8+200;
//   }
//   else 
//   {
//       bill=u*1.25+425;
//   }


//   cout<<"Rs."<<bill;
//   return 0;
// }


// // #include<iostream>
// // using namespace std;
// // int main()
// // {
// // int year;
// //   cin>>year;
  
// //   if(year%400==0)
// //   {
// //     cout<<year<<" is a leap year";
// //   }
// //   else if(year%100!=0 && year%4==0)
// //   {
// //     cout<<year<<" is a leap year";
// //   }
// //   else
// //         cout<<year<<" is a not leap year";
  
  
  
// // return 0;
// // }

// // #include<iostream>
// // using namespace std;
// // int main()
// // {
// // int a;
// // a=1;

// // while(a<=1)
// // {
// //     if(a%2){
// //         cout<<a++;
// //     }
// //     else
// //     {
// //         cout<<++a;
// //     }

// //     cout<<a+10;
// // }
// // return 0;
// // }


// // #include<iostream>
// // using namespace std;
// // int main()
// // {
// //   int r,c,n;
 
  
// //   cin>>r;
// //   cin>>c;
// //   cin>>n;
  
  
// //   if(n>(r+1)&& n<=2*r)
// //      {
// //        cout<<"It is a mango tree";
// //      }
// //   else if(n>((r-2)*r) && n<= (r-1)*r )
// //   {
// //            cout<<"It is a mango tree";
// //   }
// //   else
// //            cout<<"It is not a mango tree";
  
// // }



// #include<iostream>
// using namespace std;




// #include<iostream>
// using namespace std;
// int main()
// {
//  int tb,tbi,tra,tri,to;
// float ob,crr,trr,rem,rem2,ocrr,locrr,otrr,lotrr;
  
//   cin>>tb;
//   cin>>tra;
//   cin>>tri;
//   cin>>tbi;
  
//   to=tb/6;
//   rem=(tbi%6)/10.0f;
//   ob=tbi/6+ rem;
//   crr=tri/ob;

//     ocrr=(int)(crr*10+0.5);
//     locrr=(float) (ocrr/10);
//     rem2=(tra%50)/50.0f;
//     trr=tra/to +rem2;
//     otrr=(int)(trr*10+0.5);
//     lotrr=(float) (otrr/10);
  
//   cout<<to<<endl;
//   cout<<ob<<endl;
//   cout<<locrr<<endl;
//   cout<<lotrr<<endl;


//   if(crr>trr)
//   {
//     cout<<"Eligible to Win";
// }
//   else
//   {
//     cout<<"Not Eligible to Win";
// }
  
//   return 0;
// }







// #include<iostream>
// using namespace std;
// int main()
// {
// int by,cy,diff;

//   cin>>by;
//   cin>>cy;
  
//   if(cy==00)
//   {
//   cy=100;  
//   }
//   // else{}
  
//   diff=cy-by;


// if(diff<0)
// {
//   diff=-1*diff;
// }
// // else{}
  
//   cout<<diff;
// return 0;
// }



// #include<iostream>
// int main(){
//   int a = 1,2, 3;
//   std::cout<<a;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//   int x,y,d;
//   cin>>x;
//   cin>>y;
  
//   (x-3)<=(y-4)?d=y-4:d=x-3;
//   cout<<d;
  
  
// return 0;
// }



// #include<iostream>
// int main() 
// {
//   int i = 0, x = 0;
//   do
//   {
//     if(i % 5 == 0)
//     {
//       std::cout<<x;
//       x++;
//     }
//     ++i;
//   }while(i <= 5);
//   std::cout<<x;
//   return 0;
// }


// #include<iostream> 
// int main() 
// { 
//   const int i = 2; 
//   do
//   { 
//     std::cout<<++i; 
//   }while(i < 1); 
//   return 0; 
// }


// #include<iostream>
// int main()
// {

//   int num=6357,r;
//   int arr[];


// while(num>1)
// {
// r=num%10;
// int arr[]+=r;

// num=num/10;



// // }

  
  
  
  
  
  
//   return 0;
// }







// #include<iostream>
// using namespace std;
// int main()
// {
//   int num,i;
//   cin>>num;
  
//   for (i=2;i<num;i++)
//   {
//     if((num%i)==0)
//     {
//       cout<<"Not eligible";
//       break;
   
//     }
//     else
//     {
//       cout<<"Eligible";
//       break;
//     }
//   }

//   // if(x==1)
//   // {
//   //   cout<<"Eligible";
//   // }
//   // else
//   // {
//   //   cout<<"Not Eligible";
//   // }
  
//   return 0;
// }




// #include<iostream>
// using namespace std;
// int main()
// {
//   int num,i,m;
//   cin>>num;
//   m=num/2;
  
//   if(num==1 || num==2)
//   {
//     cout<<"Not eligible";
//   }
  
  
//   for (i=2;i<m;i++)
//   {
//     if((m%i)==0)
//     {
//       cout<<"Not eligible";
//       break;
   
//     }
//     else
//     {
//       cout<<"Eligible";
//       break;
//     }
//   }


  
//   return 0;
// }



// #include <iostream>  
// using namespace std;  
// int main()  
// {  
//   int n, i, m=0, flag=0;  
//   // cout << "Enter the Number to check Prime: ";  
//   cin >> n;  
//   m=n/2;  
//   for(i = 2; i <= m; i++)  
//   {  
//       if(n % i == 0)  
//       {  
//           cout<<"Not eligible"<<endl;  
//           flag=1;  
//           break;  
//       }  
//   }  
//   if (flag==0)  
//       cout <<"Eligible"<<endl;  
//   return 0;  
// }  


// #include<iostream>
// int main()
// {
//   while('A')
//     std::cout<<"hello";
// }


// #include <iostream>
// long factorial (long a);
// int main ()
// {
//   long number;
//   std::cin>>number;
//   std::cout<< factorial (number);
//   return 0;
// }
// long factorial(long a)
// {
//  long fact=1;
//   for(int i=1;i<=a;i++)
//   {
//      fact=fact*i;
//   }
//   return fact;
// }