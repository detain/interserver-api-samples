package io.swagger.server.model

import java.math.BigDecimal

/**
 * @param memory_det 
 * @param hd_det 
 * @param monthly_fee 
 * @param id 
 * @param short_desc 
 * @param long_desc 
 * @param `type` 
 * @param speed 
 * @param num_cores 
 * @param num_cpus 
 * @param benchmark 
 * @param monthly_price 
 * @param monthly_price_display 
 * @param max_ram 
 * @param min_ram 
 * @param max_lff 
 * @param max_sff 
 * @param max_nve 
 * @param visible 
 * @param active 
 */
case class CpuWithDefaults (
  memory_det: Option[MemoryOption],
  hd_det: Option[HardDrive],
  monthly_fee: Option[String],
  id: Option[Int],
  short_desc: Option[String],
  long_desc: Option[String],
  `type`: Option[String],
  speed: Option[String],
  num_cores: Option[String],
  num_cpus: Option[String],
  benchmark: Option[String],
  monthly_price: Option[BigDecimal],
  monthly_price_display: Option[String],
  max_ram: Option[String],
  min_ram: Option[String],
  max_lff: Option[String],
  max_sff: Option[String],
  max_nve: Option[String],
  visible: Option[String],
  active: Option[String]
)

