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

int height(Node *root) {
  if (root == nullptr)
    return 0;
  return 1 + max(height(root->left), height(root->right));
}

int main() {

  Node *root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  cout << height(root) << endl;
}