
/*
 * PostWebsiteMigration_200_response.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_PostWebsiteMigration_200_response_H_
#define TINY_CPP_CLIENT_PostWebsiteMigration_200_response_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class PostWebsiteMigration_200_response{
public:

    /*! \brief Constructor.
	 */
    PostWebsiteMigration_200_response();
    PostWebsiteMigration_200_response(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~PostWebsiteMigration_200_response();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Confirmation message.
	 */
	std::string getText();

	/*! \brief Set Confirmation message.
	 */
	void setText(std::string text);
	/*! \brief Get The support ticket ID created for tracking the migration. Use this with `/tickets/{id}` to check migration progress.
	 */
	int getTicket();

	/*! \brief Set The support ticket ID created for tracking the migration. Use this with `/tickets/{id}` to check migration progress.
	 */
	void setTicket(int ticket);


    private:
    std::string text{};
    int ticket{};
};
}

#endif /* TINY_CPP_CLIENT_PostWebsiteMigration_200_response_H_ */
