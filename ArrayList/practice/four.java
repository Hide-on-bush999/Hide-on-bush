package ArrayList.practice;

import java.util.ArrayList;
import java.util.Random;

public class four {
    public static void main(String[] args) {
        ArrayList<Integer> list = new ArrayList();
        Random b = new Random();
        for (int i = 0; i < 20; i++) {
            int a = b.nextInt(50);
            list.add(a);
        }
        System.out.println(list);
        System.out.println("--------------");
        ArrayList list1 = new ArrayList();
        for (int i = 0; i < list.size(); i++) {
            if (list.get(i) % 2 == 0) {
                list1.add(list.get(i));
            }
        }
        System.out.println(list1);
    }
}
