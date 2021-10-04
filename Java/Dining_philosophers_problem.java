public class DiningPhilosophers2 {
 
    private static Random random = new Random(System.currentTimeMillis());
 
    private Semaphore[] forks = new Semaphore[5];
 
    public DiningPhilosophers2() {
        forks[0] = new Semaphore(1);
        forks[1] = new Semaphore(1);
        forks[2] = new Semaphore(1);
        forks[3] = new Semaphore(1);
        forks[4] = new Semaphore(1);
    }
 
    public void lifecycleOfPhilosopher(int id) throws InterruptedException {
 
        while (true) {
            contemplate();
            eat(id);
        }
    }
 
    void contemplate() throws InterruptedException {
        Thread.sleep(random.nextInt(500));
    }
 
    void eat(int id) throws InterruptedException {
 
        // We randomly selected the philosopher with
        // id 3 as left-handed. All others must be
        // right-handed to avoid a deadlock.
        if (id == 3) {
            acquireForkLeftHanded(3);
        } else {
            acquireForkForRightHanded(id);
        }
 
        System.out.println("Philosopher " + id + " is eating");
        forks[id].release();
        forks[(id + 1) % 5].release();
    }
 
    void acquireForkForRightHanded(int id) throws InterruptedException {
        forks[id].acquire();
        forks[(id + 1) % 5].acquire();
    }
 
    // Left-handed philosopher picks the left fork first and then
    // the right one.
    void acquireForkLeftHanded(int id) throws InterruptedException {
        forks[(id + 1) % 5].acquire();
        forks[id].acquire();
    }
}