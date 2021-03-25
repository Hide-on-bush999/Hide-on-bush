package String;

/*。
定义一个方法，把数组按照指定格式拼接成一个字符串
 */
public class use1 {
    public static void main(String[] args) {
        int[] a = {1, 2, 3, 4, 8, 6};
        String s = aS(a);
        System.out.println(s);
    }

    public static String aS(int[] a) {

        String s = "[";
        for (int i = 0; i < a.length; i++) {
            if (i == a.length - 1) {
                s += "world" + a[i] + "]";
            } else {
                s += "world" + a[i] + "#";
            }
        }
        return s;
    }
}
