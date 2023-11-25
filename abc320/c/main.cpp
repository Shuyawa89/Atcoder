#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define mxin(a, b) (a = max(a, b))
#define mnin(a, b) (a = min(a, b))
using vi = vector<int>;
using vvi = vector<vi>;
using vb = vector<bool>;
using vvb = vector<vb>;
using ll = long long;
using vl = vector<ll>;
using vll= vector<vl>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using si = set<int>;
using sl = set<ll>;

int main()
{
    int m;
    int s_num = 3;
	cin >> m;
    vector<string> s(s_num);
    //string s[s_num];
    vvb flag(s_num,vb(10,false));
    //入力
    rep(i,s_num){
        cin >> s[i];
        rep(j,m){
            flag[i][s[i][j] - '0'] = true;
        }
    }


    //各要素のANDを計算する
    vb andflag(10,false);
    rep(i,10){
        andflag[i] = true;
        rep(j,s_num){
            andflag[i] = andflag[i] && flag[j][i];
        }
    }

    //重なりがあるかを調べる
    int truecount = 0;
    rep(i,10){
        if(andflag[i]){
            truecount++;
        }
    }
    //無理な場合は-1を出力して終了
    if(truecount == 0){
        cout << -1 << endl;
        return 0;
    }
    else{
        cout << "重なり" << truecount << endl;
    }

    int ans = 999999;
    //重なる場合、いつ重なるかを調べる
    int andcount = 0;

    //重なった数だけループ
    rep(i,truecount){
        rep(j,10){
            //重なったときだけの処理
            if(andflag[j]){
                vvb flagindex(s_num,vb(m,false));
                //vvi flagindex[s_num];
                // 重なる場所のインデックスを取得
                rep(k,s_num){
                    rep(l,m){
                        if(s[k][l] - '0' == j){
                            flagindex[k][l] = true;
                        }
                    }
                }
                //重なったインデックスを表示
                rep(k,s_num){
                    rep(l,m){
                        cout << flagindex[k][l];
                    }
                    cout << endl;
                }
                //3つが重なる場所のみを表示
                rep(k,10){
                    vb flagindexand(m,false);
                    rep(l,s_num){
                        flagindexand[l] = flagindexand[l] && flagindex[l][k];
                    }
                    if(flagindexand[0] && flagindexand[1] && flagindexand[2]){
                        cout << k << endl;
                    }
                }

                
                //重なる場所が他と重なっていなかったら
                
            }
        }
    }

    



    return 0;
}
