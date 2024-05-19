using System;
using System.Collections.Generic;

class LinearSearch
{
    public static int BasicLinearSearch<T>(List<T> data, T target) where T : IComparable<T>
    {
        for (int i = 0; i < data.Count; i++)
        {
            if (data[i].CompareTo(target) == 0)
            {
                return i;
            }
        }

        return -1;
    }

    public static int RecursiveLinearSearch<T>(List<T> data, T target, int index) where T : IComparable<T>
    {
        if (index >= data.Count)
            return -1;

        if (data[index].CompareTo(target) == 0)
            return index;

        return RecursiveLinearSearch(data, target, index + 1);
    }
}