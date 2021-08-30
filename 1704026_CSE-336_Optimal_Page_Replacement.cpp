// MD. Ashiqur Rahman
#include<bits/stdc++.h>
using namespace std;


int search(vector<int> frame,int page,int pos){
    for(int i = 0;i < frame.size();i ++){
        if(frame[i] == page)
            return 1;
    }
    return 0;
}

int main(){
    int pagenum,framenum;
    cin >> pagenum >> framenum;
    int prc[pagenum];
    for(int i = 0;i < pagenum;i ++)
        cin >> prc[i];
    vector<int> frame;
    int miss = 0,hit = 0;
    for(int i = 0;i < framenum && i < pagenum;i ++){
        frame.push_back(prc[i]);
        miss ++;
    }
    for(int i = framenum;i < pagenum;i ++){
        if(search(frame,prc[i],i))
            hit ++;
        else{
            miss ++;
            int pos = -1;
            int lngdst = 0;
            int chk[pagenum];
            memset(chk,0,sizeof(chk));
            for(int j = i + 1;j < pagenum;j ++){
                for(int k = 0;k < frame.size();k ++){
                    if(prc[j] == frame[k] && !chk[k]){
                        chk[k] = j;
                        break;
                    }
                }
            }
            for(int j = 0;j < frame.size();j ++){
                if(chk[j] == 0){
                    pos = j;
                    break;
                }
                else if(lngdst < chk[j])
                    pos = j,lngdst = chk[j];
            }
            frame[pos] = prc[i];
            // cout << pos << " ";
        }
    }
    double mr,hr;
    mr = ((miss * 1.0) / pagenum);
    hr = (hit * 1.0) / pagenum;
    cout <<"Miss  "<< miss << " " << "  And Miss Ratio  " << mr << "\nHit  " << hit << "  And Hit Ratio  " << hr << "\n";

    return 0;
}