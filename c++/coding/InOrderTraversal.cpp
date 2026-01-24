 // You are using GCC
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

Node* insert(Node* root, int data) {
    if (root == nullptr) {
        return createNode(data);
    }

    if (data < root->data) {
        root->left = insert(root->left, data);
    } else if (data > root->data) {
        root->right = insert(root->right, data);
    }

    return root;
}
void Preorder(Node* root, vector<int> &arr)
{
    if(root==NULL)
    {
        return; 
    }
    Preorder(root->left,arr);
    Preorder(root->right,arr);
    arr.push_back(root->data);
}
void displayTreePostOrder(Node* root) {
    vector<int> arr;
    Preorder(root,arr);
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // sort(arr.begin(),arr.end());
    // cout<<"The minimum value in the BST is: "<<arr[0];
}

int main() {
    Node* root = nullptr;
    int n, data;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> data;
        root = insert(root, data);
    }

    displayTreePostOrder(root);
    cout << endl;

    return 0;
}