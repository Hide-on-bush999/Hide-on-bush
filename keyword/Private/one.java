package keyword.Private;

public class one {
    String name;

    //写上private后无法再这个类之外直接访问age这个变量，只能通过set和get来间接访问，这样可以通过在set方法中设置条件判断来提高代码的安全性
    private int age;

    public void show() {
        System.out.println("我叫：" + name + ",年龄" + age);
    }

    public void setAge(int num) {
        if (num >= 100 && num <= 0) {
            System.out.println("这不合理");
        } else {
            age = num;
        }
    }
    public int getAge(){
        return age;
    }
}
