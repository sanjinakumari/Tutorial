

#include <fstream>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;
 

// Function to display the menus
void ctrl_p()
{
    system("cls");
    cout<<"\t\t\t******************************";
    cout << "\n\t\t\t*\t CONTROL  PANEL      *\n";
    cout<<"\t\t\t******************************\n";
    cout<<"\t\t\t******************************\n";
    cout << "\t\t\t* 1. ADD BOOK  \t\t     *";
    cout << "\n\t\t\t* 2. DISPLAY BOOKS  \t     *";
    cout << "\n\t\t\t* 3. CHECK PARTICULAR BOOK   *";
    cout << "\n\t\t\t* 4. UPDATE BOOK  \t     *";
    cout << "\n\t\t\t* 5. DELETE BOOK  \t     *";
    cout << "\n\t\t\t* 6. EXIT  \t\t     *";
    cout<<"\n\t\t\t******************************";
}
 
// Function to add book
void add_bk()
{
    system("cls");
    fstream file;
    int num_copy;
    string bk_name, athr_name, bk_id;
    cout<<"\t\t\t*********************************";
    cout << "\n\t\t\t*          ADD BOOKS \t        *  "<<endl;
    cout<<"\t\t\t*********************************"<<endl;
    cout << "\t\t\t Book ID : ";
    cin >> bk_id;
    cout << "\n\t\t\t Book Name : ";
    cin >> bk_name;
    cout << "\n\t\t\t Author Name : ";
    cin >> athr_name;
    cout << "\n\t\t\t No. of Books : ";
    cin >> num_copy;
    
 
    // Open file in append or
    // output mode
    file.open("D:// book.txt",
              ios::out | ios::app);
    file << " " << bk_id << " "
         << bk_name << " " << athr_name
         << " " << num_copy << "\n";
    file.close();
}
 
// Function to display book
void show_bk()
{
    system("cls");
    fstream file;
    int num_copy;
    string bk_name, bk_id, athr_name;

	cout<<"\n\t\t\t\t     **********************************"<<endl;
    cout <<" \t\t\t\t     *           All BOOKS            *"<<endl;
    cout<<"\t\t\t\t     **********************************"<<endl;



    // Open the file in input mode
    file.open("D:// book.txt", ios::in);
    if (!file){
	cout<<"\n\n\t\t\t\t     **********************************"<<endl;
        cout << "\t\t\t\t     *      File Opening Error!       *"<<endl;
    cout<<"\t\t\t\t     **********************************"<<endl;
	}
    else {
    	
    	
 		cout<<"\n\n\t\t***********************************************************************"<<endl;
		cout<<"\t\t*               *               *               *                     *"<<endl;       
	    cout << "\t\t*     Book ID\t*     Book      *"
             << "    Author     *      No. of"
                "Books    *"<<endl;
        cout<<"\t\t*               *               *               *                     *"<<endl; 
		cout<<"\t\t***********************************************************************"<<endl;
		
		
		        
        file >> bk_id >> bk_name;
        file >> athr_name >> num_copy;
 
        // Till end of file is reached
        while (!file.eof()) {
 
            cout << "\t\t        " << bk_id
                 << "\t      " << bk_name
                 << "\t     " << athr_name
                 << "\t             " << num_copy
                 << "\n\n";
            file >> bk_id >> bk_name;
            file >> athr_name >> num_copy;
        }
 
        
 
        // Close the file
        file.close();
    }system("pause");
}
 
// Function to check the book
void check_bk()
{
    system("cls");
    fstream file;
    int num_copy, count = 0;
    string bk_id, bk_name, athr_name, bk_idd;
 
	cout<<"\n\t\t\t    ********************************************"<<endl;
    cout <<" \t\t\t    *          Check Particular Book           *"<<endl;
    cout<<"\t\t\t    ********************************************"<<endl; 
 

    // Open the file in input mode
    file.open("D:// book.txt", ios::in);
    if (!file)
        {
	cout<<"\n\n\t\t\t     **********************************"<<endl;
        cout << "\t\t\t     *      File Opening Error!       *"<<endl;
    cout<<"\t\t\t     **********************************"<<endl;
	}
    else {
 
        cout << "\n\t\t\t    Book ID : ";
        cin >> bk_idd;
        file >> bk_id >> bk_name;
        file >> athr_name >> num_copy;
 
        while (!file.eof()) {
 
            if (bk_idd == bk_id) {
 
                system("cls");
                
             	cout<<"\n\t\t\t    ********************************************"<<endl;
 			    cout <<" \t\t\t    *          Check Particular Book           *"<<endl;
  			    cout<<"\t\t\t    ********************************************"<<endl<<endl;                      
                   
				 cout<<"\t\t\t    ********************************************"<<endl;     
                cout << "\t\t\t    *     Book ID      :  "
                     << bk_id<<"                     *";
                cout << "\n\t\t\t    *     Name         :  "
                     << bk_name<<"                     *";
                cout << "\n\t\t\t    *     Author       :  "
                     << athr_name<<"                     *";
                cout << "\n\t\t\t    *     No. of Books :  "
                     << num_copy<<"                     *"<<endl;
                cout<<"\t\t\t    ********************************************"<<endl;     
                cout << endl
                     << endl;
                count++;
                break;
            }
            file >> bk_id >> bk_name;
            file >> athr_name >> num_copy;
        }
        
        file.close();
        if (count == 0){
			cout<<"\n\n\t\t\t     ****************************"<<endl;
            cout << "\t\t\t     *Book ID Not Found...      *"<<endl;
            cout<<"\t\t\t     ****************************"<<endl;
                  
   		 }
}
system("pause");
}
 
// Function to update the book
void update_bk()
{
    system("cls");
    fstream file, file1;
    int num_copy, no_co, count = 0;
    string bk_name, bk_na, athr_name;
    string athr_na, bk_idd, bk_id;
 
 	cout<<"\n\t\t\t    ********************************************"<<endl;
    cout <<" \t\t\t    *             Update Book Record           *"<<endl;
  	 cout<<"\t\t\t    ********************************************"<<endl;
 
 
 
 
    file1.open("D:// book1.txt",
               ios::app | ios::out);
    file.open("D:// book.txt", ios::in);
 
    if (!file)
        {
	cout<<"\n\n\t\t\t        **********************************"<<endl;
        cout << "\t\t\t        *      File Opening Error!       *"<<endl;
    cout<<"\t\t\t        **********************************"<<endl;
	}
    else {
 
        cout << "\t\t\t    Book ID : ";
        cin >> bk_id;
        file >> bk_idd >> bk_name;
        file >> athr_name >> num_copy;
 
        // Till end of file is reached
        while (!file.eof()) {
            if (bk_id == bk_idd) {
                system("cls");
               
			   
			    cout<<"\n\t\t\t    ********************************************"<<endl;
    			cout <<" \t\t\t    *             Update Book Record           *"<<endl;
  	   			cout<<"\t\t\t    ********************************************"<<endl;
                     
                     
                cout << "\t\t\t    New Book Name : ";
                cin >> bk_na;
                cout << "\n\t\t\t    Author Name : ";
                cin >> athr_na;
                cout << "\n\t\t\t    No. of Books : ";
                cin >> no_co;
                file1 << " " << bk_id << " "
                      << bk_na << " "
                      << athr_na << " " << no_co
                      << "\n\n";
                count++;
            }
            else
                file1 << " " << bk_idd
                      << " " << bk_name
                      << " " << athr_name
                      << " " << num_copy
                      << "\n\n";
            file >> bk_idd >> bk_name;
            file >> athr_name >> num_copy;
        }
        if (count == 0)
            {
			cout<<"\n\n\t\t\t     ****************************"<<endl;
            cout << "\t\t\t     *Book ID Not Found...      *"<<endl;
            cout<<"\t\t\t     ****************************"<<endl;
                  
   		 }
    }
    cout << endl;
    system("pause");
 
    // Close the files
    file.close();
    file1.close();
    remove("D:// book.txt");
    rename("D:// book1.txt",
           "D:// book.txt");
}
 
// Function to delete book
void del_bk()
{
    system("cls");
    fstream file, file1;
    int num_copy, count = 0;
    string bk_id, bk_idd, bk_name, athr_name;
    
    cout<<"\n\t\t\t    ********************************************"<<endl;
    cout <<" \t\t\t    *               Delete a Book              *"<<endl;
  	cout<<"\t\t\t    ********************************************"<<endl;
    
 
    // Append file in output mode
    file1.open("D:// book1.txt",
               ios::app | ios::out);
    file.open("D:// book.txt",
              ios::in);
 
    if (!file)
       {
	cout<<"\n\n\t\t\t        **********************************"<<endl;
        cout << "\t\t\t        *      File Opening Error!       *"<<endl;
    cout<<"\t\t\t        **********************************"<<endl;
	}
    else {
 
        cout << "\t\t\t    Book ID : ";
        cin >> bk_id;
        file >> bk_idd >> bk_name;
        file >> athr_name >> num_copy;
        while (!file.eof()) {
 
            if (bk_id == bk_idd) {
 
                system("cls");
                
    cout<<"\n\t\t\t    ********************************************"<<endl;
    cout <<" \t\t\t    *               Delete a Book              *"<<endl;
  	cout<<"\t\t\t    ********************************************"<<endl<<endl<<endl;
           
		      cout<<"\t\t\t    ******************************************"<<endl;  
                cout << "\t\t\t    *       Book is Deleted "
                        "Successfully...  *"<<endl;
              cout<<"\t\t\t    ******************************************"<<endl;          
                count++;
            }
            else
                file1 << " " << bk_idd
                      << " " << bk_name
                      << " " << athr_name
                      << " " << num_copy
                      << "\n\n";
            file >> bk_idd >> bk_name;
            file >> athr_name >> num_copy;
        }
        if (count == 0)
           {
			cout<<"\n\n\t\t\t     ****************************"<<endl;
            cout << "\t\t\t     *Book ID Not Found...      *"<<endl;
            cout<<"\t\t\t     ****************************"<<endl;
                  
   		 }
    }
    system("pause");
 
    // Close the file
    file.close();
    file1.close();
    remove("D:// book.txt");
    rename("D:// book1.txt",
           "D:// book.txt");
}
 
// Function for book shop record
void bookShopRecord()
{
    int choic;
    char n;
    
 
    while (1) {
 
        ctrl_p();
       
        cout << "\n\t\t\t  Enter your choice : ";
       
        cin >> choic;
       
        switch (choic) {
 
        case 1:
            do {
 
                add_bk();
                cout<<"\n\n\t\t\t**********************************"<<endl;
                cout << "\t\t\tWant to add"
                     << " another book? "
                        "(y/n) : \t";
                       
                cin >> n;
            } while (n == 'y');
            break;
 
        case 2:
            show_bk();
            break;
 
        case 3:
            check_bk();
            break;
        case 4:
            update_bk();
            break;
 
        case 5:
            del_bk();
            break;
 
        case 6:
            exit(0);
            break;
 
        default:{
			
		cout<<"\n\n\t\t\t******************************";
    	cout << "\n\t\t\t*\t INVALID CHOICE      *\n";
    	cout<<"\t\t\t******************************\n";
            
        
		system("pause");
		}break;
		
		}
        
    }
}
 
// Driver Code
int main()
{
    // Function Call
    bookShopRecord();
 
    return 0;
}
