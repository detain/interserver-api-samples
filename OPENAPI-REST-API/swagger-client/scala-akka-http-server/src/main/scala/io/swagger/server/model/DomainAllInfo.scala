package io.swagger.server.model


/**
 * Complete domain registration information returned from the registrar, including contacts, nameservers, and expiry dates.
 *
 * @param _OPS_version 
 * @param attributes 
 * @param `object` 
 * @param protocol 
 * @param response_text 
 * @param response_code 
 * @param action 
 * @param is_success 
 */
case class DomainAllInfo (
  _OPS_version: Option[String],
  attributes: Option[DomainAllInfo_attributes],
  `object`: Option[String],
  protocol: Option[String],
  response_text: Option[String],
  response_code: Option[String],
  action: Option[String],
  is_success: Option[String]
)

