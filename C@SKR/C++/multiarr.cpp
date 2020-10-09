#include<iostream>
using namespace std;
int main()
{
    int r,c,i,j;
    int arr1[10][10],arr2[10][10],arr3[10][10];
    cin>>r>>c;
    // int arr1[r][c];
    // int arr2[r][c];

    for (i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>arr1[i][j];
        } 
    }


    for ( i=0;i<r;i++)
    {
        for( j=0;j<c;j++)
        {
            cin>>arr2[i][j];
        } 
    }


   for (i=0;i<r;i++)
    {
        for( j=0;j<c;j++)
        {
          arr3[i][j] = arr1[i][j] + arr2[i][j] ;   
        } 
    }




  for (i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<< arr3[i][j] <<" ";
            
        } 
        cout<<endl;
    }




}



// // C++ program for addition 
// // of two matrices 
// #include <bits/stdc++.h> 
// using namespace std; 
// #define N 4 

// // This function adds A[][] and B[][], and stores 
// // the result in C[][] 
// void add(int A[][N], int B[][N], int C[][N]) 
// { 
// 	int i, j; 
// 	for (i = 0; i < N; i++) 
// 		for (j = 0; j < N; j++) 
// 			C[i][j] = A[i][j] + B[i][j]; 
// } 

// // Driver code 
// int main() 
// { 
// 	  int r,c;
//     cin>>r>>c;
//     int arr1[r][c];
//     int arr2[r][c];

//     for (int i=0;i<r;i++)
//     {
//         for(int j=0;j<c;j++)
//         {
//             cin>>arr1[r][c];
//         } 
//     }


//     for (int i=0;i<r;i++)
//     {
//         for(int j=0;j<c;j++)
//         {
//             cin>>arr2[r][c];
//         } 
//     }

//     int arr3[r][c];
// 	int i, j; 
// 	add(arr1,arr2,arr3); 

// 	cout << "Result matrix is " << endl; 
// 	for (i = 0; i < r; i++) 
// 	{ 
// 		for (j = 0; j < c; j++) 
// 		cout << arr3[i][j] << " "; 
// 		cout << endl; 
// 	} 

// 	return 0; 
// } 


// ************************************************************************************************************************


// // C++ program for addition 
// // of two matrices 
// #include <bits/stdc++.h> 
// using namespace std; 
// #define N 4 

// // This function adds A[][] and B[][], and stores 
// // the result in C[][] 
// void add(int A[N][N], int B[N][N], int C[N][N]) 
// { 
// 	int i, j; 
// 	for (i = 0; i < N; i++) 
// 		for (j = 0; j < N; j++) 
// 			C[i][j] = A[i][j] + B[i][j]; 
// } 

// // Driver code 
// int main() 
// { 

//     int r,c;
//     cin>>r>>c;
//     int A[r][c];
//     int B[r][c];

//     for (int i=0;i<r;i++)
//     {
//         for(int j=0;j<c;j++)
//         {
//             cin>>A[r][c];
//         } 
//     }


//     for (int i=0;i<r;i++)
//     {
//         for(int j=0;j<c;j++)
//         {
//             cin>>B[r][c];
//         } 
//     }
// 	int C[N][N]; // To store result 
// 	int i, j; 
// 	add(A, B, C); 

// 	cout << "Result matrix is " << endl; 
// 	for (i = 0; i < N; i++) 
// 	{ 
// 		for (j = 0; j < N; j++) 
// 		cout << C[i][j] << " "; 
// 		cout << endl; 
// 	} 

// 	return 0; 
// } 

// // This code is contributed by rathbhupendra 
// * C Program to Add Two Matrices */

// #include<iostream>
// using namespace std;
 
// int main()
// {
//  	int i, j, rows, columns, a[10][10], b[10][10];
//  	int Addition[10][10];
  
//  	// printf("\n Please Enter Number of rows and columns  :  ");
//  	// scanf("%d %d", &i, &j);
//       cin>>i>>j; 
//  	// printf("\n Please Enter the First Matrix Elements\n");
//  	for(rows = 0; rows < i; rows++)
//   	{
//    		for(columns = 0; columns < j; columns++)
//     	{
//       		cin>>a[rows][columns];
//     	}
//   	}
   
//  	// printf("\n Please Enter the Second Matrix Elements\n");
//  	for(rows = 0; rows < i; rows++)
//   	{
//    		for(columns = 0; columns < j; columns++)
//     	{
//       		cin>>b[rows][columns];
//     	}
//   	}
  
//  	for(rows = 0; rows < i; rows++)
//   	{
//    		for(columns = 0; columns < j; columns++)
//     	{
//       		Addition[rows][columns] = a[rows][columns] + b[rows][columns];    
//    	 	}
//   	}
 
//  	// printf("\n The Sum of Two Matrix a and b = a + b \n");
//  	for(rows = 0; rows < i; rows++)
//   	{
//    		for(columns = 0; columns < j; columns++)
//     	{
//       		cout << Addition[rows][columns]<<" ";
//     	}
//     	cout<<endl;
//   	}
//  	return 0;
// }