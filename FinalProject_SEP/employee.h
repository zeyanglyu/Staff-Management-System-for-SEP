#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include <iostream>
#include<vector>
#include "database.h"
using namespace std;

vector<ClientRequest*>CR;
vector<EventRequest*>ER;
vector<HRRequest*>HRR;
vector<Sub_Team_List*> TopChef;
vector<Sub_Team_List*> SeniorWaitress;
vector<Sub_Team_List*> Photography;
vector<Sub_Team_List*> Music;
vector<Sub_Team_List*> GraphicDesign;
vector<Sub_Team_List*> Decorations;
vector<Sub_Team_List*> Network;
void CustomerService()
{
	while (1)
	{
		string input;
		cout << "please choose functions: CerateClientRequestForm  Exit" << endl;
		cin >> input;
		if (input == "CerateClientRequestForm")
		{
			string name;
			string date;
			string taskid;
			string budget;
			string request;
			string email;
			cout << "please enter client's name: ";
			cin >> name;
			cout << endl;
			cout << "please enter client's request: ";
			cin >> request;
			cout << endl;
			cout << "please enter client's budget: ";
			cin >> budget;
			cout << endl;
			cout << "please enter client's email: ";
			cin >> email;
			cout << endl;
			cout << "please enter Taskid: ";
			cin >> taskid;
			cout << endl;
			cout << "please enter Date: ";
			cin >> date;
			cout << endl;
			CR.push_back(new ClientRequest(name, request, budget, taskid, date, email));
		}
		else if (input == "Exit")
		{
			return;
		}
		else
		{
			cout << "wrong command, please try again" << endl;
		}
	}
}
void SeniorCustomerService()
{
	while (1)
	{
		string input;
		cout << "please choose a function view / Exit" << endl;
		cin >> input;
		if (input == "view")
		{
			int i = 0;
			for (i = 0; i < CR.size(); i++)
			{
				cout << "index:" << i + 1 << endl;
				CR[i]->ViewClientRequest();
			}
			cout << "please choose a request" << endl;
			cin >> i;
			if (i > 0 && i <= CR.size())
			{
				i--;
				if (CR[i]->GetStatus() == "Created")
				{
					string input1;
					cout << "please choose Approve / Reject the request" << endl;
					cin >> input1;
					if (input1 == "Approve")
					{
						CR[i]->ApprovedBySeniorCustomerService();
					}
					else if (input1 == "Reject")
					{
						CR[i]->RejectedBySeniorCustomerService();
					}
					else
					{
						cout << "wrong command, please try again" << endl;
					}
				}
				else if (CR[i]->GetStatus() == "ApprovedByAdministrationManager")
				{
					cout << "You can arrange a meeting,the client's email is: " << CR[i]->GetEmail() << endl;
				}
				else if (CR[i]->GetStatus() == "RejectByAdministrationManager")
				{
					cout << "The request has been rejected by administration manager, please contact client, the client's email is: " << CR[i]->GetEmail() << endl;
				}
				else
				{
					cout << "No Available Operation" << endl;
				}
			}
			else
			{
				cout << "wrong index" << endl;
			}
		}
		else if (input == "Exit")
		{
			return;
		}
		else
		{
			cout << "wrong command, please try again" << endl;
		}
	}
}
void FinacialManager()
{
	while (1)
	{
		string input;
		cout << "please choose a function: ViewClientRequest / ViewEventRequest / Exit" << endl;
		cin >> input;
		if (input == "ViewClientRequest")
		{
			int i = 0;
			for (i = 0; i < CR.size(); i++)
			{
				cout << "index:" << i + 1 << endl;
				CR[i]->ViewClientRequest();
			}
			cout << "please choose a request" << endl;
			cin >> i;
			if (i > 0 && i <= CR.size())
			{
				i--;
				if (CR[i]->GetStatus() == "ApprovedBySeniorCustomerService")
				{
					string Feedback;
					cout << "please add feedback" << endl;
					cin >> Feedback;
					CR[i]->AddFeedback(Feedback);
				}
				else
				{
					cout << "No Available Operation" << endl;
				}
			}
			else
			{
				cout << "wrong index" << endl;
			}
		}
		else if (input == "ViewEventRequest")
		{
			int t = 0;
			for (int i = 0; i < ER.size(); i++)
			{
				if (ER[i]->GetProductManagerFinish() && ER[i]->GetServiceManagerFinish())
				{
					cout << "index:" << ++t << endl;
					ER[i]->CheckFullEventRequest();
				}
			}
			if (t == 0)
			{
				cout << "No available EventRequest" << endl;
			}
		}
		else if (input == "Exit")
		{
			return;
		}
		else
		{
			cout << "wrong command, please try again" << endl;
		}
	}
}
void AdministrationManager()
{
	while (1)
	{
		string input;
		cout << "please choose a function: View / Exit" << endl;
		cin >> input;
		if (input == "View")
		{
			int i = 0;
			for (i = 0; i < CR.size(); i++)
			{
				cout << "index:" << i + 1 << endl;
				CR[i]->ViewClientRequest();
			}
			cout << "please choose a request" << endl;
			cin >> i;
			if (i > 0 && i <= CR.size())
			{
				i--;
				if (CR[i]->GetStatus() == "AddedFeedback")
				{
					CR[i]->ViewFeedback();
					string input1;
					cout << "please choose Approve / Reject the request" << endl;
					cin >> input1;
					if (input1 == "Approve")
					{
						CR[i]->ApprovedByAdministrationManager();
						string Name = CR[i]->GetName();
						string Taskid = CR[i]->GetTaskid();
						string budget = CR[i]->GetBudget();
						string date = CR[i]->GetDate();
						string email = CR[i]->GetEmail();
						ER.push_back(new EventRequest(Name, budget, Taskid, date, email));
					}
					else if (input1 == "Reject")
					{
						CR[i]->RejectByAdministrationManager();
					}
					else
					{
						cout << "wrong command, please try again" << endl;
					}
				}
				else
				{
					cout << "No Available Operation" << endl;
				}
			}
			else
			{
				cout << "wrong index" << endl;
			}
		}
		else if (input == "Exit")
		{
			return;
		}
		else
		{
			cout << "wrong command, please try again" << endl;
		}
	}
}
void ProductManager()
{
	while (1)
	{
		string input;
		cout << "please choose a function: View / Exit" << endl;
		cin >> input;
		if (input == "View")
		{
			if (ER.size() == 0)
			{
				cout << "There is no EventRequest" << endl;
			}
			else
			{
				int m = 0;
				for (int i = 0; i < ER.size(); i++)
				{
					cout << "index: " << i + 1 << endl;
					ER[i]->CheckEventRequest();
				}
				//check schedule
				cout << "Display the Schedule" << endl;
				cout << "Photograph: " << endl;
				for (int t = 0; t < Photography.size(); t++)
				{
					Photography[t]->CheckSchedule();
				}
				cout << "Music: " << endl;
				for (int t = 0; t < Music.size(); t++)
				{
					Music[t]->CheckSchedule();
				}
				cout << "GraphicDesign: " << endl;
				for (int t = 0; t < GraphicDesign.size(); t++)
				{
					GraphicDesign[t]->CheckSchedule();
				}
				cout << "Decorations: " << endl;
				for (int t = 0; t < Decorations.size(); t++)
				{
					Decorations[t]->CheckSchedule();
				}
				cout << "Network: " << endl;
				for (int t = 0; t < Network.size(); t++)
				{
					Network[t]->CheckSchedule();
				}
				//HR
				cout << "do you want to creat hr request y/n" << endl;
				char ch;
				cin >> ch;
				if (ch == 'y')
				{
					string Department;
					string ContractType;
					string ExperienceYear;
					string JobTitle;
					string JobDescription;
					while (1)
					{
						string input2;
						cout << "Please choose a function: " << endl;
						cout << "CreateHRRequest    ViewHRRequest   Back" << endl;
						cin >> input2;
						if (input2 == "CreateHRRequest")
						{
							cout << "Please input Department:";
							cin >> Department;
							cout << "Please input ContractType: ";
							cin >> ContractType;
							cout << "Please input ExperienceYear: ";
							cin >> ExperienceYear;
							cout << "Please input JobTitle: ";
							cin >> JobTitle;
							cout << "Please input JobDescription: ";
							cin >> JobDescription;
							HRR.push_back(new HRRequest(Department, ContractType, ExperienceYear, JobTitle, JobDescription));
							cout << "Create successfully! The case has been sent to HR automatically." << endl;
						}
						else if (input2 == "ViewHRRequest")
						{
							for (int i = 0; i < HRR.size(); ++i) {
								HRR[i]->CheckHRRequest();
							}
						}
						else if (input2 == "Back")
						{
							cout << "You are back!" << endl;
							break;
						}
						else
						{
							cout << "Wrong function! Please try again!" << endl;
						}
					}
				}
				cout << "please enter the index to choose the Event" << endl;
				cin >> m;
				if (m > 0 && m <= ER.size())
				{
					m--;
					while (1)
					{
						cout << "please choose the function AddAttendees/CheckComments/Exit" << endl;
						string input1;
						cin >> input1;
						if (input1 == "AddAttendees")
						{
							string attenddes = " ";
							cout << "please add attendees" << endl;
							string input3;
							cout << "please add photography Music GraphicDesign Decorations Network" << endl;
							while (1)
							{
								cout << "please add the name of photography or enter Exit to exit" << endl;
								cin >> input3;
								if (input3 == "Exit")
								{
									break;
								}
								else
								{
									for (int t = 0; t < Photography.size(); t++)
									{
										if (input3 == Photography[t]->GetEmployeeName())
										{
											attenddes = attenddes + input3 + " ";
											Photography[t]->SetDate(Photography[t]->GetDate() + " " + ER[m]->GetDate());
											cout << "add successfully" << endl;
										}
									}
								}
							}
							while (1)
							{
								cout << "please add the name of Music or enter Exit to exit" << endl;
								cin >> input3;
								if (input3 == "Exit")
								{
									break;
								}
								else
								{
									for (int t = 0; t < Music.size(); t++)
									{
										if (input3 == Music[t]->GetEmployeeName())
										{
											attenddes = attenddes + input3 + " ";
											Music[t]->SetDate(Music[t]->GetDate() + " " + ER[m]->GetDate());
											cout << "add successfully" << endl;
										}
									}
								}
							}
							while (1)
							{
								cout << "please add the name of GraphicDesign or enter Exit to exit" << endl;
								cin >> input3;
								if (input3 == "Exit")
								{
									break;
								}
								else
								{
									for (int t = 0; t < GraphicDesign.size(); t++)
									{
										if (input3 == GraphicDesign[t]->GetEmployeeName())
										{
											attenddes = attenddes + input3 + " ";
											GraphicDesign[t]->SetDate(GraphicDesign[t]->GetDate() + " " + ER[m]->GetDate());
											cout << "add successfully" << endl;
										}
									}
								}
							}
							while (1)
							{
								cout << "please add the name of Decorations or enter Exit to exit" << endl;
								cin >> input3;
								if (input3 == "Exit")
								{
									break;
								}
								else
								{
									for (int t = 0; t < Decorations.size(); t++)
									{
										if (input3 == Decorations[t]->GetEmployeeName())
										{
											attenddes = attenddes + input3 + " ";
											Decorations[t]->SetDate(Decorations[t]->GetDate() + " " + ER[m]->GetDate());
											cout << "add successfully" << endl;
										}
									}
								}
							}
							while (1)
							{
								cout << "please add the name of Network or enter Exit to exit" << endl;
								cin >> input3;
								if (input3 == "Exit")
								{
									break;
								}
								else
								{
									for (int t = 0; t < Network.size(); t++)
									{
										if (input3 == Network[t]->GetEmployeeName())
										{
											attenddes = attenddes + input3 + " ";
											Network[t]->SetDate(Network[t]->GetDate() + " " + ER[m]->GetDate());
											cout << "add successfully" << endl;
										}
									}
								}
							}
							ER[m]->PMAddAttendees(attenddes);
							cout << "All the attendees are added" << endl;
						}
						else if (input1 == "CheckComments")
						{
							ER[m]->ProductManagerCheck();
							cout << "do you want to send it to FinacialManager y/n" << endl;
							char ch;
							cin >> ch;
							if (ch == 'y')
							{
								ER[m]->PMFinish();
							}
						}
						else if (input1 == "Exit")
						{
							break;
						}
						else
						{
							cout << "wrong command, please try again" << endl;
						}
					}
				}
				else
				{
					cout << "wrong index" << endl;
				}
			}
		}
		else if (input == "Exit")
		{
			return;
		}
		else
		{
			cout << "wrong command, please try again" << endl;
		}
	}
}
void ServiceManager()
{
	while (1)
	{
		string input;
		cout << "please choose a function: View / Exit" << endl;
		cin >> input;
		if (input == "View")
		{
			if (ER.size() == 0)
			{
				cout << "There is no EventRequest" << endl;
			}
			else
			{
				int m = 0;
				for (int i = 0; i < ER.size(); i++)
				{
					cout << "index: " << i + 1 << endl;
					ER[i]->CheckEventRequest();
				}
				//check schedule
				cout << "Display the Schedule" << endl;
				cout << "TopChef: " << endl;
				for (int t = 0; t < TopChef.size(); t++)
				{
					TopChef[t]->CheckSchedule();
				}
				cout << "SeniorWaitress: " << endl;
				for (int t = 0; t < SeniorWaitress.size(); t++)
				{
					SeniorWaitress[t]->CheckSchedule();
				}
				//HR
				cout << "do you want to creat hr request y/n" << endl;
				char ch;
				cin >> ch;
				if (ch == 'y')
				{
					string Department;
					string ContractType;
					string ExperienceYear;
					string JobTitle;
					string JobDescription;
					while (1)
					{
						string input2;
						cout << "Please choose a function: " << endl;
						cout << "CreateHRRequest    ViewHRRequest   Back" << endl;
						cin >> input2;
						if (input2 == "CreateHRRequest")
						{
							cout << "Please input Department:";
							cin >> Department;
							cout << "Please input ContractType: ";
							cin >> ContractType;
							cout << "Please input ExperienceYear: ";
							cin >> ExperienceYear;
							cout << "Please input JobTitle: ";
							cin >> JobTitle;
							cout << "Please input JobDescription: ";
							cin >> JobDescription;
							HRR.push_back(new HRRequest(Department, ContractType, ExperienceYear, JobTitle, JobDescription));
							cout << "Create successfully! The case has been sent to HR automatically." << endl;
						}
						else if (input2 == "ViewHRRequest")
						{
							for (int i = 0; i < HRR.size(); ++i) {
								HRR[i]->CheckHRRequest();
							}
						}
						else if (input2 == "Back")
						{
							cout << "You are back!" << endl;
							break;
						}
						else
						{
							cout << "Wrong function! Please try again!" << endl;
						}
					}
				}
				cout << "please enter the index to choose the Event" << endl;
				cin >> m;
				if (m > 0 && m <= ER.size())
				{
					m--;
					while (1)
					{
						cout << "please choose the function AddAttendees/CheckComments/Exit" << endl;
						string input1;
						cin >> input1;
						if (input1 == "AddAttendees")
						{
							string attenddes = " ";
							cout << "please add attendees" << endl;
							string input3;
							cout << "please add TopChef SeniorWaitress" << endl;
							while (1)
							{
								cout << "please add the name of TopChef or enter Exit to exit" << endl;
								cin >> input3;
								if (input3 == "Exit")
								{
									break;
								}
								else
								{
									for (int t = 0; t < TopChef.size(); t++)
									{
										if (input3 == TopChef[t]->GetEmployeeName())
										{
											attenddes = attenddes + input3 + " ";
											TopChef[t]->SetDate(TopChef[t]->GetDate() + " " + ER[m]->GetDate());
											cout << "add successfully" << endl;
										}
									}
								}
							}
							while (1)
							{
								cout << "please add the name of SeniorWaitress or enter Exit to exit" << endl;
								cin >> input3;
								if (input3 == "Exit")
								{
									break;
								}
								else
								{
									for (int t = 0; t < SeniorWaitress.size(); t++)
									{
										if (input3 == SeniorWaitress[t]->GetEmployeeName())
										{
											attenddes = attenddes + input3 + " ";
											SeniorWaitress[t]->SetDate(SeniorWaitress[t]->GetDate() + " " + ER[m]->GetDate());
											cout << "add successfully" << endl;
										}
									}
								}
							}
							ER[m]->SMAddAttendees(attenddes);
							cout << "All the attendees are added" << endl;
						}
						else if (input1 == "CheckComments")
						{
							ER[m]->ServiceManagerCheck();
							cout << "do you want to send it to FinacialManager y/n" << endl;
							char ch;
							cin >> ch;
							if (ch == 'y')
							{
								ER[m]->SMFinish();
							}
						}
						else if (input1 == "Exit")
						{
							break;
						}
						else
						{
							cout << "wrong command, please try again" << endl;
						}
					}
				}
				else
				{
					cout << "wrong index" << endl;
				}
			}
		}
		else if (input == "Exit")
		{
			return;
		}
		else
		{
			cout << "wrong command, please try again" << endl;
		}
	}
}
void subteam(string job, string name)
{
	vector<int*>a;
	string::size_type idx;
	for (int i = 0; i < ER.size(); i++)
	{
		string str = ER[i]->GetAllAttendees();
		idx = str.find(name);
		if (idx == string::npos)
		{
			continue;
		}
		else
		{
			int t = 0;
			cout << "index: " << ++t << endl;;
			a.push_back(new int(i));
			ER[i]->CheckEventRequest();
		}
	}
	if (a.size() == 0)
	{
		cout << "no available operations" << endl;
		return;
	}
	else
	{
		while (1)
		{
			cout << "please choose a request or enter 0 to Exit" << endl;
			int m;
			cin >> m;
			if (m > 0 && m <= a.size())
			{
				string input;
				cout << "please input commments and budget" << endl;
				cin >> input;
				if (job == "TopChef")
				{
					ER[*a[m - 1]]->AddTopChefCommentsAndBudget(input);
				}
				else if (job == "SeniorWaitress")
				{
					ER[*a[m - 1]]->AddSeniorWaitressCommentsAndBudget(input);
				}
				else if (job == "Photography")
				{
					ER[*a[m - 1]]->AddPhotographyCommentsAndBudget(input);
				}
				else if (job == "Music")
				{
					ER[*a[m - 1]]->AddMusicCommentsAndBudget(input);
				}
				else if (job == "GraphicDesign")
				{
					ER[*a[m - 1]]->AddGraphicDsignCommentsAndBudget(input);
				}
				else if (job == "Decorations")
				{
					ER[*a[m - 1]]->AddDecorationsCommentsAndBudget(input);
				}
				else if (job == "Network")
				{
					ER[*a[m - 1]]->AddNetworkCommentsAndBudget(input);
				}
				else
				{
					cout << "wrong job" << endl;
					return;
				}
			}
			else if (m == 0)
			{
				return;
			}
			else
			{
				cout << "wrong index" << endl;
			}
		}
	}
}
void HR()
{
	int idx;
	string input;
	while (1)
	{
		cout << "Please choose a function!" << endl;
		cout << "ManageHR    Logout" << endl;
		cin >> input;
		if (input == "ManageHR")
		{
			for (int i = 0; i < HRR.size(); i++)
			{
				cout << "\n>>>Index: " << i + 1 << endl;
				HRR[i]->CheckHRRequest();
				cout << "\n>>>HRStatus: " << HRR[i]->getStatus() << endl;

			}
			cout << "Please choose an index to Finish: ";
			cin >> idx;
			if (idx > 0 && idx <= HRR.size())
			{
				HRR[idx - 1]->changeStatus("Finished");
				cout << "Status change successfully!" << endl;
			}
			else
			{
				cout << "wrong index" << endl;
			}
		}
		else if (input == "Logout")
		{
			cout << "Logout successfully!" << endl;
			return;
		}
		else
		{
			cout << "Wrong function! Please try again!" << endl;
		}
	}
}
#endif
