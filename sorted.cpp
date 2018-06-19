#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n,j=0,k=0,count=0,dn=0,up=0;
    cout <<"Enter the length of the numbers and press enter and then right the unsorted numbers with the space and press enter \n";
    cin>>n;
    vector<int> s;
    int* A=new int[n+2]; 
    A[0]=0;                        
    for(int i=1 ; i<=n; i++){
        cin>>A[ i ];           
    }
    A[n+1]=1000001;       

    for(int i=1 ; i<=n-1 ; i++){        
         if(A[ i ]>A[ i+1] ){
                if(count==0){j=i ;count++ ;break ;
        }    
     }}
    for(int i=n ; i>j-1 ;i--){
       if(A[i]<A[i-1]){              
               if(count==1){              
                          k=i ; dn++ ; s.push_back(i);
               } 
                if(A[ i ]<A[ i+1] && count>1){
                         dn++ ; s.push_back(i); 
                } 
                count++;   
}
            
         if(A[ i ]>A[ i+1 ] && A[ i ]>A[ i-1]){
                up++; s.push_back(i);       
         } 
    }

     if(count==0){cout<<"yes";}     
     else if(n==2)
	{
            if(A[1]>A[2])cout<<"yes"<<endl<<"swap "<<1<<" "<<2;  
         
        }
    else if(A[ j ]<A[ k+1] && A[ k]>A[ j-1] && ((s.size()==4 &&s[0]-s[1]==1 && s[2]-s[3]==1)|| (s.size()==2 && s[0]-s[1]==1)) ) {
                cout<<"yes"<<endl<<"swap "<<j<<" "<<k; 
    }   
   else if(A[ j ]<A[k+1] && A[k]>A[ j-1]  &&  count==(k-j+1))
                cout<<"yes"<<endl<<"reverse "<<j<<" "<<k;

            
        else cout<<"no";
	cout <<"\n";
    
    return 0;
}
