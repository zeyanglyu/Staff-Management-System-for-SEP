#ifndef DATABASE_H
#define DATABASE_H
#include <string>
#include <vector>

using namespace std;

class Employee_List
{
private:
    string Name;
    string Staff_ID;
    string password;
    string Email;
public:
   Employee_List(string Name, string Staff_ID, string password, string Email)
    {
        this->Name = Name;
        this->password = password;
        this->Email = Email;
        this->Staff_ID = Staff_ID;
    }
string GetEmployeeName()
    {
    return this-> Name;
    }
string GetEmployeePassword()
{
    return this-> password;
}
string GetEmployeeEmail()
{
    return this ->Email;
}
string GetEmployeeID()
{
    return this->Staff_ID;
}
};
using namespace std;
class Sub_Team_List
{
private:
	string Name;
	string Staff_ID;
	string password;
	string Email;
	string Date;
public:
	Sub_Team_List(string Name, string Staff_ID, string password, string Email)
	{
		this->Name = Name;
		this->password = password;
		this->Email = Email;
		this->Staff_ID = Staff_ID;
		this->Date = " ";
	}
	string GetEmployeeName()
	{
		return this->Name;
	}
	string GetEmployeePassword()
	{
		return this->password;
	}
	string GetEmployeeEmail()
	{
		return this->Email;
	}
	string GetEmployeeID()
	{
		return this->Staff_ID;
	}
	void SetDate(string date)
	{
		this->Date = date;
	}
	void CheckSchedule()
	{
		cout << "Name: " << this->GetEmployeeName() << "    Date" << this->Date << endl;
	}
	string GetDate()
	{
		return this->Date;
	}
};
class ClientRequest
{
private:
	string ClientName;
	string Request;
	string Taskid;
	string ClientEmail;
	string Date;
	string Feedback;
	string Budget;
	string status;
public:
	ClientRequest(string Name, string Request, string budget, string Taskid, string Date, string ClientEmail)
	{
		this->ClientName = Name;
		this->Request = Request;
		this->Taskid = Taskid;
		this->Date = Date;
		this->ClientEmail = ClientEmail;
		this->Budget = budget;
		this->status = "Created";
	}
	void ViewClientRequest()
	{
		cout << this->ClientName << "\n" << this->Request << "\n" << this->Budget << "\n" << this->Taskid << "\n" << this->Date << "\n" << this->ClientEmail << endl;
	}
	string GetName()
	{
		return this->ClientName;
	}
	string GetBudget()
	{
		return this->Budget;
	}
	string GetTaskid()
	{
		return this->Taskid;
	}
	string GetDate()
	{
		return this->Date;
	}
	string GetStatus()
	{
		return this->status;
	}
	string GetEmail()
	{
		return this->ClientEmail;
	}
	void ViewFeedback()
	{
		cout << this->Feedback << endl;
	}
	void AddFeedback(string Feed_Back)
	{
		this->Feedback = Feed_Back;
		this->status = "AddedFeedback";
	}
	void ApprovedBySeniorCustomerService()
	{
		this->status = "ApprovedBySeniorCustomerService";
	}
	void RejectedBySeniorCustomerService()
	{
		this->status = "RejectedBySeniorCustomerService";
		cout << "Please contact client, the Email is " << this->ClientEmail << endl;
	}
	void ApprovedByAdministrationManager()
	{
		this->status = "ApprovedByAdministrationManager";
	}
	void RejectByAdministrationManager()
	{
		this->status = "RejectByAdministrationManager";
	}
	void ViewByPM()
	{
		this->status = "ViewedByPM";
	}
	void ViewBySM()
	{
		this->status = "ViewedBySM";
	}
};
class EventRequest
{
private:
	string ClientName;
	string ClientBudget;
	string Taskid;
	string Date;
	string ClientEmail;
	string PMattendees;
	string SMattendees;
	string TopChefCommentsAndBudget;
	string SeniorWaitressCommentsAndBudget;
	string PhotographyCommentsAndBudget;
	string MusicCommentsAndBudget;
	string GraphicDesignCommentsAndBudget;
	string DecorationsCommentsAndBudget;
	string NetworkCommentsAndBudget;
	bool ProductManagerFinish;
	bool ServiceManagerFinish;
public:
	EventRequest(string Name, string ClientBudget, string Taskid, string Date, string ClientEmail)
	{
		this->ClientName = Name;
		this->ClientBudget = ClientBudget;
		this->Taskid = Taskid;
		this->Date = Date;
		this->ClientEmail = ClientEmail;
		this->ServiceManagerFinish = false;
		this->ProductManagerFinish = false;
	}
	void CheckEventRequest()
	{
		cout << "ClientName: " << this->ClientName << "ClientBudget: " << this->ClientBudget << "Taskid: " << this->Taskid << "Date: " << this->Date << "ClientEmail: " << this->ClientEmail << endl;
		cout << "Attendees: " << this->PMattendees << "   " << this->SMattendees << endl;
		cout << "ProductManagerFinish:" << this->ProductManagerFinish << endl;
		cout << "ServiceManagerFinish:" << this->ServiceManagerFinish << endl;
	}
	void CheckFullEventRequest()
	{
		cout << "ClientName: " << this->ClientName << "ClientBudget: " << this->ClientBudget << "Taskid: " << this->Taskid << "Date: " << this->Date << "ClientEmail: " << this->ClientEmail << endl;
		cout << "Attendees: " << this->PMattendees << "   " << this->SMattendees << endl;
		cout << "TopChefCommentsAndBudget: " << this->TopChefCommentsAndBudget << endl;
		cout << "SeniorWaitressCommentsAndBudget: " << this->SeniorWaitressCommentsAndBudget << endl;
		cout << "PhotographyCommentsAndBudget: " << this->PhotographyCommentsAndBudget << endl;
		cout << "MusicCommentsAndBudget: " << this->MusicCommentsAndBudget << endl;
		cout << "GraphicDsignCommentsAndBudget: " << this->GraphicDesignCommentsAndBudget << endl;
		cout << "DecorationsCommentsAndBudget: " << this->DecorationsCommentsAndBudget << endl;
		cout << "NetworkCommentsAndBudget: " << this->NetworkCommentsAndBudget << endl;
		cout << "ProductManagerFinish:" << this->ProductManagerFinish << endl;
		cout << "ServiceManagerFinish:" << this->ServiceManagerFinish << endl;
	}
	void PMAddAttendees(string Attendees)
	{
		this->PMattendees = Attendees;
	}
	void SMAddAttendees(string Attendees)
	{
		this->SMattendees = Attendees;
	}
	void AddTopChefCommentsAndBudget(string comment)
	{
		this->TopChefCommentsAndBudget = comment;
	}
	void AddSeniorWaitressCommentsAndBudget(string comment)
	{
		this->SeniorWaitressCommentsAndBudget = comment;
	}
	void AddPhotographyCommentsAndBudget(string comment)
	{
		this->PhotographyCommentsAndBudget = comment;
	}
	void AddMusicCommentsAndBudget(string comment)
	{
		this->MusicCommentsAndBudget = comment;
	}
	void AddGraphicDsignCommentsAndBudget(string comment)
	{
		this->GraphicDesignCommentsAndBudget = comment;
	}
	void AddDecorationsCommentsAndBudget(string comment)
	{
		this->DecorationsCommentsAndBudget = comment;
	}
	void AddNetworkCommentsAndBudget(string comment)
	{
		this->NetworkCommentsAndBudget = comment;
	}
	void ProductManagerCheck()
	{
		cout << "Attendees" << this->PMattendees << endl;
		cout << "PhotographyCommentsAndBudget: " << this->PhotographyCommentsAndBudget << endl;
		cout << "MusicCommentsAndBudget: " << this->MusicCommentsAndBudget << endl;
		cout << "GraphicDsignCommentsAndBudget: " << this->GraphicDesignCommentsAndBudget << endl;
		cout << "DecorationsCommentsAndBudget: " << this->DecorationsCommentsAndBudget << endl;
		cout << "NetworkCommentsAndBudget: " << this->NetworkCommentsAndBudget << endl;
	}
	void ServiceManagerCheck()
	{
		cout << "Attendees" << this->SMattendees << endl;
		cout << "TopChefCommentsAndBudget: " << this->TopChefCommentsAndBudget << endl;
		cout << "SeniorWaitressCommentsAndBudget: " << this->SeniorWaitressCommentsAndBudget << endl;
	}
	void PMFinish()
	{
		this->ProductManagerFinish = true;
	}
	void SMFinish()
	{
		this->ServiceManagerFinish = true;
	}
	string GetDate()
	{
		return this->Date;
	}
	string GetAllAttendees()
	{
		string a = this->PMattendees + this->SMattendees;
		return a;
	}
	bool  GetServiceManagerFinish()
	{
		return this->ServiceManagerFinish;
	}
	bool  GetProductManagerFinish()
	{
		return this->ProductManagerFinish;
	}
};

class HRRequest {
private:
	string Department;
	string ContractType;
	string ExperienceYear;
	string JobTitle;
	string JobDescription;
	string Status;

public:

	HRRequest(string Department, string ContractType, string ExperienceYear, string JobTitle, string JobDescription) {
		this->Department = Department;
		this->ContractType = ContractType;
		this->ExperienceYear = ExperienceYear;
		this->JobTitle = JobTitle;
		this->JobDescription = JobDescription;
		this->Status = "Created";
	}
	void CheckHRRequest()
	{
		cout << "Department: " << this->Department << endl;
		cout << "ContractType: " << this->ContractType << endl;
		cout << "ExperienceYear: " << this->ExperienceYear << endl;
		cout << "JobTitle: " << this->JobTitle << endl;
		cout << "JobDescription: " << this->JobDescription << endl;
	}
	void changeStatus(string Status)
	{
		this->Status = Status;
	}
	string getStatus()
	{
		return this->Status;
	}
};
#endif
