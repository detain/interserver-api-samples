/*
 * BackupOrderPostResponse_cj_params.h
 *
 * 
 */

#ifndef _BackupOrderPostResponse_cj_params_H_
#define _BackupOrderPostResponse_cj_params_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class BackupOrderPostResponse_cj_params : public Object {
public:
	/*! \brief Constructor.
	 */
	BackupOrderPostResponse_cj_params();
	BackupOrderPostResponse_cj_params(char* str);

	/*! \brief Destructor.
	 */
	virtual ~BackupOrderPostResponse_cj_params();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getContainerTagId();

	/*! \brief Set 
	 */
	void setContainerTagId(std::string  containerTagId);
	/*! \brief Get 
	 */
	std::string getCID();

	/*! \brief Set 
	 */
	void setCID(std::string  cID);
	/*! \brief Get 
	 */
	std::string getOID();

	/*! \brief Set 
	 */
	void setOID(std::string  oID);
	/*! \brief Get 
	 */
	std::string getTYPE();

	/*! \brief Set 
	 */
	void setTYPE(std::string  tYPE);
	/*! \brief Get 
	 */
	std::string getITEM1();

	/*! \brief Set 
	 */
	void setITEM1(std::string  iTEM1);
	/*! \brief Get 
	 */
	std::string getAMT1();

	/*! \brief Set 
	 */
	void setAMT1(std::string  aMT1);
	/*! \brief Get 
	 */
	int getQTY1();

	/*! \brief Set 
	 */
	void setQTY1(int  qTY1);
	/*! \brief Get 
	 */
	std::string getCURRENCY();

	/*! \brief Set 
	 */
	void setCURRENCY(std::string  cURRENCY);

private:
	std::string containerTagId;
	std::string cID;
	std::string oID;
	std::string tYPE;
	std::string iTEM1;
	std::string aMT1;
	int qTY1;
	std::string cURRENCY;
	void __init();
	void __cleanup();

};
}
}

#endif /* _BackupOrderPostResponse_cj_params_H_ */
