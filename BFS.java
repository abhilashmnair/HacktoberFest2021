import java.io.*;
class BFS
{
    static int n;
    static int a[][];
    static int visited[];
    public static void main(String[] args)throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter the number of nodes");
        n = Integer.parseInt(br.readLine());
        a = new int[n][n];
        visited = new int[n];

        System.out.println("Enter the adjacency matrix");
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
            {
                System.out.println("Enter edge " + (i+1) + "-" + (j+1));
                a[i][j] = Integer.parseInt(br.readLine());
            }

        System.out.println("Enter starting node");
        int node = Integer.parseInt(br.readLine());

        System.out.println("The BFS is:");
        displayBFS(node - 1);
    }

    static void displayBFS(int node)
    {
        int queue[]=new int[n+1];
        int first=0,last=0,nd;
        visited[node]=1;
        queue[++last]=node;
        while(first!=last)
        {
            nd=queue[++first];
            System.out.print((nd+1)+" ");
            for(int i=0;i<n;i++)
            {
                if(a[nd][i]!=0 && visited[i]!=1)
                {
                    queue[++last]=i;
                    visited[i]=1;
                }
            }
        }
    }
}
