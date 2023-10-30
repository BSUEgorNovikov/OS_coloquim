public class Developer {
    public void doWorkDuringDay(TimeManager timeManager) {
        if (timeManager.isWorkingDay()) {
            System.out.println("Developer is solving problems...");
        } else {
            System.out.println("Developer is chilling...");
        }
    }
}
