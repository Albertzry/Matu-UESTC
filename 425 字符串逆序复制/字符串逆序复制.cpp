#include<iostream>
#include<cstring>

using namespace std;
const int MAX = 100;

int main(void)
{
    char str1[MAX];
    cin >> str1;
    int len = strlen(str1);
    char str2[MAX];
    	int i = 0; 	while (i < len) { 		str2[i] = str1[len - i - 1]; 		i++; 	} 	str2[i] = '\0';
    cout << str2;

    return 0;
}
