package io.swagger.server.model


/**
 * = MailRow =
 *
 * A result row from the `Mail` `GET` request.
 *
 * @param mail_id The id of the mail. for example: ''5652''
 * @param repeat_invoices_cost The repeat invoices cost of the mail. for example: ''5.99''
 * @param mail_username The username of the mail. for example: ''mb5652''
 * @param mail_status The status of the mail. for example: ''expired''
 * @param services_name The services name of the mail. for example: ''MailBaby Mail''
 */
case class MailRow (
  mail_id: Option[String],
  repeat_invoices_cost: Option[String],
  mail_username: Option[String],
  mail_status: Option[String],
  services_name: Option[String]
)

