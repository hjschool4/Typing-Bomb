import java.time.Instant;

public class bomb {
    public static void Main() {
        while (true) {
            Long seconds = Instant.now().getEpochSecond();
            System.out.println(seconds);
            if (seconds % 15 == 0) {
                System.out.println("Boom");
                System.out.println("a"/4);
            }
            Thread.sleep(1000);
        }
    }
}