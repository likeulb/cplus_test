//using char array to read words
//count the number of words with vowel, consonantes or others, quit after entering q


#include <iostream>
#include <vector>
#include <cstring>
#include <array>
using namespace std;


int main(){
   
    char in[10];
    int vowel=0;
    int other=0;
    int con=0;
    
    cout<<"Enter words "<<endl;
    
    while (cin>>in && strcmp (in,"q"))
    {
        if(!isalpha(in[0]))
        {
            other++;
        }
        else
        {tolower(in[0]);
            if (in[0]=='a'||in[0]=='e'||in[0]=='i'||in[0]=='o'||in[0]=='u')
            vowel++;
            else con++;
        }
    }
    
    cout<<vowel<<endl;
    cout<<con<<endl;
    cout<<other<<endl;
        
    
   
    return 0;
}


