package io.swagger.server.model


/**
 * An operating system option available when ordering a dedicated server.
 *
 * @param id Operating System ID. for example: ''51''
 * @param price Operating System price. for example: ''0''
 * @param img Operating System image.
 * @param short_desc Short description of the OS. for example: ''AlmaLinux''
 * @param long_desc Long description of the OS.
 * @param monthly_price Monthly price. for example: ''0''
 * @param active Active status. for example: ''1''
 * @param price_display Display of OS price. for example: ''$0.00''
 * @param monthly_price_display Display of monthly OS price. for example: ''$0.00''
 */
case class ServerOrderOS (
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

