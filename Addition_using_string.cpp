#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    
    char str1[10000],str2[10000],str[10003],ch;
    int len1,len2,i,j,smaller,greater,temp,len3;
    temp = 0;
    cin>>str1>>str2;
    len1 = strlen(str1);
    len2 = strlen(str2);
    for(i=0,j=len1-1;i<j;i++,j--){
        ch = str1[i];
        str1[i] = str1[j];
        str1[j] = ch;
    }
    for(i=0,j=len2-1;i<j;i++,j--){
        ch = str2[i];
        str2[i] = str2[j];
        str2[j] = ch;
    }
    
    if(len1<len2){
        smaller = len1;
        greater = len2;
        for(i=len1;i<len2;i++){
            str1[i] = '0';
        }
    }
    else{
        smaller = len2;
        greater = len1;
        for(i=len2;i<len1;i++){
            str2[i] = '0';
        }
    }
    for(i=0;i<greater;i++){
        str[i] = (temp + (int)str1[i]-48 + (int)str2[i]-48)%10  + 48;
        temp = (temp + (int)str1[i] -48 + (int)str2[i] - 48)/10;
    }
    if(temp!=0){
        str[greater] = temp + 48;
        str[greater+1] = '\0';
    }
    else{
        str[greater] = '\0';
    }
    len3 = strlen(str);
    for(i=0,j=len3-1;i<j;i++,j--){
        ch = str[i];
        str[i] = str[j];
        str[j] = ch;
    }
    
    cout<<str<<endl;

    return 0;

}
