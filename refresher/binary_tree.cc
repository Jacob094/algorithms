#include <optional>

struct node {
    int data;
    node* left;
    node* right;
};

// Takes root node of binary tree and looks up if value exists
std::optional<int> lookup(node* root_node, int target) {
    if (root_node) {
        if (target == root_node->data) {
            return root_node->data;
        } else {
            if (target > root_node->data) {
                lookup(root_node->right, target);
            } else {
                lookup(root_node->left, target);
            }
        }
    } else {
        return std::nullopt;
    }

}

bool insert(node* tree, node* new_node) {
    if (!new_node) {
        return false;
    }

}


int main() {

}