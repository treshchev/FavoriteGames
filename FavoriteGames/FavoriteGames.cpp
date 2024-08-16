#include <iostream>
#include <string>
#include <vector>
int main()
{
	std::vector<std::string>WritedGames;
	std::string Input;

	while (true)
	{
       std::cout << "Write your Favorite Games\n\n" << std::endl;

	   std::cout << "Choose action: "
		   << "1. Add Game\n"
		   << "2. Show list of your games\n"
		   << "3. Deleted games\n"
		   << "4. Get out\n";
	   std::cin >> Input;

	   if (Input == "1")
	   {
		   std::cout << "Write your game name: ";
		   std::cin >> Input;

		   WritedGames.push_back(Input);
		   std::cout << "Your game successfully added!\n";
	   }
	   else if (Input == "2")
	   {
		   if (WritedGames.empty())
		   {
			   std::cout << "Your list is empty";
		   }
		   else
		   {
			   std::cout << "Your list:";
			   for (size_t i = 0; i < WritedGames.size(); i++)
			   {
				   std::cout << "- " << WritedGames[i] << std::endl;
			   }
		   }
	   }
	   else if (Input == "3")
	   {
		   if (WritedGames.empty())
		   {
			   std::cout << "Your list is empty";
		   }
		   else
		   {
			   std::cout << "Your list:";
			   for (size_t i = 0; i < WritedGames.size(); i++)
			   {
				   std::cout << "- " << WritedGames[i] << std::endl;
			   }
		   }
		   int IndexForDelete;
		   std::cout << "Choose you game to delete: ";
		   std::cin >> IndexForDelete;

		   if (IndexForDelete >= 1 && IndexForDelete <= WritedGames.size())
		   {
			   WritedGames.erase(WritedGames.begin() + IndexForDelete - 1);
			   std::cout << "Game has been deleted!\n";
		   }
		   else
		   {
			   std::cout << "You wrote incorrect number\n" << std::endl;
		   }
	   }
	}
}