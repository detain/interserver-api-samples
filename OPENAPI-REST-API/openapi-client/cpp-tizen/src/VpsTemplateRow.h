/*
 * VpsTemplateRow.h
 *
 * A VPS OS Template.
 */

#ifndef _VpsTemplateRow_H_
#define _VpsTemplateRow_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief A VPS OS Template.
 *
 *  \ingroup Models
 *
 */

class VpsTemplateRow : public Object {
public:
	/*! \brief Constructor.
	 */
	VpsTemplateRow();
	VpsTemplateRow(char* str);

	/*! \brief Destructor.
	 */
	virtual ~VpsTemplateRow();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getTemplateId();

	/*! \brief Set 
	 */
	void setTemplateId(std::string  template_id);
	/*! \brief Get 
	 */
	std::string getTemplateType();

	/*! \brief Set 
	 */
	void setTemplateType(std::string  template_type);
	/*! \brief Get 
	 */
	std::string getTemplateOs();

	/*! \brief Set 
	 */
	void setTemplateOs(std::string  template_os);
	/*! \brief Get 
	 */
	std::string getTemplateVersion();

	/*! \brief Set 
	 */
	void setTemplateVersion(std::string  template_version);
	/*! \brief Get 
	 */
	std::string getTemplateBits();

	/*! \brief Set 
	 */
	void setTemplateBits(std::string  template_bits);
	/*! \brief Get 
	 */
	std::string getTemplateFile();

	/*! \brief Set 
	 */
	void setTemplateFile(std::string  template_file);
	/*! \brief Get 
	 */
	std::string getTemplateAvailable();

	/*! \brief Set 
	 */
	void setTemplateAvailable(std::string  template_available);
	/*! \brief Get 
	 */
	std::string getTemplateName();

	/*! \brief Set 
	 */
	void setTemplateName(std::string  template_name);
	/*! \brief Get 
	 */
	std::string getTemplateDir();

	/*! \brief Set 
	 */
	void setTemplateDir(std::string  template_dir);

private:
	std::string template_id;
	std::string template_type;
	std::string template_os;
	std::string template_version;
	std::string template_bits;
	std::string template_file;
	std::string template_available;
	std::string template_name;
	std::string template_dir;
	void __init();
	void __cleanup();

};
}
}

#endif /* _VpsTemplateRow_H_ */
