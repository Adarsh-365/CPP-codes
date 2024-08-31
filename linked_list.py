class Node:
    
    def __init__(self,data):
        self.data = data
        self.next = None
        
        
class Linked_List:
    def __init__(self):
        self.head = None
        
    def insert_at_begin(self,data):
        New_Node = Node(data)
        if self.head is None:
            self.head = New_Node
            return
        New_Node.next = self.head
        self.head = New_Node
    
    def insert_at_End(self,data):
        New_Node = Node(data)
        if self.head is None:
            self.head = New_Node
            return
        current_node = self.head
        while(current_node.next is not None):
            current_node = current_node.next
        current_node.next  =  New_Node
        
    def print_all(self):
        if self.head is None:
            print("Linked List is Empty")
            return
        current_node = self.head
        while(current_node.next is not None):
            print(current_node.data)
            current_node = current_node.next
            

L_list = Linked_List()

L_list.insert_at_begin("A")
L_list.insert_at_begin("B")
L_list.insert_at_begin("C")
L_list.insert_at_begin("D")

L_list.insert_at_End("E")
L_list.insert_at_End("F")
L_list.insert_at_End("G")
L_list.insert_at_End("F")

L_list.print_all()


        
        
        
        
        
        
        
            
        
