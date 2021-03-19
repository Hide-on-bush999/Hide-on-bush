package ArrayList.practice;

import java.util.ArrayList;

public class two {
    public static void main(String[] args) {
        ArrayList<Student> list = new ArrayList<>();
        Student a = new Student("zzx", 18);
        Student b = new Student("zm", 18);
        Student c = new Student("ztd", 18);
        list.add(a);
        list.add(b);
        list.add(c);
        for (int i = 0; i < list.size(); i++) {
            System.out.println("姓名：" + list.get(i).name + ",年龄：" + list.get(i).age);
        }
    }
}
