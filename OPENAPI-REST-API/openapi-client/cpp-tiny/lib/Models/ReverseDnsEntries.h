
/*
 * ReverseDnsEntries.h
 *
 * The Reverse DNS entries.
 */

#ifndef TINY_CPP_CLIENT_ReverseDnsEntries_H_
#define TINY_CPP_CLIENT_ReverseDnsEntries_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "AnyType.h"
#include <map>

namespace Tiny {


/*! \brief The Reverse DNS entries.
 *
 *  \ingroup Models
 *
 */

class ReverseDnsEntries{
public:

    /*! \brief Constructor.
	 */
    ReverseDnsEntries();
    ReverseDnsEntries(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ReverseDnsEntries();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The IPs you have access to and their current reverse dns mapping.
	 */
	std::map<std::string, AnyType> getIps();

	/*! \brief Set The IPs you have access to and their current reverse dns mapping.
	 */
	void setIps(std::map<std::string, AnyType> ips);


    private:
    std::map<std::string, AnyType> ips;
};
}

#endif /* TINY_CPP_CLIENT_ReverseDnsEntries_H_ */
