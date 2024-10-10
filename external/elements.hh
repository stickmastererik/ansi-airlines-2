#ifndef elements
#define elements

template <typename T>
int elementsin(const T)
{
    int count = 0;

    for (int i = 0; i < T; i++) {
        count++;
    }

    return count;
}

#endif elements