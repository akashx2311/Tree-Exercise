#include <bits/stdc++.h>
using namespace std;

class Node {
public:
  int val;
  Node *left, *right;
  Node(int x) {
    val = x;
    left = nullptr;
    right = nullptr;
  }
};
//Binary Tree

int height(Node *root) {
  if (root == nullptr)
    return 0;
  return 1 + max(height(root->left), height(root->right));
}

vector<int> level_order(Node *root) {
  vector<int> ans;
  if (root == NULL)
    return ans;
  queue<Node *> q;
  q.push(root);
  while (!q.empty()) {
    Node *temp = q.front();
    q.pop();
    ans.push_back(temp->val);
    if (temp->left)
      q.push(temp->left);
    if (temp->right)
      q.push(temp->right);
  }
  return ans;
}

int main() {

  Node *root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);

  cout<<height(root)<<endl;
  vector<int> ans = level_order(root);
  for(auto i : ans)
    {
      cout<<i<<" ";
      
    }
  
}
