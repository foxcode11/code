#include<stdio.h>
struct FCFS{
    int pid,at,bt;
};
void swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}
int main()
{
    int n;
    printf("Enter the Number of Processes: ");
    scanf("%d",&n);
    struct FCFS arr[n];
    printf("Enter the Arrival Time and Burst Time for Processes:\n");
    for(int i=0;i<n;i++)
    {
        printf("Process:%d--> ",i+1);
        arr[i].pid=i+1;
        scanf("%d%d",&arr[i].at,&arr[i].bt);
    }
	for (int i = 1; i < n; i++)
	{
	    int	key = arr[i].at;
		int j = i - 1;
		while (j >= 0 && arr[j].at > key)
		{
			arr[j + 1].at = arr[j].at;
            swap(&arr[j].bt,&arr[j+1].bt);
            swap(&arr[j].pid,&arr[j+1].pid);
			j = j - 1;
		}
		arr[j + 1].at = key;
	}
    printf("The Processes Are:\n");
    for(int i=0;i<n;i++)
    {
        printf("Process %d--> ",arr[i].pid);
        printf("%d %d",arr[i].at,arr[i].bt);
        printf("\n");
    }
    int comp[n],tturn[n],wtime[n];
    comp[0]=arr[0].bt+arr[0].at;
    tturn[0]=comp[0]-arr[0].at;
    wtime[0]=tturn[0]-arr[0].bt;
    int total=comp[0];
    for(int i=1;i<n;i++)
    {
        if(total>=arr[i].at)
        {
            comp[i]=total+arr[i].bt;
            total=comp[i];
        }
        else
        {
            int diff=arr[i].at-total;
            comp[i]=total+diff+arr[i].bt;
            total=comp[i];
        }
        tturn[i]=comp[i]-arr[i].at;
        wtime[i]=tturn[i]-arr[i].bt;
    }
    printf("The Processes Are:\n");
    printf("     TurnTime   Waiting Time\n");
    for(int i=0;i<n;i++)
    {
        printf("P%d--> ",arr[i].pid);
        printf("  %d           %d",tturn[i],wtime[i]);
        printf("\n");
    }
    float sum=0,add=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+wtime[i];
        add=add+tturn[i];
    }
    printf("The average Turnaround Time is: %f\nThe average Waiting Time is: %f",(add/n),(sum/n));
    return 0;
}
