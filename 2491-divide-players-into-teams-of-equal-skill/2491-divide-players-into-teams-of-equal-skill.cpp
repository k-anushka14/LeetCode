class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        int left=0;
        int right=skill.size()-1;
        long long chemistry=0;
        int targetskill=skill[left]+skill[right];
        while(left<right){
            if(skill[left]+skill[right]!=targetskill){
                return -1;
            }
        chemistry+=skill[left]*skill[right];
        left++;
        right--;
        
        }
        return chemistry;
    }
};