#include <stdio.h>
#include <stdbool.h>

// prototypes
void sorted(int size, int sample[size]);
bool is_in(int a, int b[], int size);

// main entry point
int main(void)
{
    int sample[5] = {2, 5, 2, 2, 2};
    int element_occurence[5][2];
    for (int i = 0; i < 5; i++)
    {
        element_occurence[i][0] = 0;
        element_occurence[i][1] = 0;
    }

    sorted(5, sample);

    // TRACK OCCURENCE OF ELEMENTS IN THE ARRAY
    int already_seen[5];
    int unique = 0;
    for (int i = 0; i < 5; i++)
    {
        if (!is_in(sample[i], already_seen, unique))
        {
            element_occurence[i][0] = sample[i];
            element_occurence[i][1] = 1;
            already_seen[i] = sample[i];
            unique++;
        }
        else /* if seen*/
        {
            for (int j = 0; j < unique; j++)
                if (element_occurence[j][0] == sample[i])
                    element_occurence[j][1] += 1;
        }
    }

    // test
    // printf("Occurence: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d - ", element_occurence[i][0]);
        printf("%d\n", element_occurence[i][1]);
    }
}

void sorted(int size, int sample[size])
{
    int index;
    int largest;
    bool moved = false;

    while (size > 0)
    {
        largest = sample[size - 1];
        for (int i = 0; i < size; i++)
        {
            if (sample[i] > largest)
            {
                index = i;
                largest = sample[i];
                int temp = sample[size - 1];
                sample[size - 1] = largest;
                sample[index] = temp;
            }
        }
        size--;
    }
}

bool is_in(int a, int b[], int size)
{
    for (int i = 0; i < size; i++)
        if (b[i] == a)
            return true;

    return false;
}