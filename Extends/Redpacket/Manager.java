package Extends.Redpacket;

import java.util.ArrayList;

public class Manager extends User {
    public Manager() {

    }

    public Manager(String name, int money) {
        super(name, money);
    }

    public ArrayList<Integer> send(int totalMoney, int count) {
        ArrayList<Integer> redlist = new ArrayList<>();

        int myMoney = super.getMoney();
        //判断群主的余额是否不足，若不足则返回空列表
        if (totalMoney > myMoney) {
            System.out.println("余额不足！！");
            return redlist;
        } else {
            super.setMoney(myMoney - totalMoney);//让群主的余额减去发的钱数

            int avg = totalMoney / count;
            int mod = totalMoney % count;

            for (int i = 0; i < count - 1; i++) {
                redlist.add(avg);
            }

            redlist.add(avg + mod);
            return redlist;
        }
    }
}
