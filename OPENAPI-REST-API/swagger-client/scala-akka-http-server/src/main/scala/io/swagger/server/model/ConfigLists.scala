package io.swagger.server.model


/**
 * All available configuration options (CPU, memory, storage, bandwidth, OS, control panel, RAID) for building a dedicated server order.
 *
 * @param cpu_li 
 * @param memory_li 
 * @param hd_li 
 * @param bandwidth_li 
 * @param ips_li 
 * @param os_li 
 * @param cp_li 
 * @param raid_li 
 */
case class ConfigLists (
  cpu_li: Option[Map[String, Cpu]],
  memory_li: Option[Map[String, Map[String, MemoryOption]]],
  hd_li: Option[Map[String, Map[String, HardDrive]]],
  bandwidth_li: Option[Map[String, Bandwidth]],
  ips_li: Option[Map[String, IpBlock]],
  os_li: Option[Map[String, OperatingSystem]],
  cp_li: Option[Map[String, ControlPanel]],
  raid_li: Option[List[RaidOption]]
)

