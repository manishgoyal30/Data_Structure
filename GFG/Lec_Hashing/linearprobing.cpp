#include<bits/stdc++.h>
using namespace std;

struct MyHash{
    int *arr; //created a array pointer
    int cap,size;

    MyHash(int c){
        cap=c; //derfine the capacity
        size=0;
        arr=new int[cap]; //define the aray of cap size
        for(int i=0;i<cap;i++) //initilizeing -1
        arr[i]=-1;
    }

    int hash(int key){ //linear probing fun
        return key%cap;
    }

    bool insert(int key){
        if(size==cap)    
        //if list is full then not possible
        return false;

        int i=hash(key);  
        //function hash(linear probing)

        while(arr[i]!=-1 && arr[i]!=-2 && arr[i]!=key)  //empty, deletion, key value already filled

        i=(i+1)%cap; //increase the i value

        if(arr[i]=key) //if already present
        return false;

        else{
            arr[i]=key; //insertion
            size++;
            return true;
        }
    }

    bool search(int key){
    int h=hash(key);    
    int i=h;
    while(arr[i]!=-1){
        if(arr[i]==key)
        return true;
        i=(i+1)%cap;
        if(i==h)
        return false;
    }
    return false;
    }


};

int main(){
    MyHash mh(7);
    mh.insert(49);
    mh.insert(49);
    mh.insert(72);
}
