#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main() {
    int chd;
    bool nocha = false;
    string doChar,mode,onString,mString;
    vector<string> packageList,reList;
    cin >> doChar;
    //分割字符串
    for(int i = 0;i <= doChar.length();i++) {
        if(doChar[i] == ',' || i == doChar.length() - 1) {
            i++;
            if(i == doChar.length()) onString = onString + doChar[doChar.length() - 1];
            packageList.push_back(onString);
            onString = "";
        }
        onString = onString + doChar[i];
    }
    reList = packageList;
    //替换*
    for(int i = 0;i < reList.size();i++) {
        for(int j = 0;j < reList[i].length();j++) {
            if(packageList[i][j] != '-') reList[i][j] = '*' ;
            else reList[i][j] = '-';
        }
    }
    while(true) {
        //退出判断
        for(int i = 0;i < reList.size();i++) {
            for(int j = 0;j < reList[i].length();j++) {
                if(reList[i].find('*') == reList[i].npos) nocha = true;
                else nocha = false; break;
            }
        }
        if(nocha) goto FINISH;
        for(int i = 0;i < reList.size();i++) {
            printf("%d.%s\n",i+1,reList[i].c_str());
        }
        cin >> mode >> doChar;


        if(mode[0] == 'o') {
            for(int i = 0;i < packageList.size();i++) {
                for(int j = 0;j < packageList[i].length();j++) {
                    if(packageList[i][j] == doChar[0]) reList[i][j] = packageList[i][j];
                }
            }
        }
        if(mode[0] == 'g') {
            mString = "";
            for(int i = 0;i < doChar.find('.');i++) {
                mString = mString + doChar[i];
            }
            sscanf(mString.c_str(),"%i",&chd);
            mString = "";
            for(int i = doChar.find('.') + 1;i < doChar.length();i++) {
                mString = mString + doChar[i];
            }
            if(mString == packageList[chd-1]) reList[chd-1] = mString;
        }
    }
    FINISH:
    printf("Finish!\n");
    return 0;
}
