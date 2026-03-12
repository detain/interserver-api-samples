package io.swagger.server.model


/**
 * @param alert_id 
 * @param alert_type 
 * @param alert_value 
 * @param alert_to 
 * @param alert_enabled 
 */
case class MailAlertsResponse_inner (
  alert_id: Option[Int],
  alert_type: Option[String],
  alert_value: Option[String],
  alert_to: Option[String],
  alert_enabled: Option[String]
)

