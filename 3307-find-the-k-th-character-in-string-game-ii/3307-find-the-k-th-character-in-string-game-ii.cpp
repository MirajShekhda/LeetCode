#define ll long long
class Solution {
public:
    char kthCharacter(long long k, vector<int>& ops) {
        ll mask = 0;
        for(int i=0; i<min(63,(int)ops.size()); i++){
            mask |= (1ll * ops[i]<<i);
        }
        ll cnt = ( __builtin_popcountll(mask&(k-1)))%26;
        return 'a'+ cnt;
    }
};