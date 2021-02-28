package method;

public class Way3 {
    public static void main(String[] args) {
        int a = 1, b = 2, c = 3, d = 4;
        System.out.println(sum(a, b));
        System.out.println(sum(a, b, c));
        System.out.println(sum(a, b, c, d));
    }

    public static int sum(int a, int b) {
        return a + b;
    }

    public static int sum(int a, int b, int c) {
        return a + b + c;
    }

    public static int sum(int a, int b, int c, int d) {
        return a + b + c + d;
    }
}
