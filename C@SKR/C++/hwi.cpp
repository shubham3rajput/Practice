

// C++ program to remove comments from a C/C++ program 
#include <iostream> 
using namespace std; 

string removeComments(string prgm) 
{ 
	int n = prgm.length(); 
	string res; 

	// Flags to indicate that single line and multpile line comments 
	// have started or not. 
	bool s_cmt = false; 
	bool m_cmt = false; 


	// Traverse the given program 
	for (int i=0; i<n; i++) 
	{ 
		// If single line comment flag is on, then check for end of it 
		if (s_cmt == true && prgm[i] == '\n') 
			s_cmt = false; 

		// If multiple line comment is on, then check for end of it 
		else if (m_cmt == true && prgm[i] == '*' && prgm[i+1] == '/') 
			m_cmt = false, i++; 

		// If this character is in a comment, ignore it 
		else if (s_cmt || m_cmt) 
			continue; 

		// Check for beginning of comments and set the approproate flags 
		else if (prgm[i] == '/' && prgm[i+1] == '/') 
			s_cmt = true, i++; 
		else if (prgm[i] == '/' && prgm[i+1] == '*') 
			m_cmt = true, i++; 

		// If current character is a non-comment character, append it to res 
		else res += prgm[i]; 
	} 
	return res; 
} 

// Driver program to test above functions 
int main() 
{ 
	string prgm = 
// int main()
// {
// //  string s;
// //  int a,e,i,o,u;
// //  cin>>s;
// //  int slen=s.length();
// // int count=0;
// // for(int i;i<slen;i++)
// // {
// //     if (s[i]==a || s[i]==e || s[i]==i ||s[i]==o ||s[i]==u )
// //     {
// //         count+=1;

// //     }

// // }

// string s;
// cin>>s;
// int slen=s.length();

// int a=0,b=0,c=0,d=0,e=0,g=0,h=0,k=0,l=0,m=0;

// for(int i=0;i<slen;i++)

// {
// if (s[i]=='1')
// {
//     a++;
// }
// else if(s[i]=='2')
// {
//     b++;
// }

// else if(s[i]=='3')
// {
//     c++;
// }

// else if(s[i]=='4')
// {
//     d++;
// }

// else if(s[i]=='5')
// {
//     e++;
// }

// else if(s[i]=='6')
// {
//     g++;
// }

// else if(s[i]=='7')
// {
//     h++;
// }

// else if(s[i]=='8')
// {
//     k++;
// }
// else if(s[i]=='9')
// {
//     l++;
// }

// else if(s[i]=='0')
// {
//     m++;
// }
// else
// {
//     /* code */
// }



// }


// // for(int j=0;j<10;j++)
// // {
// //     cout<<j<<
// // }
// cout<<0<<" "<<m<<endl;
// cout<<1<<" "<<a<<endl;
// cout<<2<<" "<<b<<endl;
// cout<<3<<" "<<c<<endl;
// cout<<4<<" "<<d<<endl;
// cout<<5<<" "<<e<<endl;
// cout<<6<<" "<<g<<endl;
// cout<<7<<" "<<h<<endl;
// cout<<8<<" "<<k<<endl;
// cout<<9<<" "<<l<<endl;

// }

	cout << "Given Program \n"; 
	cout << prgm << endl; 
	cout << " Modified Program "; 
	cout << removeComments(prgm); 
	return 0; 
}
