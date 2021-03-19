package ArrayList;

import java.util.ArrayList;

public class Use {
    public static void main(String[] args) {
        ArrayList<String> list = new ArrayList<>();//储存字符串类型的数据

        list.add("zzx");//添加一个数据
        System.out.println(list);//[zzx]
        list.add("zm");
        list.add("ztd");
        System.out.println(list);//[zzx, zm, ztd]

        String name = list.get(0);//获取ArrayList当中的0号元素
        System.out.println(name);//zzx

        String a = list.remove(1);//删除第一号元素,并将这个元素赋值给a
        String b = list.remove(1);
        System.out.println(list);//[zzx]
        System.out.println("被删除的是" + a + "和" + b);//被删除的是zm和ztd

        int size = list.size();//获取ArrayList的长度
        System.out.println("长度为：" + size);//长度为：2

        //遍历ArrayList
        for (int i = 0; i < list.size(); i++) {
            System.out.println(list.get(i));
        }

        ArrayList<Integer> list1 = new ArrayList<>();//储存基本类型的数据（如整型）
        list1.add(123);
        System.out.println(list1);//[123]
    }
}
