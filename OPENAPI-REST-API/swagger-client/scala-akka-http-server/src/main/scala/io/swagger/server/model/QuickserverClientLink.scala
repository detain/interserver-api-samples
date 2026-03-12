package io.swagger.server.model


/**
 * A navigation link for QuickServer-related actions in the client portal.
 *
 * @param label Link label for example: ''Invoices''
 * @param link Link for example: ''invoices''
 * @param icon Icon class for example: ''fas fa-file-invoice-dollar fa-w-12''
 * @param icon_text Icon text
 * @param help_text Help text for example: ''Invoice History''
 * @param other_attr Other attribute
 */
case class QuickserverClientLink (
  label: Option[String],
  link: Option[String],
  icon: Option[String],
  icon_text: Option[String],
  help_text: Option[String],
  other_attr: Option[String]
)

