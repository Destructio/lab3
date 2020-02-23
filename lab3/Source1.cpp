#include "Header.h"

double getD(TextBox^ TB)
{
	
	if (TB->Text->Length == 0)
	{
		MessageBox::Show("¬ведите нe пустоту", "ќшибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		TB->Focus();
		return 0;
	}
	else {
		return Convert::ToDouble(TB->Text);
	}
	
	
}

void putD(double x, TextBox^ TB)
{
	TB->Text = x.ToString();
}
