#ifndef LOGIN_H
#define LOGIN_H
#include<iostream>
#include <string>
#include "employee.h"
#include "Database.h"
#include<fstream>
using namespace std;
vector< Employee_List*> Customer_Service_list;
vector< Employee_List*> Senior_Customer_Service_list;
vector< Employee_List*> Finacial_Manager_List;
vector< Employee_List*> Administration_Manager_list;
vector< Employee_List*> HR_List;
vector< Employee_List*> Product_Manager_list;
vector< Employee_List*> Service_Manager_list;
 extern vector<Sub_Team_List*> TopChef;
 extern vector<Sub_Team_List*> SeniorWaitress;
 extern vector<Sub_Team_List*> Photography;
 extern vector<Sub_Team_List*> Music;
 extern vector<Sub_Team_List*> GraphicDesign;
 extern vector<Sub_Team_List*> Decorations;
 extern vector<Sub_Team_List*> Network;
void log_in()
{
	string Department;
	string username;
	
	while (1)
	{
		cout << "please enter your department or enter EXIT to exit login_system " << endl;
		cout << "CustomerService \n SeniorCustomerService  FinacialManager  AdministrationManager   HR  ProductManager ServiceManager Subteam" << endl;
		cin >> Department;
		if (Department == "CustomerService")
		{
			int M = 0;
			bool N=false;
			cout << "Welcome " << Department << ",please enter your name" << endl;
			cin >> username;
			for (M = 0; M < Customer_Service_list.size(); M++)
			{
				if (username == Customer_Service_list[M]->GetEmployeeName())
				{
					N = true;
					break;

				}
			}
			if (N == true)
			{
				string input1;
				int i=3;
				while(i)
				{
					cout<<" Please input password : ";
						cin >> input1;
						if (input1 == Customer_Service_list[M]->GetEmployeePassword())
						{
                           CustomerService();
						   return;
					    }
						else
						{
							cout << "wrong password, please enter again" << endl;
						}
						i--;
				}
				if (i == 0)
				{   
					cout << "ERROR" << endl;
					
					return;
					
				}
				
			}
			else
			{
				cout << "No Such User" << endl;
			}
		}
		else if (Department == "SeniorCustomerService")
		{
			int M = 0;
			bool N = false;
			cout << "Welcome " << Department << ",please enter your name" << endl;
			cin >> username;
			for (M = 0; M < Senior_Customer_Service_list.size(); M++)
			{
				if (username == Senior_Customer_Service_list[M]->GetEmployeeName())
				{
					N = true;
					break;
				}
			}
			if (N == true)
			{
				string input1;
				int i = 3;
				while (i)
				{
					cout << " Please input password : ";
					cin >> input1;
					if (input1 == Senior_Customer_Service_list[M]->GetEmployeePassword())
					{
						SeniorCustomerService();
						return;
					}
					else
					{
						cout << "wrong password, please enter again" << endl;
					}
					i--;
				}
				if (i == 0)
				{
					cout << "ERROR" << endl;

					return;

				}

			}
			else
			{
				cout << "No Such User" << endl;
			}
		}
		else if (Department == "FinacialManager")
		{
			int M = 0;
			bool N = false;
			cout << "Welcome " << Department << ",please enter your name" << endl;
			cin >> username;
			for (M = 0; M < Finacial_Manager_List.size(); M++)
			{
				if (username == Finacial_Manager_List[M]->GetEmployeeName())
				{
					N = true;
					break;
				}
			}
			if (N == true)
			{
				string input1;
				int i = 3;
				while (i)
				{
					cout << " Please input password : ";
					cin >> input1;
					if (input1 == Finacial_Manager_List[M]->GetEmployeePassword())
					{
						FinacialManager();
						return;
					}
					else
					{
						cout << "wrong password, please enter again" << endl;
					}
					i--;
				}
				if (i == 0)
				{
					cout << "ERROR" << endl;

					return;

				}

			}
			else
			{
				cout << "No Such User" << endl;
			}
		}
		else if (Department == "AdministrationManager")
		{
		    int M = 0;
			bool N = false;
			cout << "Welcome " << Department << ",please enter your name" << endl;
			cin >> username;
			for (M = 0; M < Administration_Manager_list.size(); M++)
			{
				if (username == Administration_Manager_list[M]->GetEmployeeName())
				{
					N = true;
					break;
				}
			}
			if (N == true)
			{
				string input1;
				int i = 3;
				while (i)
				{
					cout << " Please input password : ";
					cin >> input1;
					if (input1 == Administration_Manager_list[M]->GetEmployeePassword())
					{
						AdministrationManager();
						return;
					}
					else
					{
						cout << "wrong password, please enter again" << endl;
					}
					i--;
				}
				if (i == 0)
				{
					cout << "ERROR" << endl;

					return;

				}

			}
			else
			{
				cout << "No Such User" << endl;
			}
		}
		else if (Department == "ProductManager")
		{
			int M = 0;
			bool N = false;
			cout << "Welcome " << Department << ",please enter your name" << endl;
			cin >> username;
			for (M = 0; M < Product_Manager_list.size(); M++)
			{
				if (username == Product_Manager_list[M]->GetEmployeeName())
				{
					N = true;
					break;
				}
			}
			if (N == true)
			{
				string input1;
				int i = 3;
				while (i)
				{
					cout << " Please input password : ";
					cin >> input1;
					if (input1 == Product_Manager_list[M]->GetEmployeePassword())
					{
						ProductManager();
						return;
					}
					else
					{
						cout << "wrong password, please enter again" << endl;
					}
					i--;
				}
				if (i == 0)
				{
					cout << "ERROR" << endl;

					return;

				}

			}
			else
			{
				cout << "No Such User" << endl;
			}
		}
		else if (Department == "ServiceManager")
		{
		int M = 0;
		bool N = false;
		cout << "Welcome " << Department << ",please enter your name" << endl;
		cin >> username;
		for (M = 0; M < Service_Manager_list.size(); M++)
		{
			if (username == Service_Manager_list[M]->GetEmployeeName())
			{
				N = true;
				break;
			}
		}
		if (N == true)
		{
			string input1;
			int i = 3;
			while (i)
			{
				cout << " Please input password : ";
				cin >> input1;
				if (input1 == Service_Manager_list[M]->GetEmployeePassword())
				{
					ServiceManager();
					return;
				}
				else
				{
					cout << "wrong password, please enter again" << endl;
				}
				i--;
			}
			if (i == 0)
			{
				cout << "ERROR" << endl;

				return;

			}

		}
		else
		{
			cout << "No Such User" << endl;
		}
		}
		else if (Department == "HR")
		{
		    int M = 0;
			bool N = false;
			cout << "Welcome " << Department << ",please enter your name" << endl;
			cin >> username;
			for (int M = 0; M < HR_List.size(); M++)
			{
				if (username == HR_List[M]->GetEmployeeName())
				{
					N = true;
					break;
				}
			}
			if (N == true)
			{
				string input1;
				int i = 3;
				while (i)
				{
					cout << " Please input password : ";
					cin >> input1;
					if (input1 == HR_List[M]->GetEmployeePassword())
					{
						HR();
						return;
					}
					else
					{
						cout << "wrong password, please enter again" << endl;
					}
					i--;
				}
				if (i == 0)
				{
					cout << "ERROR" << endl;

					return;

				}

			}
			else
			{
				cout << "No Such User" << endl;
			}
		}
		else if (Department == "Subteam")
		{
			cout << "Welcome, please enter you job(TopChef SeniorWaitress Photography Music GraphicDesign Decorations Network) or Enter Exit to exit: " << endl;
			string job;
			cin >> job;
			if (job == "TopChef")
			{
				int M = 0;
				bool N = false;
				cout << "Welcome " << job << ",please enter your name" << endl;
				cin >> username;
				for (M = 0; M < TopChef.size(); M++)
				{
					if (username == TopChef[M]->GetEmployeeName())
					{
						N = true;
						break;
					}
				}
				if (N == true)
				{
					string input1;
					int i = 3;
					while (i)
					{
						cout << " Please input password : ";
						cin >> input1;
						if (input1 == TopChef[M]->GetEmployeePassword())
						{
							subteam(job,TopChef[M]->GetEmployeeName());
							return;
						}
						else
						{
							cout << "wrong password, please enter again" << endl;
						}
						i--;
					}
					if (i == 0)
					{
						cout << "ERROR" << endl;

						return;

					}

				}
				else
				{
					cout << "No Such User" << endl;
				}
			}
			else if (job=="SeniorWaitress")
			{
				int M = 0;
				bool N = false;
				cout << "Welcome " << job << ",please enter your name" << endl;
				cin >> username;
				for (M = 0; M < SeniorWaitress.size(); M++)
				{
					if (username == SeniorWaitress[M]->GetEmployeeName())
					{
						N = true;
						break;
					}
				}
				if (N == true)
				{
					string input1;
					int i = 3;
					while (i)
					{
						cout << " Please input password : ";
						cin >> input1;
						if (input1 == SeniorWaitress[M]->GetEmployeePassword())
						{
							subteam(job, SeniorWaitress[M]->GetEmployeeName());
							return;
						}
						else
						{
							cout << "wrong password, please enter again" << endl;
						}
						i--;
					}
					if (i == 0)
					{
						cout << "ERROR" << endl;

						return;

					}

				}
				else
				{
					cout << "No Such User" << endl;
				}
			}
			else if (job=="Photography")
			{
				int M = 0;
				bool N = false;
				cout << "Welcome " << job << ",please enter your name" << endl;
				cin >> username;
				for (M = 0; M < Photography.size(); M++)
				{
					if (username == Photography[M]->GetEmployeeName())
					{
						N = true;
						break;
					}
				}
				if (N == true)
				{
					string input1;
					int i = 3;
					while (i)
					{
						cout << " Please input password : ";
						cin >> input1;
						if (input1 == Photography[M]->GetEmployeePassword())
						{
							subteam(job, Photography[M]->GetEmployeeName());
							return;
						}
						else
						{
							cout << "wrong password, please enter again" << endl;
						}
						i--;
					}
					if (i == 0)
					{
						cout << "ERROR" << endl;

						return;

					}

				}
				else
				{
					cout << "No Such User" << endl;
				}
			}
			else if (job == "Music")
			{
			int M = 0;
			bool N = false;
			cout << "Welcome " << job << ",please enter your name" << endl;
			cin >> username;
			for (M = 0; M < Music.size(); M++)
			{
				if (username == Music[M]->GetEmployeeName())
				{
					N = true;
					break;
				}
			}
			if (N == true)
			{
				string input1;
				int i = 3;
				while (i)
				{
					cout << " Please input password : ";
					cin >> input1;
					if (input1 == Music[M]->GetEmployeePassword())
					{
						subteam(job, Music[M]->GetEmployeeName());
						return;
					}
					else
					{
						cout << "wrong password, please enter again" << endl;
					}
					i--;
				}
				if (i == 0)
				{
					cout << "ERROR" << endl;

					return;

				}

			}
			else
			{
				cout << "No Such User" << endl;
			}
             }
			
			else if (job=="GraphicDesign")
			{
			int M = 0;
			bool N = false;
			cout << "Welcome " << job << ",please enter your name" << endl;
			cin >> username;
			for (M = 0; M < GraphicDesign.size(); M++)
			{
				if (username == GraphicDesign[M]->GetEmployeeName())
				{
					N = true;
					break;
				}
			}
			if (N == true)
			{
				string input1;
				int i = 3;
				while (i)
				{
					cout << " Please input password : ";
					cin >> input1;
					if (input1 == GraphicDesign[M]->GetEmployeePassword())
					{
						subteam(job, GraphicDesign[M]->GetEmployeeName());
						return;
					}
					else
					{
						cout << "wrong password, please enter again" << endl;
					}
					i--;
				}
				if (i == 0)
				{
					cout << "ERROR" << endl;

					return;

				}

			}
			else
			{
				cout << "No Such User" << endl;
			}
            }
			else if (job=="Decorations")
			{
			int M = 0;
			bool N = false;
			cout << "Welcome " << job << ",please enter your name" << endl;
			cin >> username;
			for (M = 0; M < Decorations.size(); M++)
			{
				if (username == Decorations[M]->GetEmployeeName())
				{
					N = true;
					break;
				}
			}
			if (N == true)
			{
				string input1;
				int i = 3;
				while (i)
				{
					cout << " Please input password : ";
					cin >> input1;
					if (input1 == Decorations[M]->GetEmployeePassword())
					{
						subteam(job, Decorations[M]->GetEmployeeName());
						return;
					}
					else
					{
						cout << "wrong password, please enter again" << endl;
					}
					i--;
				}
				if (i == 0)
				{
					cout << "ERROR" << endl;

					return;

				}

			}
			else
			{
				cout << "No Such User" << endl;
			}
            }
			else if (job=="Network")
			{
			int M = 0;
			bool N = false;
			cout << "Welcome " << job << ",please enter your name" << endl;
			cin >> username;
			for (M = 0; M < Network.size(); M++)
			{
				if (username == Network[M]->GetEmployeeName())
				{
					N = true;
					break;
				}
			}
			if (N == true)
			{
				string input1;
				int i = 3;
				while (i)
				{
					cout << " Please input password : ";
					cin >> input1;
					if (input1 == Network[M]->GetEmployeePassword())
					{
						subteam(job, Network[M]->GetEmployeeName());
						return;
					}
					else
					{
						cout << "wrong password, please enter again" << endl;
					}
					i--;
				}
				if (i == 0)
				{
					cout << "ERROR" << endl;

					return;

				}

			}
			else
			{
				cout << "No Such User" << endl;
			}
            }
			else if (job=="Exit")
			{
				return;
			}
			else
			{
				cout << "No such job, please enter again or exit" << endl;
			}
		}
		else if (Department == "EXIT")
		{
			return;
		}
		else 
		{
			cout << "No such Department, please enter again or exit" << endl;
			return;
		}
		
	}
}
void Initialize()
{
	fstream in;
	in.open("CustomerService.txt", ios::in);
	if (!in)
	{
		cout << "can not open txt" << endl;
		exit;
	}
	if (in)
	{
		string str[4];
		while (getline(in, str[0]) && getline(in, str[1]) && getline(in, str[2]) && getline(in, str[3]))
		{
			Customer_Service_list.push_back(new Employee_List(str[0], str[1], str[2], str[3]));
		}
	}
	in.close();
/*	for (int i = 0; i < Customer_Service_list.size(); i++)
	{
		cout << Customer_Service_list[i]->GetEmployeeName() << "\t" << Customer_Service_list[i]->GetEmployeeID() << "\t" << Customer_Service_list[i]->GetEmployeeEmail() << endl;
	}
*/
	in.open("SeniorCustomerService.txt", ios::in);
	if (!in)
	{
		cout << "can not open txt" << endl;
		exit;
	}
	if (in)
	{
		string str[4];
		while (getline(in, str[0]) && getline(in, str[1]) && getline(in, str[2]) && getline(in, str[3]))
		{
			Senior_Customer_Service_list.push_back(new Employee_List(str[0], str[1], str[2], str[3]));
		}
	}
	in.close();
/*	for (int i = 0; i < Senior_Customer_Service_list.size(); i++)
	{
		cout << Senior_Customer_Service_list[i]->GetEmployeeName() <<"\t" << Senior_Customer_Service_list[i]->GetEmployeeID() << "\t" << Senior_Customer_Service_list[i]->GetEmployeeEmail() << endl;
	}
*/
	in.open("FinacialManager.txt", ios::in);
	if (!in)
	{
		cout << "can not open txt" << endl;
		exit;
	}
	if (in)
	{
		string str[4];
		while (getline(in, str[0]) && getline(in, str[1]) && getline(in, str[2]) && getline(in, str[3]))
		{
			Finacial_Manager_List.push_back(new Employee_List(str[0], str[1], str[2], str[3]));
		}
	}
	in.close();
/*	for (int i = 0; i < Finacial_Manager_List.size(); i++)
	{
		cout << Finacial_Manager_List[i]->GetEmployeeName() << "\t" << Finacial_Manager_List[i]->GetEmployeeID() << "\t" << Finacial_Manager_List[i]->GetEmployeeEmail() << endl;
	}
*/
	in.open("AdministrationManager.txt", ios::in);
	if (!in)
	{
		cout << "can not open txt" << endl;
		exit;
	}
	if (in)
	{
		string str[4];
		while (getline(in, str[0]) && getline(in, str[1]) && getline(in, str[2]) && getline(in, str[3]))
		{
			Administration_Manager_list.push_back(new Employee_List(str[0], str[1], str[2], str[3]));
		}
	}
	in.close();
/*	for (int i = 0; i < Administration_Manager_list.size(); i++)
	{
		cout << Administration_Manager_list[i]->GetEmployeeName() << "\t" << Administration_Manager_list[i]->GetEmployeeID() << "\t" << Administration_Manager_list[i]->GetEmployeeEmail() << endl;
	}
	*/
	in.open("Product_Manager_list.txt", ios::in);           //************************
	if (!in)
	{
		cout << "can not open txt" << endl;
		exit;
	}
	if (in)
	{
		string str[4];
		while (getline(in, str[0]) && getline(in, str[1]) && getline(in, str[2]) && getline(in, str[3]))
		{
			Product_Manager_list.push_back(new Employee_List(str[0], str[1], str[2], str[3]));
		}
	}
	in.close();
	/*	for (int i = 0; i < Product_Manager_list.size(); i++)
	{
		cout << Product_Manager_list[i]->GetEmployeeName() << "\t" << Product_Manager_list[i]->GetEmployeeID() << "\t" << Product_Manager_list[i]->GetEmployeeEmail() << endl;
	}*/
	in.open("Service_Manager_list.txt", ios::in);           //************************
	if (!in)
	{
		cout << "can not open txt" << endl;
		exit;
	}
	if (in)
	{
		string str[4];
		while (getline(in, str[0]) && getline(in, str[1]) && getline(in, str[2]) && getline(in, str[3]))
		{
			Service_Manager_list.push_back(new Employee_List(str[0], str[1], str[2], str[3]));
		}
	}
	in.close();
	/*	for (int i = 0; i < Service_Manager_list.size(); i++)
	{
		cout << Service_Manager_list[i]->GetEmployeeName() << "\t" << Service_Manager_list[i]->GetEmployeeID() << "\t" << Service_Manager_list[i]->GetEmployeeEmail() << endl;
	}*/
	in.open("HRManager.txt", ios::in);
	if (!in)
	{
		cout << "can not open txt" << endl;
		exit;
	}
	if (in)
	{
		string str[4];
		while (getline(in, str[0]) && getline(in, str[1]) && getline(in, str[2]) && getline(in, str[3]))
		{
			HR_List.push_back(new Employee_List(str[0], str[1], str[2], str[3]));
		}
	}
	in.close();
	/*	for (int i = 0; i < HR_List.size(); i++)
	{
		cout << HR_List[i]->GetEmployeeName() << "\t" << HR_List[i]->GetEmployeeID() << "\t" << HR_List[i]->GetEmployeeEmail() << endl;
	}
	*/
	in.open("TopChef.txt", ios::in);
	if (!in)
	{
		cout << "can not open txt" << endl;
		exit;
	}
	if (in)
	{
		string str[4];
		while (getline(in, str[0]) && getline(in, str[1]) && getline(in, str[2]) && getline(in, str[3]))
		{
			TopChef.push_back(new Sub_Team_List(str[0], str[1], str[2], str[3]));
		}
	}
	in.close();
	/*	for (int i = 0; i < TopChef.size(); i++)
	{
		cout << TopChef[i]->GetEmployeeName() << "\t" << TopChef[i]->GetEmployeeID() << "\t" << TopChef[i]->GetEmployeeEmail() << endl;
	}
	*/
	in.open("Decorations.txt", ios::in);   // **************************
	if (!in)
	{
		cout << "can not open txt" << endl;
		exit;
	}
	if (in)
	{
		string str[4];
		while (getline(in, str[0]) && getline(in, str[1]) && getline(in, str[2]) && getline(in, str[3]))
		{
			Decorations.push_back(new Sub_Team_List(str[0], str[1], str[2], str[3]));
		}
	}
	in.close();
	/*	for (int i = 0; i < Decorations.size(); i++)
	{
		cout << Decorations[i]->GetEmployeeName() << "\t" << Decorations[i]->GetEmployeeID() << "\t" << Decorations[i]->GetEmployeeEmail() << endl;
	}
	*/
	in.open("SeniorWaitress.txt", ios::in);  //******************************
	if (!in)
	{
		cout << "can not open txt" << endl;
		exit;
	}
	if (in)
	{
		string str[4];
		while (getline(in, str[0]) && getline(in, str[1]) && getline(in, str[2]) && getline(in, str[3]))
		{
			SeniorWaitress.push_back(new Sub_Team_List(str[0], str[1], str[2], str[3]));
		}
	}
	in.close();
	/*	for (int i = 0; i < SeniorWaitress.size(); i++)
	{
		cout << SeniorWaitress[i]->GetEmployeeName() << "\t" << SeniorWaitress[i]->GetEmployeeID() << "\t" << SeniorWaitress[i]->GetEmployeeEmail() << endl;
	}
	*/
	in.open("Photography.txt", ios::in);           //************************
	if (!in)
	{
		cout << "can not open txt" << endl;
		exit;
	}
	if (in)
	{
		string str[4];
		while (getline(in, str[0]) && getline(in, str[1]) && getline(in, str[2]) && getline(in, str[3]))
		{
			Photography.push_back(new Sub_Team_List(str[0], str[1], str[2], str[3]));
		}
	}
	in.close();
	/*	for (int i = 0; i < Photography.size(); i++)
	{
		cout << Photography[i]->GetEmployeeName() << "\t" << Photography[i]->GetEmployeeID() << "\t" << Photography[i]->GetEmployeeEmail() << endl;
	}*/
	in.open("Music.txt", ios::in);           //************************
	if (!in)
	{
		cout << "can not open txt" << endl;
		exit;
	}
	if (in)
	{
		string str[4];
		while (getline(in, str[0]) && getline(in, str[1]) && getline(in, str[2]) && getline(in, str[3]))
		{
			Music.push_back(new Sub_Team_List(str[0], str[1], str[2], str[3]));
		}
	}
	in.close();
	/*	for (int i = 0; i < Music.size(); i++)
	{
		cout << Music[i]->GetEmployeeName() << "\t" << Music[i]->GetEmployeeID() << "\t" << Music[i]->GetEmployeeEmail() << endl;
	}*/
	in.open("GraphicDesign.txt", ios::in);           //************************
	if (!in)
	{
		cout << "can not open txt" << endl;
		exit;
	}
	if (in)
	{
		string str[4];
		while (getline(in, str[0]) && getline(in, str[1]) && getline(in, str[2]) && getline(in, str[3]))
		{
			GraphicDesign.push_back(new Sub_Team_List(str[0], str[1], str[2], str[3]));
		}
	}
	in.close();
	/*	for (int i = 0; i < GraphicDesign.size(); i++)
	{
		cout << GraphicDesign[i]->GetEmployeeName() << "\t" << GraphicDesign[i]->GetEmployeeID() << "\t" << GraphicDesign[i]->GetEmployeeEmail() << endl;
	}*/
	in.open("Network.txt", ios::in);           //************************
	if (!in)
	{
		cout << "can not open txt" << endl;
		exit;
	}
	if (in)
	{
		string str[4];
		while (getline(in, str[0]) && getline(in, str[1]) && getline(in, str[2]) && getline(in, str[3]))
		{
			Network.push_back(new Sub_Team_List(str[0], str[1], str[2], str[3]));
		}
	}
	in.close();
	/*	for (int i = 0; i < Network.size(); i++)
	{
		cout << Network[i]->GetEmployeeName() << "\t" << Network[i]->GetEmployeeID() << "\t" << Network[i]->GetEmployeeEmail() << endl;
	}*/
}
#endif;