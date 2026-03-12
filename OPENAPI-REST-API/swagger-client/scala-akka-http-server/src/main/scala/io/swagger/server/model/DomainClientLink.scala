package io.swagger.server.model


/**
 * Links and labels for domain-related UI actions.
 *
 * @param label 
 * @param link 
 * @param icon 
 * @param icon_text 
 * @param help_text 
 */
case class DomainClientLink (
  label: Option[String],
  link: Option[String],
  icon: Option[String],
  icon_text: Option[String],
  help_text: Option[String]
)

