package io.swagger.server.model


/**
 * A memory (RAM) option available when ordering a dedicated server.
 *
 * @param id Memory ID. for example: ''65''
 * @param price Memory price. for example: ''0''
 * @param img Memory image. for example: ''hd.jpg''
 * @param short_desc Short description of the memory. for example: ''20TB SATA''
 * @param long_desc Long description of the memory.
 * @param manu Manufacturer information.
 * @param size Memory size. for example: ''3000''
 * @param `type` Memory type.
 * @param hidden Hidden status. for example: ''0''
 * @param monthly_price Monthly price. for example: ''50''
 * @param drive_type Drive type. for example: ''lff''
 * @param monthly_price_display Display of monthly memory price. for example: ''$50.00''
 */
case class ServerOrderMemory (
  id: Option[String],
  price: Option[String],
  img: Option[String],
  short_desc: Option[String],
  long_desc: Option[String],
  manu: Option[String],
  size: Option[String],
  `type`: Option[String],
  hidden: Option[String],
  monthly_price: Option[Int],
  drive_type: Option[String],
  monthly_price_display: Option[String]
)

