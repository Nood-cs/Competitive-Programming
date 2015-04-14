////AC ... stack
//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<string>
//#include<stack>
//using namespace std;
//
//string str;
//stack <char> empty;
//vector< stack<char> > container; 
//
//int stackedContainers(int i){
//	for (int j = 0; j < container.size(); j++){
//		if (str[i] <= container[j].top()){
//			container[j].push(str[i]); 
//			return 0; 
//		}
//	}
//	container.push_back(empty); 
//	container[container.size() - 1].push(str[i]);
//	return 1;
//}
//
//int main()
//{
//	int t = 0; 
//	while (cin>>str && str != "end"){
//		container.clear();
//		int len = str.length();
//		int stacks = 0; 
//		for (int i = 0; i < len; i++){
//			stacks += stackedContainers(i);
//		}
//		t++;
//		cout <<"Case "<<t<<": "<<stacks << endl;
//	}
//	//system("pause");
//	return 0;
//}