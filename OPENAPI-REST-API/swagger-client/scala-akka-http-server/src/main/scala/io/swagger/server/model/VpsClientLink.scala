package io.swagger.server.model


/**
 * A navigation link for VPS-related actions in the client portal.
 *
 * @param label Display label for the link.
 * @param link URL or route for the action.
 * @param icon Icon class for the link.
 * @param icon_text Icon text label.
 * @param help_text Help tooltip text for the link.
 */
case class VpsClientLink (
  label: Option[String],
  link: Option[String],
  icon: Option[String],
  icon_text: Option[String],
  help_text: Option[String]
)

