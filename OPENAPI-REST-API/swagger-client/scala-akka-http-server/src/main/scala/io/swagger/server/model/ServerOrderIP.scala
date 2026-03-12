package io.swagger.server.model


/**
 * An IP block option available when ordering a dedicated server.
 *
 * @param id IP ID. for example: ''9''
 * @param price IP price. for example: ''0''
 * @param img IP image. for example: ''ips.jpg''
 * @param short_desc Short description of the IP. for example: ''1 Vlan Ip (/30)''
 * @param long_desc Long description of the IP. for example: ''1 IP In personal Vlan''
 * @param qty Quantity of IPs. for example: ''1''
 * @param monthly_price Monthly price. for example: ''0''
 * @param price_display Display of IP price. for example: ''$0.00''
 * @param monthly_price_display Display of monthly IP price. for example: ''$0.00''
 */
case class ServerOrderIP (
  id: Option[String],
  price: Option[Int],
  img: Option[String],
  short_desc: Option[String],
  long_desc: Option[String],
  qty: Option[String],
  monthly_price: Option[Int],
  price_display: Option[String],
  monthly_price_display: Option[String]
)

