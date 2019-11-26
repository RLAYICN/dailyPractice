#iclude<isotream>
using namespace std; 

struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
	if(l1 == NULL)
        return l2;
    else if(l2 == NULL)
        return l1;
	ListNode* head = l1;
	if(l1->val <= l2->val){
		head = l1;
		l1 = l1->next; 
	}
	else{
		head = l2;
		l2 = l2->next; 
	}
	ListNode* flag = head;
	while(l1 && l2){
		if(l1->val <= l2->val){
			flag->next = l1;
			l1 = l1->next; 
		}
		else{
			flag->next = l2;
			l2 = l2->next; 
		}
		flag = flag->next; 
	}  
	if(l1){
		flag->next = l1;
	}
	else if(l2){
		flag->next = l2;
	}
	return head;
}

int main(){
	ListNode* l1(1), l2(1);
	l1->next = &ListNode(2);
	
}
