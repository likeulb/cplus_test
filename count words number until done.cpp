//using char array to read words, and count the number of words which are separated by space
//if the word is "done", the program also stops and return the number of words before "done"

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