#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <string>

struct Data
{
	int			x;
	char		y;
	std::string z;
};

class Serializer
{
	public:
		// Constructors
		Serializer();
		Serializer(const Serializer &copy);
		
		// Destructor
		~Serializer();
		
		// Operators
		Serializer & operator=(const Serializer &assign);

		// Methods
		unsigned int	*serialize(Data* ptr);
		Data*		deserialize(unsigned int *raw);

	private:
		
};

#endif