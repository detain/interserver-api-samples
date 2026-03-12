package io.swagger.server.model


/**
 * A RAID configuration option available when ordering a dedicated server.
 *
 * @param id RAID ID. for example: ''7''
 * @param price RAID price. for example: ''50''
 * @param img RAID image. for example: ''raid.png''
 * @param short_desc Short description of the RAID. for example: ''Hardware Raid 5''
 * @param long_desc Long description of the RAID. for example: ''Hardware Raid 5''
 * @param monthly_price Monthly price. for example: ''50''
 * @param active Active status. for example: ''1''
 * @param price_display Display of RAID price. for example: ''$50.00''
 * @param monthly_price_display Display of monthly RAID price. for example: ''$50.00''
 */
case class ServerOrderRAID (
  id: Option[String],
  price: Option[Int],
  img: Option[String],
  short_desc: Option[String],
  long_desc: Option[String],
  monthly_price: Option[Int],
  active: Option[String],
  price_display: Option[String],
  monthly_price_display: Option[String]
)

