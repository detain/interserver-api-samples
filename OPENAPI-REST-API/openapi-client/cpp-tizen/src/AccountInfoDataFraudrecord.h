/*
 * AccountInfoData_fraudrecord.h
 *
 * 
 */

#ifndef _AccountInfoData_fraudrecord_H_
#define _AccountInfoData_fraudrecord_H_


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

class AccountInfoData_fraudrecord : public Object {
public:
	/*! \brief Constructor.
	 */
	AccountInfoData_fraudrecord();
	AccountInfoData_fraudrecord(char* str);

	/*! \brief Destructor.
	 */
	virtual ~AccountInfoData_fraudrecord();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getScore();

	/*! \brief Set 
	 */
	void setScore(std::string  score);
	/*! \brief Get 
	 */
	std::string getCount();

	/*! \brief Set 
	 */
	void setCount(std::string  count);
	/*! \brief Get 
	 */
	std::string getReliability();

	/*! \brief Set 
	 */
	void setReliability(std::string  reliability);
	/*! \brief Get 
	 */
	std::string getCode();

	/*! \brief Set 
	 */
	void setCode(std::string  code);

private:
	std::string score;
	std::string count;
	std::string reliability;
	std::string code;
	void __init();
	void __cleanup();

};
}
}

#endif /* _AccountInfoData_fraudrecord_H_ */
