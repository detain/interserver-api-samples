package io.swagger.server.model


/**
 * A CPU option available when ordering a dedicated server.
 *
 * @param id CPU ID. for example: ''254''
 * @param price CPU price. for example: ''0''
 * @param img CPU image. for example: ''ryzen.png''
 * @param short_desc Short description of the CPU. for example: ''AMD RYZEN 7900X''
 * @param long_desc Long description of the CPU. for example: ''High core and thread count...''
 * @param location Location of the CPU. for example: ''New York''
 * @param fsb Front Side Bus information.
 * @param manu Manufacturer information.
 * @param `type` CPU type. for example: ''AMD''
 * @param speed CPU speed. for example: ''4.7''
 * @param cache Cache information.
 * @param active Active status. for example: ''1''
 * @param num_cores Number of cores. for example: ''12''
 * @param num_cpus Number of CPUs. for example: ''1''
 * @param benchmark CPU benchmark. for example: ''121148''
 * @param monthly_price Monthly price. for example: ''75''
 * @param max_ram Maximum RAM supported. for example: ''128''
 * @param min_ram Minimum RAM required. for example: ''128''
 * @param max_lff Maximum LFF (Large Form Factor) supported. for example: ''4''
 * @param max_sff Maximum SFF (Small Form Factor) supported. for example: ''4''
 * @param max_nve Maximum NVMe drives supported. for example: ''2''
 * @param visible Visibility status. for example: ''yes''
 * @param hd_ids Hard drive IDs.
 * @param price_display Display of CPU price. for example: ''$0.00''
 * @param monthly_price_display Display of monthly CPU price. for example: ''$75.00''
 */
case class ServerOrderCPU (
  id: Option[String],
  price: Option[Int],
  img: Option[String],
  short_desc: Option[String],
  long_desc: Option[String],
  location: Option[String],
  fsb: Option[String],
  manu: Option[String],
  `type`: Option[String],
  speed: Option[String],
  cache: Option[String],
  active: Option[String],
  num_cores: Option[String],
  num_cpus: Option[String],
  benchmark: Option[String],
  monthly_price: Option[Int],
  max_ram: Option[String],
  min_ram: Option[String],
  max_lff: Option[String],
  max_sff: Option[String],
  max_nve: Option[String],
  visible: Option[String],
  hd_ids: Option[String],
  price_display: Option[String],
  monthly_price_display: Option[String]
)

