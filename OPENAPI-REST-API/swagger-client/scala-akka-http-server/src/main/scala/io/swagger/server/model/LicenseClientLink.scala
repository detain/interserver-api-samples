package io.swagger.server.model


/**
 * @param label Link label for example: ''Invoices''
 * @param link Link URL for example: ''invoices''
 * @param icon Link icon for example: ''fas fa-file-invoice-dollar fa-w-12''
 * @param icon_text Icon text
 * @param help_text Help text for example: ''Invoice History''
 * @param other_attr Other attributes
 */
case class LicenseClientLink (
  label: String,
  link: String,
  icon: String,
  icon_text: Option[String],
  help_text: String,
  other_attr: Option[String]
)

