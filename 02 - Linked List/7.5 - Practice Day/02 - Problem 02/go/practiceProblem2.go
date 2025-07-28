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

func printLinkedListInReverse(tmp **Node){
	if *tmp == nil{
		return
	}
	printLinkedListInReverse(&(*tmp).next)
	fmt.Printf("%d ", (*tmp).val);

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
	tmp := head;
	printLinkedListInReverse(&tmp)
}