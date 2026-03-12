package io.swagger.server.model


/**
 * @param label 
 * @param link 
 * @param icon 
 * @param icon_text 
 * @param help_text 
 */
case class ServerClientLink (
  label: String,
  link: String,
  icon: Option[String],
  icon_text: Option[String],
  help_text: Option[String]
)

