#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "ENTER NUMBER OF STUDENT:";
    cin >> n;
    int arr[n][5],sum[n]={},avg[5]={};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "ENTER MARKS OF " << i+1 << "th STUDENT IN "
                 << j+1 << "th SUBJECT:";
            cin >> arr[i][j];
            sum[i]+=arr[i][j];
            avg[j]+=arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "MARKS OF " << i+1 << "th STUDENT IN "
                 << j+1 << "th SUBJECT:";
            cout << arr[i][j]<<endl;
        }
        cout<<"SUM OF MARKS OF STUDENT "<<i+1<<"th IS:"<<sum[i]<<endl;
    }
    for(int j=0;j<5;j++){
        cout<<"AVERAGE OF SUBJECT "<<j+1<<"th IS:"<<avg[j]/n<<endl;
    }
}

