package io.swagger.server.model


/**
 * Registrar response metadata returned after a domain order.
 *
 * @param _OPS_version 
 * @param protocol 
 * @param is_success 
 * @param action 
 * @param attributes 
 * @param response_text 
 * @param `object` 
 * @param response_code 
 */
case class DomainOrderResponse (
  _OPS_version: Option[String],
  protocol: Option[String],
  is_success: Option[String],
  action: Option[String],
  attributes: Option[DomainOrderResponse_attributes],
  response_text: Option[String],
  `object`: Option[String],
  response_code: Option[String]
)

