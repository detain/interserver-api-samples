package io.swagger.server.model


/**
 * Internal configuration IDs mapped from the selected form values for a server order.
 *
 * @param memory Configuration ID for the selected memory option.
 * @param hd Configuration ID for the selected hard drive option.
 * @param bandwidth Configuration ID for the selected bandwidth option.
 * @param ips Configuration ID for the selected IP block option.
 * @param os Configuration ID for the selected operating system.
 * @param cp Configuration ID for the selected control panel.
 * @param raid Configuration ID for the selected RAID option.
 */
case class ConfigIds (
  memory: Option[Int],
  hd: Option[Int],
  bandwidth: Option[Int],
  ips: Option[Int],
  os: Option[Int],
  cp: Option[Int],
  raid: Option[Int]
)

