package io.swagger.server.model


/**
 * Currently selected configuration option IDs for a server order form.
 *
 * @param memory Selected memory option ID.
 * @param bandwidth Selected bandwidth option ID.
 * @param ips Selected IP block option ID.
 * @param os Selected operating system option ID.
 * @param cp Selected control panel option ID.
 * @param raid Selected RAID option ID.
 * @param hd Selected hard drive option ID.
 * @param region Selected datacenter region ID.
 */
case class FormValues (
  memory: Option[Int],
  bandwidth: Option[Int],
  ips: Option[Int],
  os: Option[Int],
  cp: Option[Int],
  raid: Option[Int],
  hd: Option[Int],
  region: Option[Int]
)

