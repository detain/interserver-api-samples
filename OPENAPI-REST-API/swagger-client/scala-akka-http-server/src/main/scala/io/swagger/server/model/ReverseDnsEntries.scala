package io.swagger.server.model


/**
 * = ReverseDnsEntries =
 *
 * The Reverse DNS entries.
 *
 * @param ips The IPs you have access to and their current reverse dns mapping.
 */
case class ReverseDnsEntries (
  ips: Option[Map[String, Object]]
)

