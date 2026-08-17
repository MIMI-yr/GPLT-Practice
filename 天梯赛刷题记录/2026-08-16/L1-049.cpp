#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    vector<int> M(N);
    int maxM=0;
    for(int i=0;i<N;i++)
    {
        cin>>M[i];
        maxM=max(maxM,M[i]);
    }
    // ans[i][j][k]
    // i：第i所学校
    // j：第j支队伍
    // k：这支队伍的第k个人
    vector<vector<vector<int>>> ans(N);
    for(int i=0;i<N;i++)
    {
        ans[i].resize(M[i]);
        for(int j=0;j<M[i];j++)
        {
            ans[i][j].resize(10);
        }
    }
    //pos 管这一轮从哪里开始，
    // rank 管这一轮学校之间错开多少，
    // step 管同一支队伍内部每个人之间隔多少。
    int pos=1;
    for(int j=0;j<maxM;j++)
    {
        int cnt=0;
        for(int i=0;i<N;i++)
        {
            if(j<M[i])cnt++;//算步长
        }
        // 正常情况下步长就是学校数量
        // 只剩一所学校时，要隔位坐，所以步长为2
        int step=max(cnt,2);
        int rank=0;
        if(cnt==1)rank=1;
        for(int i=0;i<N;i++)
        {
            if(j>=M[i])continue;
            for(int k=0;k<10;k++)
            {
                ans[i][j][k]=pos+rank+step*k;
            }
            rank++;
        }
        pos+=10*step;
    }
    for(int i=0;i<N;i++)
    {
        cout<<"#"<<i+1<<endl;
        for(int j=0;j<M[i];j++)
        {
            for(int k=0;k<10;k++)
            {
                if(k)cout<<" ";
                cout<<ans[i][j][k];
            }
            cout<<endl;
        }
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int loc = 0;
    vector<vector<int>> ans(n);
    int cnt = n;
    for (int i = 1; cnt != 0; i++) {
        if (cnt == 1) {
            for (int k = i; ans[loc].size() != a[loc] * 10; k += 2) {
                ans[loc].push_back(k);
            }
            break;
        }
        ans[loc].push_back(i);
        if (ans[loc].size() == a[loc] * 10) {
            cnt--;
        }
        loc = (loc + 1) % n;
        while (ans[loc].size() == a[loc] * 10 and cnt != 0) {
            loc = (loc + 1) % n;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << "#" << i + 1 << endl;
        int flag = 0;
        for (int j = 0; j < ans[i].size(); j++) {
            if (j != 0 and j % 10 == 0) {
                cout << endl;
                flag = 0;
            }
            if (flag)
                cout << " ";
            cout << ans[i][j];
            flag = 1;
        }
        cout << endl;
    }
    return 0;
}