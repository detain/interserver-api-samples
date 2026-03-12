package io.swagger.server.model


/**
 * Object representing a server order.
 *
 * @param form_values 
 * @param config_ids 
 * @param cpu Number of CPUs for the server order. for example: ''184''
 * @param field_label 
 * @param cpu_li 
 * @param memory_li 
 * @param bandwidth_li 
 * @param ips_li 
 * @param os_li 
 * @param cp_li 
 * @param raid_li RAID options for the server order.
 */
case class ServerOrder (
  form_values: Option[ServerOrderFormValues],
  config_ids: Option[ServerOrderConfigIds],
  cpu: Option[Int],
  field_label: Option[ServerOrderFieldLabels],
  cpu_li: Option[ServerOrder_cpu_li],
  memory_li: Option[ServerOrder_memory_li],
  bandwidth_li: Option[ServerOrder_bandwidth_li],
  ips_li: Option[ServerOrder_ips_li],
  os_li: Option[ServerOrder_os_li],
  cp_li: Option[ServerOrder_cp_li],
  raid_li: Option[List[ServerOrderRAID]]
)

