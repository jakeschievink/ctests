#include <stdio.h>

int scanit(int ss[5][2], int check[2]){
    for(int i=0; i<5; ++i){
        printf("\n%d\n", ss[i][1]);
        return ((check[0] >= ss[i][0] && check[0] <= ss[i][0] + ss[i][1]) ||
          (check[0]+check[1] >= ss[i][0] && check[0]+check[1] <= ss[i][0]+ss[i][1] ));
    }
}
int main(){
    int sampStruct[5][2] = { { 1,3 }, { 4,6 }, { 10,24 }, {20, 2}, {22,1}};
    int tt[2] = {10,3};
    printf("%lu", sizeof(sampStruct)/sizeof(sampStruct[0]));
    int i = scanit(sampStruct, tt);
    printf("%d", i);
    return 0;
}
