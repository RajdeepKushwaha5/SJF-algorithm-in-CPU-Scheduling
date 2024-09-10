#include <stdio.h>

int main()
{
  int index;
  int num, pro[10], arr_time[10], bur_time[10], com_time[10] = {0};
  int visited[10] = {0};
  int time = 0, min_index, completed = 0;

  printf("Enter the number of process that you want : ");
  scanf("%d", &num);
  printf("\nEnter the process number : ");
  for (int i = 0; i < num; i++)
  {
    scanf("%d", &pro[i]);
  }

  printf("\nEnter the arrival time for each process respectively: ");
  for (int i = 0; i < num; i++)
  {
    scanf("%d", &arr_time[i]);
  }

  printf("\nEnter the burst time for each process respectively: ");
  for (int i = 0; i < num; i++)
  {
    scanf("%d", &bur_time[i]);
  }






  while (completed < num)
  {
    min_index = -1;
    int min_burst = 1000;

    for (int i = 0; i < num; i++)
    {
      if (arr_time[i] <= time && visited[i] == 0)
      {
        if (bur_time[i] < min_burst)
        {
          min_burst = bur_time[i];
          min_index = i;
        }
        else if (bur_time[i] == min_burst)
        {
          if (arr_time[i] < arr_time[min_index])
          {
            min_index = i;
          }
        }
      }
    }

    if (min_index == -1)
    {
      time++;
    }
    else
    {
      time += bur_time[min_index];
      com_time[min_index] = time;
      visited[min_index] = 1;
      completed++;

    }
  }







  printf("\nthe process number  : ");
  for (int i = 0; i < num; i++)
  {
    printf(" %d | ", pro[i]);
  }

  printf("\nthe arrival time : ");
  for (int i = 0; i < num; i++)
  {
    printf(" %d | ", arr_time[i]);
  }

  printf("\nthe burst time : ");
  for (int i = 0; i < num; i++)
  {
    printf(" %d | ", bur_time[i]);
  }

  printf("\nThe completion time : ");
  for (int i = 0; i < num; i++)
  {
    printf(" %d | ", com_time[i]);
  }

  return 0;

  
}
