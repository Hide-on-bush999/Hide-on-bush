package keyword.Static;

public class student {
    private String name;
    private int age;
    private int id;
    static String room;
    private static int idCounter = 0;

    public student() {
        this.id = ++idCounter;
    }

    public int getId() {
        return id;
    }

    public static String getRoom() {
        return room;
    }

    public static void setRoom(String room) {
        student.room = room;
    }

    public void setId(int id) {
        this.id = id;
    }

    public student(String name, int age) {
        this.name = name;
        this.age = age;
        this.id = ++idCounter;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }
}
