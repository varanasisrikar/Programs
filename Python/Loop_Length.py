class Node(object):
    next = None
    
def loop_size(node):
    tortoise, hare = node.next, node.next.next
    while tortoise != hare:
        tortoise = tortoise.next
        hare = hare.next.next

    retr, hare = 1, tortoise.next
    while tortoise != hare:
        retr, hare = retr + 1, hare.next

    return retr


node1 = Node()
node2 = Node()
node3 = Node()
node4 = Node()
node1.next = node2
node2.next = node3
node3.next = node4
node4.next = node2
print(loop_size(node1))
