package Random;
//生成一个随机数

import java.util.Random;

public class use {
    public static void main(String[] args) {
        Random r = new Random();
        int a = r.nextInt();//生成任意范围的随机数
        int b = r.nextInt(6);//代表随机生成[0,6)之间的数
        System.out.println(a);
        System.out.println(b);
    }
}