#include "LoginForm.h"
#include "AdminForm.h"
#include "Bank.h"
System::Void BankSystem::LoginForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (textBox1->Text == "admin" && textBox2->Text == "123")
	{
		this->Hide();
		auto admin = gcnew BankSystem::AdminForm();
		admin->ShowDialog();
		this->Close();
	}
}