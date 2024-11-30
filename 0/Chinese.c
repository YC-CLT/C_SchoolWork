#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define 卷帝 "李hj"
#define 卷王 "胡tx"
#define 杨和卷 "杨hj"
#define 一卷 "邹xxx"
#define 组织 "3R"

#define 整 int
#define 浮 double
#define 符 char

#define 出 printf
#define 出串 puts
#define 入 scanf
#define 入串 gets
#define 换行 puts("")
#define 入符 getchar
#define 出符 putchar


#define 对 for
#define 若 if
#define 否则 else
#define 适 while
#define 断 break
#define 续 continue
#define 迁 switch
#define 报 case


#define 同 ==
#define 异于 !=
#define 大于 >
#define 小于 <
#define 大于等于 >=
#define 小于等于 <=
#define 为 =


#define 长 strlen
#define 摹 strcpy
#define 接 strcat
#define 搜 strchr
#define 替 strstr
#define 度 strcmp
#define 反 strrev

#define 开辟内存 malloc
#define 释放内存 free
#define 系统调用 system
#define 缓 system("title 整活 & pause")

#define 真 1
#define 假 0
#define 空 0

#define 主函数 main

#define 零 0
#define 壹 1
#define 贰 2
#define 叁 3
#define 肆 4
#define 伍 5
#define 陆 6
#define 柒 7
#define 捌 8
#define 玖 9
#define 拾 10
#define 佰 100
#define 仟 1000
#define 万 10000
#define 亿 100000000
#define 兆 1000000000000



整 主函数(){
    出串("此程序者，整活也");
    缓;
    出串(卷帝);
    出串(卷王);
    出串(杨和卷);
    出串(一卷);
    符 甲[伍]={零};
    符 乙[伍]="子";
    符 丙[伍]="丑";
    符 丁[伍]="寅";
    符 戊[伍]="卯";
    适((出串("回车以始，唱跳rap篮球+z以终")),(入符() 异于 EOF) ){
        出串("一中者，孰卷之至也？请键入地支，各曰:  子：卷帝  丑：卷王（4班）  寅：杨和卷  卯：一卷");
        入("%s",甲);
        若 (度(甲,乙) 同 零 ){
            出串("善哉，诚如是也！");
            断;
        }
        否则 若 (度(甲,丙) 同 零)
            出串("此二者卷力不分上下，伯仲难辨。请再酌，三思以求正解！");
        否则 若 (度(甲,丁) 同 零)
            出串("虽卷而不及先者也，请再酌，三思以求正解！");
        否则 若 (度(甲,戊) 同 零)
            出串("否，斯人诚不卷也，为摆王。请再酌，三思以求正解！");
        否则
            出串("汝入之符非人哉！");
        缓;
    }
    出串("恭喜");
    缓;
    出("其人皆属%s也。\n",组织);
    缓;
    出串("虽曲终人散，时过境迁，而人未尝夺其卷志也。");
    缓;
    出串("帝之卷，永无终也。");
    缓;
}