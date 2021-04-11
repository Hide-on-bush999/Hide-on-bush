package Extends.Redpacket;

import java.util.ArrayList;

public class use {
    public static void main(String[] args) {
        Manager m = new Manager("群主", 100);

        Member one = new Member("A", 0);
        Member two = new Member("B", 0);
        Member three = new Member("C", 0);

        m.show();
        one.show();
        two.show();
        three.show();
        System.out.println("----------------");
        ArrayList<Integer> redList = m.send(20,3);
        one.receive(redList);
        two.receive(redList);
        three.receive(redList);
        m.show();
        one.show();
        two.show();
        three.show();
    }
}
