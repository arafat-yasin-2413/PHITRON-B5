#include <bits/stdc++.h>
using namespace std;

int main()
{
    // I don't care How much you(I) know. Just read the comments ATTENTIVELY. Reading it will help , Promise. 

    // char s1[100];
    // cin.getline(s1,100);
    // amra  character array diye space soho string input neuar somoy cin.getline(s,100) use kortam. 

    // kintu ekhon amra C++ er String Class ta shikhechi. tai ekhon getline(cin,s) use korbo. 
    


    // getline() , new line ney na.
    // tai getline diye string input neuar agee onno kichu input niye enter press korle sei enter ta geline(cin,s) niye nise.
    // tai nicher line er string ta input nite pare nai
    // ekhon solution hoilo , string er ager oi integer ta input neuar por enter ta ke ignore korar jonno getchar() ba cin.ignore() use korte hobe

    // cin , kokhono enter input ney na. tai to integer input neuar por tar nicher line a non-spaced string thakle seita input nite jhamela kore na. thikmotoi input ney


    // getline(cin,s) , hocche kono string er last er enter k input hishebe ney na. kintu ei string input neuar age jodi kono integer input neua hoy ebong oi integer ta input neuar por jei enter press kora hocche sei enter ta k input ney. tai amra emon khetre integer input neuar por getchar() ba cin.ignore() diye oi enter ta k ignore kori. 

    // Advice: String a space thaklei jeno kebol getline(cin,s) use kori. Space na thakle cin diyei perfectly kaj korbe


    string s;
    // cin >> s;
    int x;
    cin >> x;
    // getchar();
    cin.ignore();
    getline(cin, s);
    
    cout << x << endl;
    cout << s << endl;
    return 0;
}