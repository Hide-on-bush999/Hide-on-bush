package keyword.Throw;

public class use1 {
    public static void main(String[] args) {
        int[] arr = new int[4];
        int e = get(arr, 3);
        System.out.println(e);
    }

    public static int get(int[] arr, int d) {
        if (arr == null) {
            throw new NullPointerException("传递的数组的值是null");
        }

        if (d < 0 || d > arr.length - 1) {
            throw new ArrayIndexOutOfBoundsException("数组的索引超出了数组的使用范围");
        }

        int ele = arr[d];
        return ele;
    }
}
