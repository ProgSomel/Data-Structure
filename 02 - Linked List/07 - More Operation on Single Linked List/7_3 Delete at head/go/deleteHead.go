package main

import "fmt"

type Node struct{
	val int
	next *Node
}

func insertAtTail(head **Node, tail **Node, value int){
	newNode := &Node{val: value}
	
	if *head == nil{
		*head = newNode;
		*tail = newNode
		return;
	}
	(*tail).next = newNode;
	*tail = newNode;
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

func deleteHead(head **Node, tail **Node){
	if *head == nil{
		return;
	}
	if (*head).next == nil{
		*head = nil;
		*tail = nil;
		return;
	}
	*head = (*head).next;
}

func main(){

	var head *Node = nil;
	var tail *Node = nil

	var value int;
	for {
		fmt.Scan(&value)
		if value == -1{
			break;
		}
		insertAtTail(&head, &tail, value)
	}
	deleteHead(&head, &tail);
	printLinkedList(head)
}