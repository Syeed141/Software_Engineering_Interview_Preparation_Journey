#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <numeric>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // Vector Declaration types

    vector<int> v;

    vector<int> a = {1, 2, 3, 4, 5};

    vector<int> b(5);

    vector<int> c(6, 0);

    // 3. Common Functions with Examples

    // Add elements in a vector :

    a.push_back(5);
    a.push_back(6);

    // Access elements in a vector
    cout << a.at(5) << endl;
    cout << a.front() << endl;
    cout << a.back() << endl;

    // Size and capacity

    cout << "Size :" << a.size() << endl; // gives element count

    cout << "Capacity :" << a.capacity() << endl; // memory space

    // To clear extra spaces from a vector

    a.shrink_to_fit();
    cout << "Capacity after removing extra spaces :" << a.capacity() << endl; // memory space

    // Iterating over a vector :

    cout << "Range based iteration of vector a :" << endl;

    for (int x : a)
    {

        cout << x << " ";
    }
    cout << endl;

    cout << "Index based iteration of vector a :" << endl;

    for (int i = 0; i < a.size(); i++)
    {

        cout << a[i] << " ";
    }

    cout << endl;

    // Inserting and deleting into a vector

    // a.insert(a.begin()+2, 100);

    // To delete

    // a.erase(a.begin()+5);

    // for(int x : a) {

    //     cout<<x << " ";
    // }
    // cout<<a.size()<<endl;

    // // range based deletion
    // a.erase(a.begin()+1,a.begin()+4);
    // cout<<a.size()<<endl;

    // remove the last elemenet :

    a.pop_back();
    cout << a.size() << endl;

    // clearing a vector

    c.clear();
    cout << c.size() << endl;

    if (c.empty())
    {

        cout << "C cleared successfully" << endl;
    }

    // Vector iterator
    cout << "Iterator based traversing :" << endl;
    vector<int>::iterator ptr;

    for (ptr = a.begin(); ptr != a.end(); ptr++)
    {

        cout << *ptr << " ";
    }

    // Sorting and reversing a vector
    vector<int> unsort = {2, 3, 7, 4, 2, 1};

    sort(unsort.begin(), unsort.end());
    cout << "After sorting : " << endl;

    for (int x : unsort)
    {

        cout << x << " ";
    }
    cout << endl;

    reverse(unsort.begin(), unsort.end());

    cout << "Reversed :" << endl;
    for (int x : unsort)
    {

        cout << x << " ";
    }
    cout << endl;

    // Find an element in a vector

    auto it = find(unsort.begin(), unsort.end(), 7);

    cout << *it << " " << "Found at index : " << it - unsort.begin() << endl;

    // finding unique elements of a vector

    sort(unsort.begin(), unsort.end());
    auto afterUnique = unique(unsort.begin(), unsort.end());
    unsort.erase(afterUnique, unsort.end());
    cout << "Unique values : " << endl;
    for (int y : unsort)
    {

        cout << y << " " << endl;
    }

    // Minimum and maximum element

    auto min = min_element(unsort.begin(), unsort.end());
    auto max = max_element(unsort.begin(), unsort.end());
    cout << "Max : " << *max << "Min :" << *min << endl;

    // count specific elements

    vector<int> d = {1, 2, 3, 4, 5, 1, 2, 1};

    cout << count(d.begin(), d.end(), 2) << endl;

    // Fill elements

    fill(d.begin(), d.end(), 0);

    for (auto &x : d)
    {

        cout << x << " ";
    }
    cout << endl;

    // Rotation

    vector<int> ab = {1, 2, 3, 4, 5};

    rotate(ab.begin(), ab.begin() + 3, ab.end()); // left Rotation

    for (auto &x : ab)
    {

        cout << x << " ";
    }

    cout << endl;

    vector<int> cd = {1, 2, 3, 4, 5};

    rotate(cd.begin(), cd.end() - 3, cd.end()); // right rotation

    for (auto &y : cd)
    {

        cout << y << " ";
    }

    // Summation

    int sum = accumulate(cd.begin(), cd.end(), 0);

    cout << " Sum " << sum << endl;

    return 0;
}
