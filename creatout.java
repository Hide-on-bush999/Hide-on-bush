package array;

public class creatout {
    public static void main(String[] args) {
        int[] a = new int[5];//动态初始化一个数组
        int[] b = new int[]{1, 3, 5, 7, 9};//静态初始化一个数组
        int[] c = {2, 4, 6, 8, 10};//静态初始化数组的省略形式
        int len_a = a.length;//获取数组a的长度
        int len_b = b.length;//获取数组b的长度
        int len_c = c.length;//获取数组c的长度
        //给数组a赋值
        for (int i = 0; i < len_a; i++) {
            a[i] = 9;
        }
        //遍历输出数组a
        for (int i = 0; i < len_a; i++) {
            System.out.println(a[i]);
        }
        System.out.println("----------");
        //遍历输出数组b
        for (int i = 0; i < len_b; i++) {
            System.out.println(b[i]);
        }
        System.out.println("----------");
        //遍历输出数组c
        for (int i = 0; i < len_c; i++) {
            System.out.println(c[i]);
        }
    }
}
