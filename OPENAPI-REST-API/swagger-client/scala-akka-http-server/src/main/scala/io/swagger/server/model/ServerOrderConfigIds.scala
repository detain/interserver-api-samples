package io.swagger.server.model


/**
 * Configuration IDs for the server order.
 *
 * @param memory Memory configuration ID for the server order. for example: ''22''
 * @param bandwidth Bandwidth configuration ID for the server order. for example: ''3''
 * @param ips IPs configuration ID for the server order. for example: ''9''
 * @param os Operating System configuration ID for the server order. for example: ''5''
 * @param cp Control Panel configuration ID for the server order. for example: ''5''
 * @param raid RAID configuration ID for the server order. for example: ''0''
 * @param hd Hard Drives configuration ID for the server order. for example: ''16''
 */
case class ServerOrderConfigIds (
  memory: Option[Int],
  bandwidth: Option[String],
  ips: Option[String],
  os: Option[String],
  cp: Option[Int],
  raid: Option[String],
  hd: Option[String]
)

