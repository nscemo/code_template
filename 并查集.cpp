const int MAXSIZE = 500;
int uset[MAXSIZE];
 
void makeSet(int size) {
    for(int i = 0;i < size;i++) uset[i] = -1;
}
//递归方法
int find(int x) {
    if (uset[x] < 0) return x;
    uset[x] = find(uset[x]);
    return uset[x];
}
//非递归d方法，用的时候删掉一个
int find(int x) {
    int p = x, t;
    while (uset[p] >= 0) p = uset[p];
    while (x != p) {
        t = uset[x];
        uset[x] = p;
        x = t;
    }
    return x;
}
void unionSet(int x, int y) {
    if ((x = find(x)) == (y = find(y))) return;
    if (uset[x] < uset[y]) {
        uset[x] += uset[y];
        uset[y] = x;
    } else {
        uset[y] += uset[x];
        uset[x] = y;
    }
}
