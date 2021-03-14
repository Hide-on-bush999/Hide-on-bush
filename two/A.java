package two;

import java.util.Scanner;

public class A {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n, middle;
        int[] a = new int[101];
        int[] b = new int[101];
        while (1 < 2) {
            int e = 1;
            n = in.nextInt();
            if (n == 0) {
                break;
            }
            for (int i = 0; i < n; i++) {
                a[i] = in.nextInt();
                b[i] = in.nextInt();
            }
            for (int i = 0; i < n - 1; i++) {
                for (int j = 0; j < n - i - 1; j++) {
                    if (b[j] > b[j + 1]) {
                        middle = b[j];
                        b[j] = b[j + 1];
                        b[j + 1] = middle;
                        middle = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = middle;
                    }
                }
            }
            for (int i = 1, j = 0; i < n; ) {
                if (b[j] <= a[i]) {
                    e++;
                } else {
                    middle = b[j];
                    b[j] = b[j + 1];
                    b[j + 1] = middle;
                }
                i++;
                j++;
            }
            System.out.println(e);
        }
    }
}
