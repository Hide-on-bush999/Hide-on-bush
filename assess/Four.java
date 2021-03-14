package assess;

public class Four {
    public static void main(String[] args) {
        int[] a = new int[]{0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
        int len = 1;
        for (int i = 1; i < a.length; i++) {
            a[len] = a[i];
            if (a[len] != a[len - 1]) {
                len++;
            }
        }
        for (int i = 0; i < len; i++) {
            System.out.println(a[i]);
        }
    }
}
