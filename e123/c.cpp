#include <bits/stdc++.h>
using namespace std;

struct node {
	int sum, prefixsum, suffixsum, maxsum;
};

node tree[200005];

void build(int arr[], int low, int high, int index)
{
	if (low == high) {
		tree[index].sum = arr[low];
		tree[index].prefixsum = arr[low];
		tree[index].suffixsum = arr[low];
		tree[index].maxsum = arr[low];
	}
	else {
		int mid = (low + high) / 2;
		
		build(arr, low, mid, 2 * index + 1);
		
		build(arr, mid + 1, high, 2 * index + 2);

		tree[index].sum = tree[2 * index + 1].sum +
						tree[2 * index + 2].sum;

		tree[index].prefixsum =
					max(tree[2 * index + 1].prefixsum,
					tree[2 * index + 1].sum +
					tree[2 * index + 2].prefixsum);

		tree[index].suffixsum =
					max(tree[2 * index + 2].suffixsum,
					tree[2 * index + 2].sum +
					tree[2 * index + 1].suffixsum);

		tree[index].maxsum =
					max(tree[index].prefixsum,
					max(tree[index].suffixsum,
					max(tree[2 * index + 1].maxsum,
					max(tree[2 * index + 2].maxsum,
					tree[2 * index + 1].suffixsum +
					tree[2 * index + 2].prefixsum))));
	}
}

void update(int arr[], int index, int low, int high,
			int idx, int value)
{
	if (low == high) {
		tree[index].sum = value;
		tree[index].prefixsum = value;
		tree[index].suffixsum = value;
		tree[index].maxsum = value;
	}
	else {

		int mid = (low + high) / 2;

		if (idx <= mid)
			update(arr, 2 * index + 1, low, mid, idx, value);
		
		else
			update(arr, 2 * index + 2, mid + 1,
				high, idx, value);

		tree[index].sum = tree[2 * index + 1].sum +
						tree[2 * index + 2].sum;

		tree[index].prefixsum =
					max(tree[2 * index + 1].prefixsum,
					tree[2 * index + 1].sum +
					tree[2 * index + 2].prefixsum);

		tree[index].suffixsum =
					max(tree[2 * index + 2].suffixsum,
					tree[2 * index + 2].sum +
					tree[2 * index + 1].suffixsum);

		tree[index].maxsum =
					max(tree[index].prefixsum,
					max(tree[index].suffixsum,
					max(tree[2 * index + 1].maxsum,
					max(tree[2 * index + 2].maxsum,
					tree[2 * index + 1].suffixsum +
					tree[2 * index + 2].prefixsum))));
	}
}

node query(int arr[], int index, int low,
		int high, int l, int r)
{
	node result;
	result.sum = result.prefixsum =
				result.suffixsum =
				result.maxsum = INT_MIN;

	if (r < low || high < l)
		return result;

	if (l <= low && high <= r)
		return tree[index];

	int mid = (low + high) / 2;

	if (l > mid)
		return query(arr, 2 * index + 2,
					mid + 1, high, l, r);
		
	if (r <= mid)
		return query(arr, 2 * index + 1,
					low, mid, l, r);

	node left = query(arr, 2 * index + 1,
					low, mid, l, r);
	node right = query(arr, 2 * index + 2,
						mid + 1, high, l, r);

	result.sum = left.sum + right.sum;
	result.prefixsum = max(left.prefixsum, left.sum +
						right.prefixsum);
							
	result.suffixsum = max(right.suffixsum,
					right.sum + left.suffixsum);
	result.maxsum = max(result.prefixsum,
					max(result.suffixsum,
					max(left.maxsum,
					max(right.maxsum,
					left.suffixsum + right.prefixsum))));
					
	return result;
}
void solve(){
    int n,x;
    cin>>n>>x;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
	// build the tree
    int b[n];
    for(int k=0;k<=n;k++){
        for(int i=0;i<n;i++){
            b[i]=a[i];
        }
        build(b, 0, n - 1, 0);
        int ans=0;
        for(int i=0;i<k;i++){
            int index = i;
            int value = x;
            b[index]+=x;
            update(b, 0, 0, n - 1, index, b[index]);

        }
        ans=max(ans,query(b, 0, 0, n - 1, 0, n - 1).maxsum);
        int j=1;
        for(int i=k;i<n;i++){
            b[j-1]-=x;
            update(b,0,0,n-1,j-1,b[j-1]);
            b[i]+=x;
            update(b,0,0,n-1,i,b[i]);
            ans=max(ans,query(b,0,0,n-1,0,n-1).maxsum); 
            j++;
        }
        cout<<ans<<" ";
    }
    cout<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
	return 0;
}

