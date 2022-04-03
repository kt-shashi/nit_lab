// Assignment 6
// Question 2
// Roll: 2021PGCACA050

#include<iostream>

using namespace std;

class Node{

private:
    char data;
    Node *leftChild;
    Node *rightChild;

public:

    Node(){
        data=' ';
        leftChild=NULL;
        rightChild=NULL;
    }

    Node(char data){
        this->data=data;
        leftChild=NULL;
        rightChild=NULL;
    }

    void setLeftChild(Node *node){
        leftChild=node;
    }

    void setRightChild(Node *node){
        rightChild=node;
    }

    char getData(){
        return data;
    }

    Node* getLeftChild(){
        return leftChild;
    }

    Node* getRightChild(){
        return rightChild;
    }

};

void addNode(Node *root){

    char input, lData=' ',rData=' ';

    cout<<"For data "<<root->getData()<<endl;
    cout<<"Press y to add left child?: ";

    cin>>input;

    if(input=='y' || input=='Y')
    {
        cout<<"Enter data to add: ";
        cin>>lData;
    }
    if(lData!=' '){
        Node *lNode=new Node(lData);
        root->setLeftChild(lNode);
        addNode(lNode);
    }


    cout<<"For data "<<root->getData()<<endl;
    cout<<"Press y to add right child?: ";

    cin>>input;

    if(input=='y' || input=='Y')
    {
        cout<<"Enter data to add: ";
        cin>>rData;
    }
    if(rData!=' '){
        Node *rNode=new Node(rData);
        root->setRightChild(rNode);
        addNode(rNode);
    }

}

void inOrder(Node *root){

    if(root!=NULL){
        inOrder(root->getLeftChild());
        cout<<root->getData()<<" ";
        inOrder(root->getRightChild());
    }

}

void preOrder(Node *root){

    if(root!=NULL){
        cout<<root->getData()<<" ";
        preOrder(root->getLeftChild());
        preOrder(root->getRightChild());
    }

}

void postOrder(Node *root){

    if(root!=NULL){
        postOrder(root->getLeftChild());
        postOrder(root->getRightChild());
        cout<<root->getData()<<" ";
    }

}


int main(){

    Node *root=NULL;

    char data;
    cout<<"Enter root node data: ";
    cin>>data;
    Node *x=new Node(data);

    root=x;

    addNode(root);

    cout<<"In order traversal: "<<endl;
    inOrder(root);
    cout<<endl<<"Pre order traversal: "<<endl;
    preOrder(root);
    cout<<endl<<"Post order traversal: "<<endl;
    postOrder(root);
}
