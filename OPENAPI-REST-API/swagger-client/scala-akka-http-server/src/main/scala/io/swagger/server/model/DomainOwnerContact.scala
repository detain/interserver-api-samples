package io.swagger.server.model


/**
 * Contact details for the registered domain owner.
 *
 * @param postal_code 
 * @param org_name 
 * @param country 
 * @param status 
 * @param state 
 * @param first_name 
 * @param last_name 
 * @param address3 
 * @param fax 
 * @param address2 
 * @param email 
 * @param city 
 * @param phone 
 * @param address1 
 */
case class DomainOwnerContact (
  postal_code: Option[String],
  org_name: Option[String],
  country: Option[String],
  status: Option[String],
  state: Option[String],
  first_name: Option[String],
  last_name: Option[String],
  address3: Option[String],
  fax: Option[String],
  address2: Option[String],
  email: Option[String],
  city: Option[String],
  phone: Option[String],
  address1: Option[String]
)

