package io.swagger.server.model


/**
 * A navigation link for backup service actions in the client portal.
 *
 * @param label Label of the client link.
 * @param link Link URL of the client link.
 * @param icon Icon of the client link.
 * @param icon_text Icon text of the client link.
 * @param help_text Help text of the client link.
 * @param other_attr Other attributes of the client link.
 */
case class BackupClientLink (
  label: Option[String],
  link: Option[String],
  icon: Option[String],
  icon_text: Option[String],
  help_text: Option[String],
  other_attr: Option[String]
)

