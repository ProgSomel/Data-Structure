package main

import "fmt"

type Node struct{
	val int
	next *Node
}

func insertAtHead(head **Node, value int){
	newNode := &Node{val: value}
	newNode.next = *head;
	*head = newNode;
}

func printLinkedList(head *Node){
	temp := head;
	for {
		if temp == nil{
			break;
		}else{
			fmt.Println(temp.val);
			temp = temp.next;
		}
	}
}

func main(){

	head := &Node{val: 10}
	a := &Node{val: 20}
	b := &Node{val: 30}

	head.next = a;
	a.next = b;

	insertAtHead(&head, 100)
	printLinkedList(head)
}