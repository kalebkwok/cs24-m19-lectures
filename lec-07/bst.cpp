class BST{
	public:
		BST():root(0){}
		~BST(){
			delete root;
		}
		bool search(int item) const;
		int min() const;
		int max() const;
		bool insert( int item); // return false if item already exists in the BST
		void print() const;
	private:
		struct Node{
			Node(int value):data(value), left(0), right(0){}
			~Node(){
				delete left;
				delete right;
			}
			int data;
			Node* left;
			Node* right;
		};

		Node* root;

};
