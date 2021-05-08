package keyword.Static;

public class use1 {
    public static void main(String[] args) {
        student one = new student("zzx", 18);
        one.room = "666";
        System.out.println("姓名：" + one.getName() + "，年龄：" + one.getAge() + "，班级：" + one.room + "，学号：" + one.getId());

        student two = new student("ztd", 18);
        System.out.println("姓名：" + two.getName() + "，年龄：" + two.getAge() + "，班级：" + two.room + "，学号：" + two.getId());
    }
}
