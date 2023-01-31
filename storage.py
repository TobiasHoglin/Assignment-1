
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
    def __str__(self):
        return str(self.data)


class Storage:
    def __init__(self):
        self.head = None

    def push(self, data):
        """ Create a Node to hold the data, then put it at the head of the list. """
        newNode = Node(data)
        newNode.next = self.head
        self.head = newNode

    def pop(self):
        """ Remove the head Node and return its data. """
        if(self.head != None):
            s = self.head.data
            self.head = self.head.next
            return s

    def peek(self):
        """ Return the data from the head Node, without removing it. """
        if(self.head != None):
            return self.head.data

    def isempty(self):
        """ Return True if the list is empty, otherwise False """
        if(self.head == None):
            return True
        else:
            return False
        
