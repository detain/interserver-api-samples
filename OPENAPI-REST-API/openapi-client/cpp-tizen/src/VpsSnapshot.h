/*
 * VpsSnapshot.h
 *
 * A VPS snapshot (point-in-time backup) stored on the host node.
 */

#ifndef _VpsSnapshot_H_
#define _VpsSnapshot_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief A VPS snapshot (point-in-time backup) stored on the host node.
 *
 *  \ingroup Models
 *
 */

class VpsSnapshot : public Object {
public:
	/*! \brief Constructor.
	 */
	VpsSnapshot();
	VpsSnapshot(char* str);

	/*! \brief Destructor.
	 */
	virtual ~VpsSnapshot();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Snapshot name.
	 */
	std::string getName();

	/*! \brief Set Snapshot name.
	 */
	void setName(std::string  name);
	/*! \brief Get Disk space used by this snapshot in bytes.
	 */
	int getUsed();

	/*! \brief Set Disk space used by this snapshot in bytes.
	 */
	void setUsed(int  used);
	/*! \brief Get Unix timestamp of when the snapshot was created.
	 */
	int getDate();

	/*! \brief Set Unix timestamp of when the snapshot was created.
	 */
	void setDate(int  date);

private:
	std::string name;
	int used;
	int date;
	void __init();
	void __cleanup();

};
}
}

#endif /* _VpsSnapshot_H_ */
