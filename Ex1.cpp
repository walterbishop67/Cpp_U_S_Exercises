#include <iostream>
#include <vector>

using namespace std;
int main() {
    vector<int> vec{1,2,3,4,5};

    char choice {'q'};
    do{
        cout<<"P - Print numbers"<<endl;
        cout<<"A - Add a number"<<endl;
        cout<<"M - Display mean of the numbers"<<endl;
        cout<<"S - Display the smallest number"<<endl;
        cout<<"L - Display the largest number"<<endl;
        cout<<"Q - Quit\n"<<endl;
        cout<<"Enter your choice:";
        cin>> choice;

        if(choice == 'P' || choice == 'p') {
            if (!vec.empty()) {
                for (int i = 0; i < vec.size(); i++)
                    cout << vec[i] << " ";
                cout << endl;
            }else
                cout<<"[] empty list "<<endl;
        }else if(choice == 'A' || choice == 'a') {
            int add{};
            cin >> add;
            if (find(vec.begin(), vec.end(), add) != vec.end()) {
                cout << "This number already exist!!"<<endl;
            } else
                vec.push_back(add);
        }else if(choice == 'M' || choice == 'm'){
            double mean {};
            if (!vec.empty()){
                for(int a : vec)
                    mean += a;
                cout<< static_cast<double>(mean / vec.size()) << " mean"<<endl;
            }else
                cout<<" empty "<< endl;

        }else if(choice == 'S' || choice == 's'){
            if (!vec.empty()){
                int smallest = vec[0];
                for(int a : vec){
                    if(a < smallest)
                        smallest = a;
                }
                cout<<"Smallest: "<<smallest<< endl;
            }else
                cout<<" empty s "<< endl;
        }else if(choice == 'L' || choice == 'l') {
            if (!vec.empty()) {
                int largest = vec[0];
                for (int a: vec) {
                    if (a > largest)
                        largest = a;
                }
                cout << "largest: " << largest << endl;
            } else
                cout << " empty l" << endl;
        }else if (choice == 'Q' || choice == 'q')
            cout<<"goodbye"<<endl;
    }while(choice != 'Q' && choice != 'q');
    vec.clear();

    return 0;

}
