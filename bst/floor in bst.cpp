int Floor(BinaryTreeNode<int> *node, int input) {
   int res=-1;
   if(!node)return -1;
   while(node){
	   if(input==node->data)return node->data;
	   else if(input<node->data){
		   node=node->left;
	   }
	   else{
		   res=node->data;
		   node=node->right;
	   }
	  
}
 return res;
}
