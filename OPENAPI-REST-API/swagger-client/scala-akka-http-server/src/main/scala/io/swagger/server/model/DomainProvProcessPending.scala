package io.swagger.server.model


/**
 * Provisioning status data for a pending domain order.
 *
 * @param _OPS_version 
 * @param response_text 
 * @param protocol 
 * @param response_code 
 * @param action 
 * @param `object` 
 * @param is_success 
 * @param attributes 
 */
case class DomainProvProcessPending (
  _OPS_version: Option[String],
  response_text: Option[String],
  protocol: Option[String],
  response_code: Option[String],
  action: Option[String],
  `object`: Option[String],
  is_success: Option[String],
  attributes: Option[DomainProvProcessPending_attributes]
)

