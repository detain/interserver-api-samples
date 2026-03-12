package io.swagger.server.model


/**
 * A navigation link for webhosting-related actions in the client portal.
 *
 * @param label Label for the link
 * @param link Link URL
 * @param icon Icon for the link
 * @param icon_text Icon text for the link
 * @param help_text Help text for the link
 * @param other_attr Other attributes for the link
 */
case class WebsiteClientLink (
  label: Option[String],
  link: Option[String],
  icon: Option[String],
  icon_text: Option[String],
  help_text: Option[String],
  other_attr: Option[String]
)

