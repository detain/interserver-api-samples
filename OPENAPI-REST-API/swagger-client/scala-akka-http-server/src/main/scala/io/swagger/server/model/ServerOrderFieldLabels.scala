package io.swagger.server.model


/**
 * Field labels for the server order.
 *
 * @param bandwidth Bandwidth field label.
 * @param ips IPs field label.
 * @param os Operating System field label.
 * @param cp Control Panel field label.
 * @param raid RAID field label.
 * @param memory Memory field label.
 * @param hd Hard Drives field label
 */
case class ServerOrderFieldLabels (
  bandwidth: Option[AllOfServerOrderFieldLabelsBandwidth],
  ips: Option[AllOfServerOrderFieldLabelsIps],
  os: Option[AllOfServerOrderFieldLabelsOs],
  cp: Option[AllOfServerOrderFieldLabelsCp],
  raid: Option[AllOfServerOrderFieldLabelsRaid],
  memory: Option[AllOfServerOrderFieldLabelsMemory],
  hd: Option[AllOfServerOrderFieldLabelsHd]
)

