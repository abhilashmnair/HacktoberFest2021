
public class Easter_Algorithm 
{
	//Main
	public static void main(String[] args) 
	{
		//Test Method (Output is 4/20)
		GetEaster(2003);

		//Exit
		System.exit(0);
	}

	public static void GetEaster(int y)
	{
			//Cursed math
			int a = y % 19; 
			int b = y / 100; 
			int c = y % 100; 
			int d = b / 4;
			int e = b % 4;
			int f = (b + 8) / 25;
			int g = (b - f + 1) / 3;
			int h = (19 * a + b - d - g + 15) % 30;
			int i = c / 4;
			int k = c % 4;
			int r = (32 + 2 * e + 2 * i - h - k) % 7;
			int m = (a + 11 * h + 22 * r) / 451;
			int n = (h + r - 7 * m + 114) / 31;
			int p = (h + r - 7 * m + 114) % 31;
			
			//Print date
			System.out.println("Easter in " + y + " falls on " + n + "/" + (p + 1) + ".");
	}
}
