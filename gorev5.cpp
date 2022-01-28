#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main() {
		
		std::fstream bfile;
        bfile.open("B.txt");
        std::vector<int> b_vector;
        int rownumber;
        int sayi2;
        if (bfile.is_open()){
        	
		while (bfile >> sayi2) {
			rownumber++;
            b_vector.push_back(sayi2);
    }
	}
	
		std::cout << "The vector B is;" << std::endl;
        for (int i = 0; i < b_vector.size(); i++) {
        std::cout << b_vector.at(i) << std::endl;
        
};
		std::cout << std::endl;
		
		
        bfile.close();
		
        std::fstream afile;
        afile.open("A.txt");

        std::vector<int> a_vector;
        int sayi;
        if (afile.is_open()){
        	
		while (afile >> sayi) {
			
            a_vector.push_back(sayi);
    }
	}
		std::cout << "The vector A is;" << std::endl;
        for (int i = 0; i < a_vector.size(); i++) {
        std::cout << a_vector.at(i) << ' ';
        if (i%rownumber == rownumber - 1 ){
			std::cout << std::endl;        	
        	
		}
    };

	
        afile.close();
      
    

}

