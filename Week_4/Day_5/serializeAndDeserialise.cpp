class Codec {
public:

    void serializeHelper(TreeNode* root, string &s){

        if(root == NULL){
            s += "null,";
            return;
        }
        s += to_string(root->val) + ",";

        serializeHelper(root->left, s);
        serializeHelper(root->right, s);
    }

    string serialize(TreeNode* root) {
        string s = "";
        serializeHelper(root, s);

        return s;
    }

    TreeNode* deserializeHelper(vector<string>& nodes,
                                int &index){

        if(nodes[index] == "null"){
            index++;
            return NULL;
        }

        TreeNode* root =
            new TreeNode(stoi(nodes[index]));
        index++;

        root->left =
            deserializeHelper(nodes, index);
        root->right =
            deserializeHelper(nodes, index);
        return root;
    }

    TreeNode* deserialize(string data) {

        vector<string> nodes;
        string temp = "";

        for(char ch : data){

            if(ch == ','){
                nodes.push_back(temp);
                temp = "";
            }
            else{
                temp += ch;
            }
        }
        int index = 0;

        return deserializeHelper(nodes, index);
    }
};
