Skip to content
Search or jump to…

Pull requests
Issues
Marketplace
Explore
 
@ramasubramanya-cell 
Learn Git and GitHub without any code!
Using the Hello World guide, you’ll start a branch, write comments, and open a pull request.


ramasubramanya-cell
/
RTU-DigitalLibrary
forked from ImanMohi/RTU-DigitalLibrary
0
0218
Code
Pull requests
Actions
Projects
Wiki
Security
Insights
Settings
Delete Dijkstra.java

 master
@ramasubramanya-cell
ramasubramanya-cell committed 2 minutes ago 
1 parent 3cb25fc commit 7a7f9b3de6812c445be7c09ee8a029e3e069200f
Showing  with 0 additions and 78 deletions.
+0 −78  Java Programs/Dijkstra.java
 78  Java Programs/Dijkstra.java 
@@ -1,78 +0,0 @@
import java.util.Scanner;	

public class Dijkstra {	
	public static void main(String args[]) {	
		int i,j;	
		int dis[]=new int[10], visited[]=new int[10];	
		int cost[][] = new int[10][10], path[]=new int[10];	
		Scanner in = new Scanner(System.in);	
		System.out.println("Enter the number of nodes");	
		int n=in.nextInt();	
		System.out.println("Enter the cost matrix");	
		for(i=1;i<=n;i++)	
			for(j=1;j<=n;j++)	
				cost[i][j]=in.nextInt();	
		System.out.println("The entered cost matrix is ");	
		for(i=1;i<=n;i++)	
		{	
			for(j=1;j<=n;j++)	
			System.out.print(cost[i][j]+"\t");	
			System.out.println();	
		}	
		System.out.println("Enter the source vertex");	
		int sv=in.nextInt();	
		dij(cost,dis,sv,n,path,visited);	
		printpath(sv,n,dis,path,visited);	
	}	
	static void dij(int cost[][],int dist[],int sv,int n,int path[],int visited[])	
	{	
		int c=2,min,v=0;	
		for(int i=1;i<=n;i++)	
		{	
			visited[i]=0;	
			dist[i]=cost[sv][i];	
			if(cost[sv][i]==999)	
				path[i]=0;	
			else	
				path[i]=sv;	
		}	
		visited[sv]=1;	
		while(c<=n) {	
			min=999;	
			for(int w=1;w<=n;w++)	
				if(dist[w]<min && visited[w]==0)	
				{	
					min=dist[w];	
					v=w;	
				}	
			visited[v]=1;	
			c++;	
			for(int w=1;w<=n;w++) {	
				if(dist[w]>dist[v]+cost[v][w])	
				{	
					dist[w]=dist[v]+cost[v][w];	
					path[w]=v;	
				}	
			}	
		}	
	}	
		static void printpath(int sv,int n,int dist[],int path[],int visited[])	
		{	
			for(int w=1;w<=n;w++)	
			{	
				if(visited[w]==1&&w!=sv)	
				{	
					System.out.println("The shortest distance between "+sv+"-->"+w+"is "+dist[w]);	
					int t=path[w];	
					System.out.println("The path is :");	
					System.out.print(" "+w);	
					while(t!=sv)	
					{	
						System.out.print("<--->"+t);	
						t=path[t];	
					}	
					System.out.println("<--->"+sv);	
				}	
			}	
		}	
	} 	
0 comments on commit 7a7f9b3
@ramasubramanya-cell
 
 
Leave a comment
No file chosen
Attach files by dragging & dropping, selecting or pasting them.
 You’re not receiving notifications from this thread.
© 2020 GitHub, Inc.
Terms
Privacy
Security
Status
Help
Contact GitHub
Pricing
API
Training
Blog
About
