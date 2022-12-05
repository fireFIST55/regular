#include<bits/stdc++.h>
using namespace std;

struct student_info{
    int id;
    string name;
};

int main(void){
    int n = 8, a = 5, b = 3;
    struct student_info si[8];
    for(int i = 0; i < n; i += 1){
        cin >> si[i].id; getchar();
        getline(cin, si[i].name);
    }

    int index, ptr_ar[3] = {0, 5, n};
    char ch; cin >> ch;
    if(ch == 'A') index = 0;
    else index = 1;

    for(int i = ptr_ar[index]; i < ptr_ar[index + 1]; i += 1){
        for(int j = i + 1; j < ptr_ar[index + 1]; j += 1){
            if(si[i].id > si[j].id) swap(si[i], si[j]);
        }
    }

    for(int i = ptr_ar[index]; i < ptr_ar[index + 1]; i += 1){
        cout << si[i].id << " "<< si[i].name << endl;
    }

    return 0;
}
