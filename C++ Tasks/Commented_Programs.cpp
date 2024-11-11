//#include <iostream>
//#include <vector>
//#include <set>
//
//
//void mergeSort(std::vector<int>& vct) {
//
//	std::multiset<int> merge;
//
//	for (size_t i = 0; i < vct.size(); i++)
//	{
//		merge.insert(vct[i]);
//	}
//
//	std::size_t i = 0;
//
//	for (auto it = merge.begin(); it != merge.end(); it++) {
//		vct[i++] = *it;
//	}
//}
//
//
//int main() {
//
//	srand(time(0));
//
//	int length;
//	std::cout << "Length = "; std::cin >> length;
//	std::vector<int> vct(length);
//
//	for (size_t i = 0; i < length; i++)
//	{
//		vct[i] = rand() % 100;
//	}
//	
//	std::cout << "Array before merge sort : " << std::endl;
//
//	for (auto& i : vct)
//	{
//		std::cout << i << " ";
//	}
//
//	std::cout << std::endl;
//
//	mergeSort(vct);
//
//	std::cout << "Array after merge sort : " << std::endl;
//
//	for (auto& i : vct)
//	{
//		std::cout << i << " ";
//	}
//}









//#include <iostream>
//#include <vector>
//#include <set>
//
//int main() {
//
//    srand((unsigned)time(0));
//
//    int length;
//    std::cout << "Length = "; std::cin >> length;
//    std::vector<int> vct(length);
//    
//    std::set<int> st;
//
//    for (size_t i = 0; i < length; i++)
//    {
//        vct[i] = rand() % 100;
//    }
//
//    for (std::size_t i = 0; i < vct.size(); i++) {
//        st.insert(vct[i]);
//    }
//
//    vct.clear();
//
//    for (auto it = st.begin(); it != st.end(); it++) {
//        vct.push_back(*it);
//    }
//
//    for (auto& elem : vct) {
//        std::cout << elem << " ";
//    }
//
//    return 0;
//}











//#include <iostream>
//#include <string>
//#include <limits>
//#include <vector>
//
//int txt_lenght(const char* ptr)
//{
//    int n{};
//    while (*ptr != '\0')
//    {
//        ptr++;
//        n++;
//    }
//    return n;
//}
//
//char getRandomSymbolFromAscii(int min, int max) {
//    return min + rand() % (max - min + 1);
//}
//
//int main()
//{
//    srand(time(0));
//
//    std::size_t length = 1000;
//
//    std::cout << "Insert txt as char : ";
//    char* txt = new char[length];
//    std::cin >> txt;
//
//    std::cout << "Insert txt as string : ";
//    std::string str;
//    std::cin >> str;
//
//    std::cout << txt_lenght(txt) << '\n';
//    std::cout << txt_lenght(str.data()) << '\n';
//
//    delete[] txt;
//    txt = 0;
//
//    return 0;
//}
