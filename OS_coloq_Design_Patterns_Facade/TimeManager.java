public class TimeManager {
    private boolean isWorkingDay;

    public boolean isWorkingDay() {
        return isWorkingDay;
    }

    public void startWorkingDay() {
        System.out.println("Working day is started...");
        isWorkingDay = true;
    }

    public void finishWorkingDay() {
        System.out.println("Working day is finished...");
        isWorkingDay = false;
    }
}
