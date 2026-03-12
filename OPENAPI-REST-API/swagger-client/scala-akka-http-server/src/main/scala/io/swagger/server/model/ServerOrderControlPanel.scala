package io.swagger.server.model


/**
 * A control panel option available when ordering a dedicated server.
 *
 * @param id Control Panel ID. for example: ''9''
 * @param price Control Panel price. for example: ''80''
 * @param img Control Panel image. for example: ''cpanel.gif''
 * @param short_desc Short description of the control panel. for example: ''cPanel ($45+)''
 * @param long_desc Long description of the control panel.
 * @param os_type OS types compatible with the control panel.
 * @param monthly_price Monthly price. for example: ''0''
 * @param types List of types. for example: ''["1","2","4","5","8","17","23","30","51"]''
 * @param price_display Display of control panel price. for example: ''$80.00''
 * @param monthly_price_display Display of monthly control panel price. for example: ''$0.00''
 */
case class ServerOrderControlPanel (
  id: Option[String],
  price: Option[Int],
  img: Option[String],
  short_desc: Option[String],
  long_desc: Option[String],
  os_type: Option[String],
  monthly_price: Option[Int],
  types: Option[List[String]],
  price_display: Option[String],
  monthly_price_display: Option[String]
)

