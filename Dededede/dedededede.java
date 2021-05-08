package Dededede;

import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;

public class dedededede {
    public static void main(String[] args) {
        //1.准备牌
        //定义一个存储54张牌的ArrayList集合
        ArrayList<String> poker = new ArrayList<>();
        //定义两个数组，一个存储牌的花色，另一个存储牌的序号
        String[] colors = {"♥", "♠", "♣", "♦"};
        String[] numbers = {"2", "A", "K", "Q", "J", "10", "9", "8", "7", "6", "5", "4", "3"};
        //先把大王小王存到集合里面
        poker.add("大王");
        poker.add("小王");
        //循环嵌套遍历两个数组，组装52张牌
        for (String number : numbers) {
            for (String color : colors) {
                //把组装好的牌存到集合里面
                poker.add(color + number);
            }
        }
        //2.洗牌
        Collections.shuffle(poker);

        /*
        3.发牌
            定义四个集合，存储玩家的牌和底牌
         */
        ArrayList<String> p1 = new ArrayList<>();
        ArrayList<String> p2 = new ArrayList<>();
        ArrayList<String> p3 = new ArrayList<>();
        ArrayList<String> dipai = new ArrayList<>();

        /*
        遍历poker集合，获取每一张牌
        使用poker集合给每个玩家发牌，剩余三张给底牌
         */
        for (int i = 0; i < poker.size(); i++) {
            //获取每一张牌
            String p = poker.get(i);

            if (i >= 51) {
                dipai.add(p);
            } else if (i % 3 == 0) {
                p1.add(p);
            } else if (i % 3 == 1) {
                p2.add(p);
            } else if (i % 3 == 2) {
                p3.add(p);
            }
        }
        //4.看牌
        System.out.println("卢本伟" + p1);
        System.out.println("大司马" + p2);
        System.out.println("PDD" + p3);
        System.out.println("底牌" + dipai);
    }
}
