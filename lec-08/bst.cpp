class BST{
	public:
		BST():root(0){}
		~BST(){
			delete root;
		}
		bool search(int item) const;
		int min() const;
		int max() const;
		bool insert( int item){
			Node* n = root;
			while(n){
				//traverse down the tree
				if(n->data == item){
					return false;
				}
				if(n->data < item){
					//insert in the right subtree of n
					if(!n->right){
						//insert a new node
						Node* p = new Node(item);
						p->parent = n;
						n->right = p;
						return true;
					}else{
						n = n->right;
					}
				}else{
					//insert in the left subtree of n
					if(){
						//insert a new node
						return true;
					}else{
						n = n->left;
					}
				}
			}
		}
		void print() const;
	private:
		struct Node{
			Node(int value):data(value), left(0), right(0), parent(0){}
			~Node(){
				delete left;
				delete right;
			}
			int data;
			Node* parent;
			Node* left;
			Node* right;
		};

		Node* root;

};
