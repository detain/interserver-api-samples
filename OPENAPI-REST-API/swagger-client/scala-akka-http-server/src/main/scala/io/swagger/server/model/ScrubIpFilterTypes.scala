package io.swagger.server.model


/**
 * Available scrub filter types for building firewall rules.
 *
 * @param success 
 * @param filters 
 */
case class ScrubIpFilterTypes (
  success: Option[Boolean],
  filters: Option[Map[String, ScrubIpFilterTypes_filters]]
)

