#include <iostream>

/*
                Q. find out hw many times has an array been rotated

            explanation -  we will be given an array with unique elements and we have to find how many the 
                            array has been rotated

                            arr[] = {3, 4, 5, 1, 2}
                                ideally we can say that the originally array was {1, 2, 3, 4, 5} and it is rotated
                                from 3
                                so the answer to the question is '3' times

                        we will be using concept of finding minimum element in a sorted array question

    Actual code
int findRotation(vector<int> &arr)
{
    int low = 0, high = arr.size() - 1;
    int ans = INT_MAX;
    int index = -1;

    while(low <= high)
    {
        int mid = (low + high)/2;
        // search spae is already sorted then always arr[low]
        // is will be smaller in that search space
        if(arr[low] <= arr[high])
        {
            if(arr[low] < ans)
            {
                index = low;
                ans = arr[low];
            }
            break;
        }

        if(arr[low] <= arr[mid])
        {
            if(arr[low] < ans)
            {
                index = low;
                ans = arr[low];
            }
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
            if(arr[mid] < ans)
            {
                index = mid;
                ans = arr[mid];
            }
        }
    }
    return index;
}



         // for duplicates in the array get idea from rotated sorted array-II
*/

int main()
{
    std::cout << "Hello World!\n";
}