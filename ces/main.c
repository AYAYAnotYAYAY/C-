#include <stdio.h>
#include <stdlib.h>

int main()
{
    //伤害、伤害的增加值、 攻击距离
    //
    double attach = 57.88;   //伤害值
    double attachAdd = 4.5;   //伤害增加的值
    int attachRange = 172;   //攻击距离

    printf("名称：德玛西亚之力·盖伦\n");
    printf("伤害：%.2lf(+%.1lf)\t攻击距离：%d\n",attach,attachAdd,attachRange);


    return 0;
}
