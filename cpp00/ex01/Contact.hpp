#ifndef CRAPPYPHONEBOOK_HPP

#	define CRAPPYPHONEBOOK_HPP
#	include <iostream>
#	include <locale>
#	include <string>
#   include <iomanip>

class Contact
{
	public:
        Contact();
        virtual ~Contact();

        bool                            _set_contact;
        void    showContact();
        void	print_info_class();
        void	fill_class_contact();

    private:
        std::string                     _substring_std(std::string str);
        std::string                     _string_field[11];
        int		                        _index;
        static int				        _object;
        static const std::string		_fields[11];
};

std::string& trim(std::string& str, const std::string& chars = "\t\n\v\f\r ");

#endif
