package io.swagger.server.model


/**
 * @param contact_set 
 * @param registry_createdate 
 * @param registry_expiredate 
 * @param tld_data 
 * @param let_expire 
 * @param auto_renew 
 * @param sponsoring_rsp 
 * @param gdpr_consent_status 
 * @param nameserver_list 
 * @param registry_updatedate 
 * @param affiliate_id 
 * @param expiredate 
 */
case class DomainAllInfo_attributes (
  contact_set: Option[DomainAllInfo_attributes_contact_set],
  registry_createdate: Option[String],
  registry_expiredate: Option[String],
  tld_data: Option[String],
  let_expire: Option[String],
  auto_renew: Option[String],
  sponsoring_rsp: Option[String],
  gdpr_consent_status: Option[String],
  nameserver_list: Option[List[DomainNameServer]],
  registry_updatedate: Option[String],
  affiliate_id: Option[String],
  expiredate: Option[String]
)

