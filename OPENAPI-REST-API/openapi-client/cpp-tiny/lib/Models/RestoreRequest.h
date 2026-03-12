
/*
 * RestoreRequest.h
 *
 * Request data to trigger a restore from backup.
 */

#ifndef TINY_CPP_CLIENT_RestoreRequest_H_
#define TINY_CPP_CLIENT_RestoreRequest_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Request data to trigger a restore from backup.
 *
 *  \ingroup Models
 *
 */

class RestoreRequest{
public:

    /*! \brief Constructor.
	 */
    RestoreRequest();
    RestoreRequest(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~RestoreRequest();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getBackup();

	/*! \brief Set 
	 */
	void setBackup(std::string backup);
	/*! \brief Get 
	 */
	std::string getPassword();

	/*! \brief Set 
	 */
	void setPassword(std::string password);


    private:
    std::string backup{};
    std::string password{};
};
}

#endif /* TINY_CPP_CLIENT_RestoreRequest_H_ */
