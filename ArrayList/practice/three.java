package ArrayList.practice;

import java.util.ArrayList;

public class three {
    public static void main(String[] args) {
        ArrayList<String> list = new ArrayList<>();
        list.add("zzx");
        list.add("zm");
        list.add("ztd");
        System.out.println(list);
        System.out.println("-----------");
        System.out.print("{" + list.get(0));
        for (int i = 1; i < list.size(); i++) {
            System.out.print("@" + list.get(i));
        }
        System.out.println("}");
    }
}
