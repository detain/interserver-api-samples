
/*
 * BackupLoginResponse.h
 *
 * Login session response for backup storage.
 */

#ifndef TINY_CPP_CLIENT_BackupLoginResponse_H_
#define TINY_CPP_CLIENT_BackupLoginResponse_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Login session response for backup storage.
 *
 *  \ingroup Models
 *
 */

class BackupLoginResponse{
public:

    /*! \brief Constructor.
	 */
    BackupLoginResponse();
    BackupLoginResponse(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~BackupLoginResponse();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Indicates whether a login session was created.
	 */
	bool isSuccess();

	/*! \brief Set Indicates whether a login session was created.
	 */
	void setSuccess(bool success);
	/*! \brief Get Login URL or error text returned by the storage provider.
	 */
	std::string getText();

	/*! \brief Set Login URL or error text returned by the storage provider.
	 */
	void setText(std::string text);


    private:
    bool success{};
    std::string text{};
};
}

#endif /* TINY_CPP_CLIENT_BackupLoginResponse_H_ */
