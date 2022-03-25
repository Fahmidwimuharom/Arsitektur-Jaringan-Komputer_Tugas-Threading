#include <iostream>
#include <thread>

using namespace std;

// function untuk mencetak bilangan ganjil
void odd()
{
	//Mencetak angka diantara 1 s/d 20
	for (int i = 1; i <= 20; i++)
	{
		//Bilangan ganjil
		if (i % 2 != 0)
		{
			cout << i << endl;
			// set waktu untuk bilangan ganjil
			this_thread::sleep_for(chrono::milliseconds(1000));
		}
	}
}

// function untuk mencetak bilangan genap
void even()
{
	//Mencetak angka diantara 1 s/d 20
	for (int i = 1; i <= 20; i++)
	{
		//Bilangan genap
		if (i % 2 == 0)
		{
			cout << i << endl;
			// set waktu untuk bilangan genap
			this_thread::sleep_for(chrono::milliseconds(2500));
		}
	}
}

int main()
{	
	// memulai thread t1
	thread t1(odd);
	// memulai thread t2
	thread t2(even);

	//menunggu t1 selesai
	t1.join();
	//menunggu t2 selesai
	t2.join();

	return 0;
}