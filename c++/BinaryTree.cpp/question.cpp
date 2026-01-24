// Emily is given a binary tree where each node contains an integer value. She needs to construct the tree using a post-order traversal input, where -1 denotes a NULL node. After building the tree, compute and display the sum of all nodes and print the nodes in post-order traversal.



// Can you help Emily with the tree creation?

// Input format :
// The input consists of a series of positive integers provided in a separate line.

// To build the binary tree, enter its value first for each node. If a node has no left or right child, enter -1.

// Output format :
// The first line of the output displays the postorder traversal sequence of the binary tree.

// The second line of the output displays the sum of all the nodes.



// Refer to the sample output for formatting specifications.

// Code constraints :
// 0 ≤ Value of the node ≤ 1000

// Sample test cases :
// Input 1 :
// 5
// -1
// -1
// Output 1 :
// Postorder Traversal: 5 
// Sum of all nodes: 5
// Input 2 :
// 70
// 25
// -1
// -1
// -1
// Output 2 :
// Postorder Traversal: 25 70 
// Sum of all nodes: 95
// Input 3 :
// 5
// 2
// -1
// -1
// 7
// -1
// -1
// Output 3 :
// Postorder Traversal: 2 7 5 
// Sum of all nodes: 14


// You are using GCC
#include <iostream>
#include<queue>
#include<vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

TreeNode* buildTree(TreeNode* root) { 
    int data;
    cin>>data;
    root=new TreeNode(data);
    if(data==-1)
    {
        return NULL;
    }
    root->left=buildTree(root->left);
    root->right=buildTree(root->right);
    return root;
}


void p(TreeNode* root,vector<int> &arr) {
    if(root==NULL)
    {
        return;
    }
    p(root->left,arr);
    p(root->right,arr);
    arr.push_back(root->val);
}

int main() {
    
    TreeNode* root = buildTree(root);
    vector<int> arr;
    cout << "Postorder Traversal: ";
    p(root,arr);
    int sum=0;
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
        sum+=arr[i];
    }
    cout << endl;
    cout<<"Sum of all nodes: "<<sum;
    return 0;
}

// Saran is given a binary tree where each node contains an integer value. He wants to construct the tree using a post-order traversal, where -1 represents a NULL node. After building the tree, you need to count and print the total number of nodes in the binary tree.

// Input format :
// The input is a sequence of integer values representing the nodes of a binary tree.

// Each node value should be an integer. To represent a NULL node, enter -1.

// Output format :
// The program should output a single integer, which is the count of total nodes in the binary tree.



// Refer to the sample output for formatting specifications.

// Code constraints :
// 1 ≤ node value ≤ 100

// Sample test cases :
// Input 1 :
// 1
// 2
// -1
// -1
// 3
// -1
// -1
// Output 1 :
// 3
// Input 2 :
// 1
// 2
// -1
// -1
// 3
// 4
// 5
// -1
// -1
// -1
// -1
// Output 2 :
// 5

// You are using GCC
#include <iostream>
using namespace std;
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) : val(value), left(nullptr), right(nullptr) {}
};

TreeNode* createTree(TreeNode* root) {
    //Type your code here
    int data;
    cin>>data;
    root=new TreeNode(data);
    if(data==-1)
    {
        return NULL;
    }
    root->left=createTree(root->left);
    root->right=createTree(root->right);
    return root;
}

int countNodes(TreeNode* root, int &i) {
    //Type your code here
    if(root==NULL)
    {
        return 0;
    }
    countNodes(root->left,i);
    i++;
    countNodes(root->right,i);
}

int main() {
    TreeNode* root = createTree(root);
    int i=0;
    int nodeCount = countNodes(root,i);
    std::cout << i << std::endl;

    return 0;
}