//FIND THE LAST OCCURENCE OF AN ELEMENT X IN A GIVEN ARRRAY

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;

    for(int i=0;i<10;i++)
    {
        int element;
        cin>>element;
        v.push_back(element);
    }

    for(int ele:v)
    {
        cout << ele << " ";
    }
    int target;
    cout << endl << "enter element: ";
    cin >> target;
    int pos;

    // for(int i=0; i<v.size(); i++)
    // {
    //     if(v[i] == target){
    //         pos = i;
    //     }
    // }

    for(int i=v.size(); i>0 ; i--){
        if(v[i] == target){
            pos = i;
            break;
        }
    }

    cout << target << " last occurence found at "<< pos+1 << endl;

    return 0;
}