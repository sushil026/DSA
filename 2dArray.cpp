#include<bits/stdc++.h>
using namespace std;

// int main(){
// 	int n, m, x; 
// 	cin >> n >> m;
// 	vector<vector<int> > mat;
// 	vector<int> vec;
// 	for (int i = 0; i < n; ++i){
// 		for (int j = 0; j < m; ++j){
// 			cin >> x;
// 			vec.push_back(x);
// 		} mat.push_back(vec);
// 		vec.clear();
// 	}
// 	for (int i = 0; i < n; ++i){
// 		for (int j = 0; j < m; ++j){
// 			cout << mat[i][j]<< "	";
// 		}cout << endl;
// 	}
// 	int rStrt= 0, rEnd= n-1, cStrt= 0, cEnd= m-1;
// 	while( rStrt <= rEnd && cStrt <= cEnd){
// 		for (int i = cStrt; i <= cEnd; ++i){
// 			cout << mat[rStrt][i]<< " ";
// 		} rStrt++;
// 		for (int i = rStrt; i <= rEnd ; ++i){
// 			cout << mat[i][cEnd] << " ";
// 		} cEnd--;
// 		for (int i = cEnd; i >= cStrt; i--){
// 			cout << mat[rEnd][i] << " ";
// 		} rEnd--;
// 		for (int i = rEnd; i >= rStrt; i--){
// 			cout << mat[i][cStrt] << " ";
// 		} cStrt++;
// 	}
// 	return 0;
// }
// TRANSPOSE OF A MATRIX :
  // int main(){
 // 	int n, m, x;
 //    cin >> n>> m;
 //    vector< vector<int> > mat;
 //    vector<int> pass;
 //    for (int i = 0; i < n; ++i){
 //        for (int j = 0; j < m; ++j){
 //            cin >> x;
 //            pass.push_back(x);
 //        } mat.push_back(pass);
 //        pass.clear();
 //    }
 //    for (int i = 0; i < n; ++i){
 //        for (int j = 0; j < m; ++j){
 //            cout << mat[i][j]<< " ";
 //        }cout << endl;
 //    }
 //    for (int i = 0; i < n; ++i){
 //        for (int j = i; j < m; ++j){
 //            int temp = mat[j][i];
 //            mat[j][i] = mat[i][j];
 //            mat[i][j] = temp;
 //        }
 //    } cout << "transpose \n";
 //    for (int i = 0; i < n; ++i){
 //        for (int j = 0; j < m; ++j){
 //            cout << mat[i][j]<< " ";
 //        }cout << endl;
 //    }
 // 	return 0;
 // }
//MATRIX MULTIPLICATION :

int main(){
    vector<vector <int>> mat1 ={{2,4,1,2}, {8,4,3,6}, {1,7,9,5}};
    vector<vector <int>> mat2 ={{1,2,3}, {4,5,6}, {7,8,9}, {4,5,6}};
    if( mat1.size() != mat2[0].size()){
        cout << "invalid matices used";
        return 0;
    }
    vector<vector <int>> res( mat1,size(), vector(mat2.size()));
    for( int i =0; i < mat1.size(); i++)
        for (int j = 0; j < mat2[i].size(); j++)
            for (int k = 0; k <= 3; ++k)
                res[i][j] += mat1[i][k]*mat2[k][j];
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            cout << res[i][j]<< "   ";
        cout << endl;
    return 0;
}
//SEARCHING IN A SORTED MATRIX :

// int main(){
//     vector<vector<int> > mat = {{1,4,7,11}, {2,5,8,12}, {3,6,9,16}, {10,13,14,17}};
//     int fin = 10;
//     int r = 0;
//     int c = mat[0].size();
//     while (r>=0 && c>=0){
//         if( mat[r][c] == fin){
//             cout << r<< " "<< c;
//             return 0;
//         }
//         else if( fin < mat[r][c]){
//             c--;
//         }
//         else if( fin > mat[r][c]){
//             r++;
//         }
//         cout << mat[r][c]<< " to ";
//     }
//     return 0;
// }
