package main

import "fmt"

type Node struct{
	val int
	next *Node
}

func insertAtAnyPosition(head **Node, idx int, value int){
	newNode := &Node{val: value}
	temp := *head;
	for i:=1; i < idx; i++{
		temp = temp.next;
	}
	newNode.next = temp.next;
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

	insertAtAnyPosition(&head, 2, 100)
	printLinkedList(head)
}