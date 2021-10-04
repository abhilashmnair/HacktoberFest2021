/** Right rotation of the given array */
public class RightRotate {

	public static void main(String[] args) {
		/** initial array */
		int arr[] = {1,2,3,4,5};
		/** number of rotation */
		int n = 3;
		
		System.out.println("The array elements :");
		for(int i=0;i<arr.length;i++)
			System.out.print(arr[i]+" ");
		
		System.out.println();
		/** performing rght rotation */
		System.out.println("The array after n rotation right");
		for(int i=0;i<n;i++) {
			int j,last=arr[arr.length-1];
			for(j=arr.length-1;j>0;j--) {
				arr[j] = arr[j-1];
			}
			arr[0] = last;
			
		}
		for(int i=0;i<arr.length;i++)
			System.out.print(arr[i]+" ");
		

	}

}
