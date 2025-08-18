static double sum = 0.0;
static int count = 0;

double running_avg(int i)
{
    sum = sum + i;
    count++;
    return sum/(float)count;
}

void reset()
{
    sum = 0;
    count = 0;
}