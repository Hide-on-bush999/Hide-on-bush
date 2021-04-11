package Math;

//计算-10.8到5.9之间，绝对值大于6或小于2.1的有几个整数

public class practice {
    public static void main(String[] args) {
        int n = 0, i = 0, d = 6;
        double a = -10.8, c = 2.1;
        double b[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        for (a = -10.8; a < 5.9; a++) {
            b[i] = Math.abs(a);
            i++;
        }
        for (int i1 = 0; i1 < i; i1++) {
            if (b[i1] < 2.1 || b[i1] > 6) {
                n++;
            }
        }
        System.out.println(n);
    }
}
