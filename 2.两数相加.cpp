#include<iostream>
using namespace std;

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
 	int tem = 0;
    ListNode* head = new ListNode(0);
    ListNode* tag = head;
    while(l1 || l2 || tem > 0){
    	if(l1) tem += l1->val;
    	if(l2) tem += l2->val;
    	head->next = new ListNode(tem%10);
    	tem /= 10;
    	head = head->next;
    	if(l1) l1 = l1->next;
    	if(l2) l2 = l2->next;
	}
    return tag->next;
}

int main(){
	ListNode a(5);
	ListNode b(5);
	ListNode c(9);
	ListNode* l2 = &a;
	ListNode* l1 = &b;
	//l2->next = &c;
	ListNode* sum = addTwoNumbers(l1, l2);
	while(sum){
		cout << sum->val << " ";
		sum = sum->next;
	}		
}

/*
ERROR: AddressSanitizer: stack-use-after-scope on address 0x7fff89243f60 at pc 0x00000041ff85 bp 0x7fff892430f0 sp 0x7fff892430e8
READ of size 4 at 0x7fff89243f60 thread T0
    #3 0x7fc702c2e2e0 in __libc_start_main (/lib/x86_64-linux-gnu/libc.so.6+0x202e0)

Address 0x7fff89243f60 is located in stack of thread T0 at offset 416 in frame

  This frame has 10 object(s):
    [32, 33) '<unknown>'
    [96, 97) '<unknown>'
    [160, 161) '<unknown>'
    [224, 225) '<unknown>'
    [288, 292) 'SEPARATOR'
    [352, 360) 'ret'
    [416, 432) 'a' <== Memory access at offset 416 is inside this variable
    [480, 512) 'line'
    [544, 576) 'out'
    [608, 1120) 'fout'
HINT: this may be a false positive if your program uses some custom stack unwind mechanism or swapcontext
      (longjmp and C++ exceptions *are* supported)
Shadow bytes around the buggy address:
  0x100071240790: 00 00 00 00 f2 f2 f2 f2 00 00 00 00 f2 f2 f2 f2
  0x1000712407a0: 00 00 00 00 f3 f3 f3 f3 00 00 00 00 00 00 00 00
  0x1000712407b0: 00 00 00 00 00 00 00 00 f1 f1 f1 f1 f8 f2 f2 f2
  0x1000712407c0: f2 f2 f2 f2 f8 f2 f2 f2 f2 f2 f2 f2 f8 f2 f2 f2
  0x1000712407d0: f2 f2 f2 f2 f8 f2 f2 f2 f2 f2 f2 f2 04 f2 f2 f2
=>0x1000712407e0: f2 f2 f2 f2 00 f2 f2 f2 f2 f2 f2 f2[f8]f8 f2 f2
  0x1000712407f0: f2 f2 f2 f2 00 00 00 00 f2 f2 f2 f2 00 00 00 00
  0x100071240800: f2 f2 f2 f2 00 00 00 00 00 00 00 00 00 00 00 00
  0x100071240810: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x100071240820: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x100071240830: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
Shadow byte legend (one shadow byte represents 8 application bytes):
  Addressable:           00
  Partially addressable: 01 02 03 04 05 06 07 
  Heap left redzone:       fa
  Freed heap region:       fd
  Stack left redzone:      f1
  Stack mid redzone:       f2
  Stack right redzone:     f3
  Stack after return:      f5
  Stack use after scope:   f8
  Global redzone:          f9
  Global init order:       f6
  Poisoned by user:        f7
  Container overflow:      fc
  Array cookie:            ac
  Intra object redzone:    bb
  ASan internal:           fe
  Left alloca redzone:     ca
  Right alloca redzone:    cb
*/

