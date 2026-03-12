package io.swagger.server.model


/**
 * Form values for the server order.
 *
 * @param memory Memory value for the server order. for example: ''22''
 * @param bandwidth Bandwidth value for the server order. for example: ''3''
 * @param ips IPs value for the server order. for example: ''9''
 * @param os Operating System value for the server order. for example: ''5''
 * @param cp Control Panel value for the server order. for example: ''5''
 * @param raid RAID value for the server order. for example: ''0''
 * @param hd Hard Drives value for the server order. for example: ''16''
 */
case class ServerOrderFormValues (
  memory: Option[Int],
  bandwidth: Option[String],
  ips: Option[String],
  os: Option[String],
  cp: Option[Int],
  raid: Option[String],
  hd: Option[String]
)

