class TimeManagement {
    int hours;
    int minutes;
    int seconds;

    TimeManagement(int hours, int minutes, int seconds) {
        this.hours = hours;
        this.minutes = minutes;
        this.seconds = seconds;
    }

    TimeManagement(int hours, int minutes) {
        this.hours = hours;
        this.minutes = minutes;
    }

    TimeManagement(int hours) {
        this.hours = hours;
    }

    void add(int hours, int minutes, int seconds) {
        this.hours += hours;
        this.minutes += minutes;
        this.seconds += seconds;
    }

    void add(int hours, int minutes) {
        this.hours += hours;
        this.minutes += minutes;
    }

    void add(int hours) {
        this.hours += hours;
    }

    void subtract(int hours, int minutes, int seconds) {
        this.hours -= hours;
        this.minutes -= minutes;
        this.seconds -= seconds;
    }

    void subtract(int hours, int minutes) {
        this.hours -= hours;
        this.minutes -= minutes;
    }

    void subtract(int hours) {
        this.hours -= hours;
    }

    
}
public class anu{
    public static void main(String[] args) {
        
        TimeManagement t = new TimeManagement(10, 30, 45);
        t.add(2, 15, 30);
        System.out.println("Time after adding 2 hours, 15 minutes, and 30 seconds: " + t.hours + " hours " + t.minutes + " minutes " + t.seconds + " seconds");
        t.subtract(1, 10, 15);
        System.out.println("Time after subtracting 1 hour, 10 minutes, and 15 seconds: " + t.hours + " hours " + t.minutes + " minutes " + t.seconds + " seconds");

        TimeManagement t2 = new TimeManagement(10, 30);
        t2.add(2, 15);
        System.out.println("Time after adding 2 hours and 15 minutes: " + t2.hours + " hours " + t2.minutes + " minutes");
        t2.subtract(1, 10);
        System.out.println("Time after subtracting 1 hour and 10 minutes: " + t2.hours + " hours " + t2.minutes + " minutes");

        TimeManagement t3 = new TimeManagement(10);
        t3.add(2);
        System.out.println("Time after adding 2 hours: " + t3.hours + " hours");
        t3.subtract(1);
        System.out.println("Time after subtracting 1 hour: " + t3.hours + " hours");

    }
}