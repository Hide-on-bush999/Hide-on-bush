package Scanner;

import java.util.Scanner;//使用Scanner的必要条件

public class Use {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);//使用Scanner的必要条件
        int a = in.nextInt();//输入一个整数作为a
        String b = in.next();//输入一个字符或字符串作为b
        System.out.println(a);
        System.out.println(b);
    }
}
