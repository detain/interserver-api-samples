package io.swagger.server.model


/**
 * Map of VPS service IDs to their hostnames for the account dashboard.
 *
 * @param 465503 Link to a VPS. for example: ''vps465503''
 * @param 2500081 Link to a VPS. for example: ''vps2500081''
 * @param 2578866 Link to a VPS. for example: ''vps2578866''
 */
case class HomeServicesVpsLinks (
  465503: Option[String],
  2500081: Option[String],
  2578866: Option[String]
)

