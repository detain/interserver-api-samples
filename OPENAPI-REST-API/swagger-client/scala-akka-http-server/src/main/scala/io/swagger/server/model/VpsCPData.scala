package io.swagger.server.model


/**
 * Control panel license options available for a VPS.
 *
 * @param name Control panel name (e.g., cPanel).
 * @param cost Monthly cost in cents for the control panel license.
 */
case class VpsCPData (
  name: Option[String],
  cost: Option[Int]
)

