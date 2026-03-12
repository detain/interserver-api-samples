package io.swagger.server.model


/**
 * = Account Information Update Request =
 *
 * Request to update account information.
 *
 * @param name Your name. for example: ''John Doe''
 * @param company Your company name. for example: ''My Company''
 * @param address Your address. for example: ''124 My St''
 * @param address2 Additional address information.
 * @param city Your city. for example: ''My Town''
 * @param state Your state. for example: ''PA''
 * @param zip Your ZIP code. for example: ''17522''
 * @param country Your country. for example: ''US''
 * @param phone Your phone number. for example: ''8675309''
 * @param locale Your preferred locale.
 * @param email_invoices Your email for invoice notifications.
 * @param email_abuse Your email for abuse notifications.
 * @param disable_reset Set to `true` to disable account resets, or `false` to enable them.
 * @param disable_reinstall Set to `true` to disable server reinstalls, or `false` to enable them.
 * @param disable_server_notifications Set to `true` to disable server notifications, or `false` to enable them.
 * @param disable_email_notifications Set to `true` to disable email notifications, or `false` to enable them.
 * @param gstin Your GST identification number (if applicable).
 */
case class AccountInfoPost (
  name: String,
  company: Option[String],
  address: String,
  address2: Option[String],
  city: String,
  state: String,
  zip: String,
  country: String,
  phone: String,
  locale: Option[String],
  email_invoices: Option[String],
  email_abuse: Option[String],
  disable_reset: Option[Boolean],
  disable_reinstall: Option[Boolean],
  disable_server_notifications: Option[Boolean],
  disable_email_notifications: Option[Boolean],
  gstin: Option[String]
)

