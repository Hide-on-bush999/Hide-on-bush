package keyword.Private;

public class Three {
    private String name;//姓名
    private int age;//年龄
    private boolean male;//性别（是不是男的）

    public void show() {
        System.out.println("我叫：" + name);
        System.out.println("年龄：" + age);
        System.out.println("是不是男的？" + male);
    }

    public String getName() {
        return name;
    }

    public void setName(String str) {
        name = str;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int n) {
        age = n;
    }

    //boolean类型的变量使用private关键字时应使用is的特殊情况
    public boolean isMale() {
        return male;
    }

    public void setMale(boolean b) {
        male = b;
    }
}
