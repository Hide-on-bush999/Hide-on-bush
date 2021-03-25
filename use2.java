package String;

import java.util.Scanner;
/*
判断输入的字符串当中各种类型的字符串的个数
 */

public class use2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("请输入一个字符串：");
        String a = sc.next();

        int a1 = 0;//大写字母
        int a2 = 0;//小写字母
        int a3 = 0;//数字
        int a4 = 0;//其它符号

        char[] b = a.toCharArray();
        for (int i = 0; i < b.length; i++) {
            if ('A' <= b[i] && b[i] <= 'Z') {
                a1++;
            } else if ('a' <= b[i] && b[i] <= 'z') {
                a2++;
            } else if ('0' <= b[i] && b[i] <= '9') {
                a3++;
            } else {
                a4++;
            }
        }

        System.out.println("大写字母有" + a1 + "个");
        System.out.println("小写字母有" + a2 + "个");
        System.out.println("数字有" + a3 + "个");
        System.out.println("其他符号有" + a4 + "个");
    }
}
