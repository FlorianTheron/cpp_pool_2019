//
// Created by leo on 01/02/2020.
//

#ifndef CPP_RUSH3_2019_IMAP_HPP
#define CPP_RUSH3_2019_IMAP_HPP

#include <string>

class IMap {
	 public:
		virtual ~IMap() {};

		virtual void LoadMap(const std::string&, const std::string&) = 0;
		virtual void ClearMap() = 0;

	 private:
		virtual void LoadCollisions(const std::string&) = 0;
};

#endif //CPP_RUSH3_2019_IMAP_HPP