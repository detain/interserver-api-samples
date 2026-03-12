package io.swagger.server.model


/**
 * Request payload for enabling or disabling Whois privacy.
 *
 * @param func Action to perform (enable or disableCancel). for example: ''enable''
 * @param csrf_token CSRF token if the API requires it for the account.
 * @param domain_firstname 
 * @param domain_lastname 
 * @param domain_email 
 * @param domain_address 
 * @param domain_address2 
 * @param domain_address3 
 * @param domain_city 
 * @param domain_state 
 * @param domain_zip 
 * @param domain_country 
 * @param domain_phone 
 * @param domain_fax 
 * @param domain_company 
 * @param domain_extra 
 */
case class DomainWhoisPrivacyRequest (
  func: Option[String],
  csrf_token: Option[String],
  domain_firstname: Option[String],
  domain_lastname: Option[String],
  domain_email: Option[String],
  domain_address: Option[String],
  domain_address2: Option[String],
  domain_address3: Option[String],
  domain_city: Option[String],
  domain_state: Option[String],
  domain_zip: Option[String],
  domain_country: Option[String],
  domain_phone: Option[String],
  domain_fax: Option[String],
  domain_company: Option[String],
  domain_extra: Option[String]
)

