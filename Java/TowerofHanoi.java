import java.io.IOException;
import java.io.InputStreamReader;
import java.io.BufferedReader;

public class TowerofHanoi
{
    public static void shift(int n, String startPole, String intermediatePole, String endPole)
    {
        if (n == 0)
        {
            return;
        }
        shift(n - 1, startPole, endPole, intermediatePole);
        System.out.println("Move \"" + n + "\" from " + startPole + " --> " + endPole);
        shift(n - 1, intermediatePole, startPole, endPole);
    }
    public static void main(String[] args)throws IOException
    {
        InputStreamReader isr= new InputStreamReader(System.in);
        BufferedReader br= new BufferedReader(isr);
        System.out.print("Enter number of discs: ");
        String st=br.readLine();
        int numberOfDiscs = Integer.parseInt(st);
        shift(numberOfDiscs, "Pole1", "Pole2", "Pole3");
    }
}