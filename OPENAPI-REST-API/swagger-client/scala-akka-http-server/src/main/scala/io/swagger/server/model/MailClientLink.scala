package io.swagger.server.model


/**
 * A navigation link for mail service actions in the client portal.
 *
 * @param label The label of the client link. for example: ''Invoices''
 * @param link The link URL of the client link. for example: ''invoices''
 * @param icon The icon class of the client link. for example: ''fas fa-file-invoice-dollar fa-w-12''
 * @param icon_text The text for the icon of the client link.
 * @param help_text Help text for the client link. for example: ''Invoice History''
 * @param other_attr Additional attributes for the client link.
 */
case class MailClientLink (
  label: Option[String],
  link: Option[String],
  icon: Option[String],
  icon_text: Option[String],
  help_text: Option[String],
  other_attr: Option[String]
)

