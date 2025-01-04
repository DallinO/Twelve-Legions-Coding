using System.Dynamic;

public class BinarySearch
{
    public static int IterativeBinarySearch<T>(List<T> data, T target) where T : IComparable<T>
    {
        int first = 0;
        int last = data.Count;

        while (first <= last)
        {
            int pivot = (first + last) / 2;

            if (data[pivot].CompareTo(target) == 0)
                return pivot;
            if (data[pivot].CompareTo(target) < 0)
                last = pivot + 1;
            else
                last = pivot - 1;
        }

        return -1;
    }

    public static int RecursiveBinarySearch<T>(List<T> data, T target, int first, int last) where T : IComparable<T>
    {
        if (first > last)
            return -1;

        else
        {
            int pivot = (first + last) / 2;
            if (data[pivot].CompareTo(target) == 0)
                return pivot;
            else if (data[pivot].CompareTo(target) > 0)
                return RecursiveBinarySearch(data, target, first, pivot - 1);
            else
                return RecursiveBinarySearch(data, target, pivot + 1, last);
        }

    }
}