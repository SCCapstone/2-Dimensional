/*
  Samuel Bunker CSCE490 Copyright 2021
  This program will take user input and create a binary search tree. The user will be able to search for nodes in their tree, add new nodes, and delete nodes.
 */


 //This comment was made by Noah Snell on a new branch for the git milestone requirements.
#include <iostream>
using namespace std;
// struct creation for node in BST: contains a value, right child sub node and left child sub node
struct node {
    float value;
    node* left_child;
    node* right_child;
};
// Function declarations
node* NewNode(float value);
node* Insert(node* root, float value);
bool Search(node* root, float search_value);
node* MinNode(node* root);
struct node* Delete(struct node* root, float delete_value);
void PrintInOrder(node* Ptr);

int main() {
    // default values for main function
    node* root;
    root = NULL;
    bool while_val = true;
    int usr_input;
    float insert_value;
    float search_value;
    float delete_value;
    cout << "--BINARY SEARCH TREE--" << endl;
    // While loop runs until case zero is chosen. 
    while (while_val == true) {
        cout << "Choose an option: " << endl;
        cout << "Enter 0 to terminate the program: \n" << "Enter 1 to insert a new node: \n" << "Enter 2 to search for a node: \n" << "Enter 3 to delete a node:" << endl;
        cin >> usr_input;
        // There are four options that the user can choose from. 
        // Case 0 terminates the program and the default case handles situations where user input is not valid. 
        switch (usr_input) {
        case 0:
            cout << "PROGRAM HAS TERMINATED!" << endl;
            while_val = false;
	    PrintInOrder(root);
	    cout << endl;
            exit(0);

        case 1:
            cout << "Program will insert a new node: \n" << "Enter the value you would like to insert:\n" << endl;
            cin >> insert_value;
            cout << "\n" << endl;
            root = Insert(root, insert_value);
            while_val = true;
            break;

        case 2:
            cout << "Program will search for a node: \n" << "Enter the value you would like to search for: \n" << endl;
            cin >> search_value;
            cout << "\n" << endl;
            Search(root, search_value);
            while_val = true;
            break;

        case 3:
            cout << "Program will delete a node: \n" << "Enter the node you would like to delete: \n" << endl;
            cin >> delete_value;
            cout << "\n" << endl;
            Delete(root, delete_value);
            while_val = true;
            break;

        default:
            cout << "INPUT NOT RECOGNIZED!" << endl;
            while_val = true;
        }

    }
    return 0;
}
// Sub function to create a new node
node* NewNode(float value) {
    node* new_node = new node();
    (*new_node).value = value;
    (*new_node).left_child = NULL;
    (*new_node).right_child = NULL;
    return new_node;
}
// The insert function takes in a root and value and finds the correct position to insert the node into the BST
node* Insert(node* root, float value) {
    if (root == NULL) {
        root = NewNode(value);
    }
    else if (value < (*root).value) {
        (*root).left_child = Insert((*root).left_child, value);
    }
    else if (value == (*root).value) {
        cout << "Node already exists." << endl;
        return root;
    }
    else {
        (*root).right_child = Insert((*root).right_child, value);
    }
    return root;
}
// The search function returns true or false depening on if the node with the corresponding value is found. The function also outputs the values of the previous nodes within the traversal.
bool Search(node* root, float search_value) {
    if (root == NULL) {
        cout << "SEARCH VALUE NOT FOUND!" << endl;
        return false;
    }
    else if ((*root).value == search_value) {
        cout << (*root).value << endl;
        return true;
    }
    else if (search_value <= (*root).value) {
        cout << (*root).value << endl;
        return Search((*root).left_child, search_value);
    }
    else {
        cout << (*root).value << endl;
        return Search((*root).right_child, search_value);
    }
    return true;
}
// The sub function, MinNode, returns the smallest node in a sub-tree
node* MinNode(node* root) {
    while ((*root).left_child != NULL) {
        root = (*root).left_child;
    }
    return root;
}
// The delete function removes a desired node from the BTS, then rearanges the BTS to recognize this removal.i
struct node* Delete(struct node* root, float search_value) {
    if (root == NULL) {
        cout << "NO NODE TO DELETE, EMPTY TREE" << endl;
        return root;
    }
    else if (search_value > (*root).value) {
        (*root).right_child = Delete((*root).right_child, search_value);
    }
    else if (search_value < (*root).value) {
        (*root).left_child = Delete((*root).left_child, search_value);
    }
    else {
        if ((*root).left_child == NULL && (*root).right_child == NULL) {
            delete root;
            root = NULL;
        }
        else if ((*root).left_child == NULL) {
            struct node* temp = root;
            root = (*root).right_child;
            delete temp;
        }
        else if ((*root).right_child == NULL) {
            struct node* temp = root;
            root = (*root).left_child;
            delete temp;
        }
        else {
            struct node* temp = MinNode((*root).right_child);
            (*root).value = (*temp).value;
            (*root).right_child = Delete((*root).right_child, (*temp).value);
        }
    }
    return root;
}

void PrintInOrder(node* Ptr)
{
	if(Ptr != NULL)
	{
		if(Ptr->left_child != NULL)
		{
			PrintInOrder(Ptr->left_child);
		}
		cout << Ptr->value << " ";
		if(Ptr->right_child != NULL)
		{
			PrintInOrder(Ptr->right_child);
		}
	}
	else
	{
		cout << "The tree is empty\n";
	}
}


