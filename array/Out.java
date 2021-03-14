package array;

import java.util.Arrays;

public class Out {
    public static void main(String[] args) {
        int[] a = {1, 2, 3, 4};
        int len = a.length;
        System.out.print("[");
        for (int i = 0; i < len; i++) {
            if (i == len - 1) {
                System.out.println(a[i] + "]");
            }else{
                System.out.print(a[i] + ", ");
            }
        }
        System.out.println("----分割线----");
        System.out.println(Arrays.toString(a));
        //直接利用JDK内部封装的Array类当中的toString方法来实现我们想要的结果，这就是面向对象的思想
    }
}
