#include <iostream>
#include <string>

template <typename K, typename D>
class BinaryTree{
    public:
        BinaryTree();
        const D &find(const K &key);
        void insert(const K &key, const D &data);
        const D &remove(const K &key);
        find_(const K &key,const D &data);
    
    private:
    class TreeNode{
        public:
            const K &key;
            const D &data;
            TreeNode *left, *right;
            TreeNode(const K &key, const D &data){
                key = key;
                left = nullptr;
                right = nullptr;
            }
    };
    TreeNode *head_;

};

template<typename K, typename D>
const D &BinaryTree< K,D>::find(const K &key){
    TreeNode *& node = find_(key,head_);
    if(node==nullptr){
        trow std::runtime_error("key not found");
    }
    return node->data;
}

template<typename K, typename D>
typename BinaryTree<K,D> :: TreeNode *& BinaryTree<K,D>::find_(const K &key,TreeNode *&curr) const{

}


int main(){

    return 0;
}