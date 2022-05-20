class systemDatabase
{
	private:
		char password[20];
		char userName[20];
	public:
	void setUserName(char p_word);
	void setPassword(char u_name);
	char displayUserName();
	char DisplayPassword();
	
};


	void systemDatabase::setUserName(char u_name)
	{
		userName=u_name;
	}
	char systemDatabase:: displayUserName()
	{
		
		
		return userName[20];
	}
		void systemDatabase:: setPassword(char p_word)
		{
			password[20]=p_word;
		}
		
		char systemDatabase::DisplayPassword()
		{
			return password;
		}
		// work class
		class works
{
	private: 
		int hours;
	public:
		
		int calcHours();
		void setWorkHours(int h);
		int displayWorkHours();
		
		
		void works:: setWorkHours(int h)
		{
			hours=h;
		}
		
			int works::displayWorkHours()
			{
				return hours;
			}
			
		
		#include<iostream>
		using namespace std;
		int main()
		{
		
			
			
		return 0;	
			
		}
