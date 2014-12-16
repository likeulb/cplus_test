#include <iostream>
#include <vector>
#include <cstring>
#include <array>
using namespace std;


int main(){
   
    const int A_SIZE = 10;
    char ch;
    int count = 0;
    cout<<"Enter words: "<<endl;
    int i;
    bool done = false;
    cin.get(ch);
    
    while(!done ){
    
        i=0;
        char input[A_SIZE];
        while (ch!=' '&& ch!='\n')
        {
        input[i]=ch;
        i++;
        cin.get(ch);
        }
        input[i]='\0';
       // cout<<input<<endl;
        if (ch=='\n'){
            done=true;
            count++;}
        else
        {
            if (strcmp(input, "done")==0)
                done=true;
            else{
                count++;
                cin.get(ch);
                }
        }
        
    }
    
    
    
    cout<<count<<endl;
        
    
   
    return 0;
}