
//Java code on Quicksort algorithm

public class quicksort {

    static int partition(int arr[], int start, int end) {
        int prev = start - 1;
        int pivot = end;

        for(int mid = start;mid<pivot;mid++) {
            if (arr[mid] < arr[pivot]) {
                ++prev;
                int temp = arr[mid];
                arr[mid] = arr[prev];
                arr[prev] = temp;
            }
        }

        int temp = arr[pivot];
        arr[pivot] = arr[prev+1];
        arr[prev+1] = temp;

        return prev + 1;
    }

    static void quickSort(int arr[], int low, int high) {
        if (low < high) {
            int change = partition(arr, low, high);
            quickSort(arr, 0, change - 1);
            quickSort(arr, change + 1, high);
        }
    }

    public static void main(String args[]) {
        int arr[] = { 0, 5, 3, 1, 7, 6 };

        System.out.print("Before Sorting: ");
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
        quickSort(arr, 0, arr.length - 1);

        System.out.print("\nAfter Sorting: ");
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}