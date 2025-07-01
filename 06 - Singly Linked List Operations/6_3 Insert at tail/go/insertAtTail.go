package main

import "fmt"

type Node struct{
	val int
	next *Node
}

func insertAtTail(head **Node, value int){
	newNode := &Node{val: value}
	if *head == nil{
		*head = newNode
		return
	}
	temp := *head;
	for{
		if temp.next != nil{
			temp = temp.next
		}else{
			break
		}
	}
	temp.next = newNode
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

	insertAtTail(&head, 100)
	printLinkedList(head)
}