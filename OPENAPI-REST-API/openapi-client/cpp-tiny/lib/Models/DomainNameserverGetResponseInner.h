
/*
 * DomainNameserverGetResponse_inner.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_DomainNameserverGetResponse_inner_H_
#define TINY_CPP_CLIENT_DomainNameserverGetResponse_inner_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class DomainNameserverGetResponse_inner{
public:

    /*! \brief Constructor.
	 */
    DomainNameserverGetResponse_inner();
    DomainNameserverGetResponse_inner(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~DomainNameserverGetResponse_inner();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getName();

	/*! \brief Set 
	 */
	void setName(std::string name);
	/*! \brief Get 
	 */
	std::string getIpaddress();

	/*! \brief Set 
	 */
	void setIpaddress(std::string ipaddress);
	/*! \brief Get Whether the registrar allows deletion of this nameserver entry.
	 */
	std::string getCanDelete();

	/*! \brief Set Whether the registrar allows deletion of this nameserver entry.
	 */
	void setCanDelete(std::string can_delete);


    private:
    std::string name{};
    std::string ipaddress{};
    std::string can_delete{};
};
}

#endif /* TINY_CPP_CLIENT_DomainNameserverGetResponse_inner_H_ */
