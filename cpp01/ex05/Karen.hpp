#pragma once

# include <iostream>

class Karen
{
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );

	public:
		Karen( void );
		~Karen( void );

		int		whichLevel( std::string level);
		void 	complain( std::string level );
};
