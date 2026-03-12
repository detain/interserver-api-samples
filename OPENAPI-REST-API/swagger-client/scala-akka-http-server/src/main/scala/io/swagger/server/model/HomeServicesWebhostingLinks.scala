package io.swagger.server.model


/**
 * Map of webhosting service IDs to their hostnames for the account dashboard.
 *
 * @param 376359 Link to a website. for example: ''Doefamily.com''
 * @param 376473 Link to a website. for example: ''fancytush.com''
 * @param 386218 Link to a website. for example: ''admincoded.net''
 */
case class HomeServicesWebhostingLinks (
  376359: Option[String],
  376473: Option[String],
  386218: Option[String]
)

