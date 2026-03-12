
/*
 * BackupOrderPostResponse_cj_params.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_BackupOrderPostResponse_cj_params_H_
#define TINY_CPP_CLIENT_BackupOrderPostResponse_cj_params_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class BackupOrderPostResponse_cj_params{
public:

    /*! \brief Constructor.
	 */
    BackupOrderPostResponse_cj_params();
    BackupOrderPostResponse_cj_params(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~BackupOrderPostResponse_cj_params();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getContainerTagId();

	/*! \brief Set 
	 */
	void setContainerTagId(std::string containerTagId);
	/*! \brief Get 
	 */
	std::string getCID();

	/*! \brief Set 
	 */
	void setCID(std::string cID);
	/*! \brief Get 
	 */
	std::string getOID();

	/*! \brief Set 
	 */
	void setOID(std::string oID);
	/*! \brief Get 
	 */
	std::string getTYPE();

	/*! \brief Set 
	 */
	void setTYPE(std::string tYPE);
	/*! \brief Get 
	 */
	std::string getITEM1();

	/*! \brief Set 
	 */
	void setITEM1(std::string iTEM1);
	/*! \brief Get 
	 */
	std::string getAMT1();

	/*! \brief Set 
	 */
	void setAMT1(std::string aMT1);
	/*! \brief Get 
	 */
	int getQTY1();

	/*! \brief Set 
	 */
	void setQTY1(int qTY1);
	/*! \brief Get 
	 */
	std::string getCURRENCY();

	/*! \brief Set 
	 */
	void setCURRENCY(std::string cURRENCY);


    private:
    std::string containerTagId{};
    std::string cID{};
    std::string oID{};
    std::string tYPE{};
    std::string iTEM1{};
    std::string aMT1{};
    int qTY1{};
    std::string cURRENCY{};
};
}

#endif /* TINY_CPP_CLIENT_BackupOrderPostResponse_cj_params_H_ */
