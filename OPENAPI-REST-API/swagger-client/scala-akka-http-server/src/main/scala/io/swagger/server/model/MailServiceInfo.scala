package io.swagger.server.model


/**
 * @param mail_id The ID of the mail service. for example: ''43171''
 * @param mail_username The username associated with the mail service.
 * @param mail_type The type of mail service. for example: ''10880''
 * @param mail_currency The currency of the mail service. for example: ''USD''
 * @param mail_order_date The order date of the mail service. for example: ''2023-07-16T00:55:05.000Z''
 * @param mail_custid The customer ID associated with the mail service. for example: ''771282''
 * @param mail_quota The mail quota for the service. for example: ''0''
 * @param mail_ip The IP address associated with the mail service.
 * @param mail_status The status of the mail service. for example: ''expired''
 * @param mail_invoice The invoice ID of the mail service. for example: ''20410322''
 * @param mail_coupon The coupon associated with the mail service. for example: ''0''
 * @param mail_extra Additional information for the mail service. for example: ''[]''
 * @param mail_server_status The server status of the mail service.
 * @param mail_comment Additional comments for the mail service.
 */
case class MailServiceInfo (
  mail_id: String,
  mail_username: Option[String],
  mail_type: String,
  mail_currency: String,
  mail_order_date: String,
  mail_custid: String,
  mail_quota: String,
  mail_ip: Option[String],
  mail_status: String,
  mail_invoice: String,
  mail_coupon: Option[String],
  mail_extra: Option[String],
  mail_server_status: Option[String],
  mail_comment: Option[String]
)

