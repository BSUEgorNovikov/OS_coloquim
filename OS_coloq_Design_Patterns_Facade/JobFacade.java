public class JobFacade {
    Job job = new Job();
    TimeManager timeManager = new TimeManager();
    Developer developer = new Developer();

    public void solveProblems() {
        job.doWork();
        timeManager.startWorkingDay();
        developer.doWorkDuringDay(timeManager);
    }

    public void chill() {
        job.doWork();
        timeManager.finishWorkingDay();
        developer.doWorkDuringDay(timeManager);
    }
}
