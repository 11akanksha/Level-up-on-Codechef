# My Learning points via this contest:

- The condition , GCD(a,b) = LCM(a,b) is possible **Only when** ```a=b```
- min function can take an array as its argument and it returns the min value from the entire array!!
- Policy Based DS has a lot of useful applications. Read about them [here](https://codeforces.com/blog/entry/11080).
- To use ordered_set of PBDS, include:
```
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<class T>
using ordered_set = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;
template<class K,class V>
using ordered_map = tree<K,V,less<K>,rb_tree_tag,tree_order_statistics_node_update>;
```

- Basics of PBDS video: [click here](https://www.youtube.com/watch?v=f88s33eFGDo).
