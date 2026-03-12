package io.swagger.server.model


/**
 * @param ips A map of IP addresses to their desired reverse DNS hostnames.
 */
case class Id_buy_ip_body (
  ips: Option[Map[String, String]]
)

