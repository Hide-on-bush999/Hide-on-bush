package ArrayList.practice;

import java.util.ArrayList;
import java.util.Random;

public class one {
    public static void main(String[] args) {
        Random a = new Random();
        ArrayList<Integer> list = new ArrayList<>();
        int n = a.nextInt(10);
        list.add(n);//向ArrayList中添加一个随机数
        for (int i = 0; i < 6; i++) {
            int z = a.nextInt(15);
            list.add(z);
        }
        System.out.println(list);
    }
}
