package io.swagger.server.model


/**
 * A bandwidth option available when ordering a dedicated server.
 *
 * @param id Bandwidth ID. for example: ''15''
 * @param price Bandwidth price. for example: ''0''
 * @param img Bandwidth image. for example: ''bandwidth.jpg''
 * @param short_desc Short description of the bandwidth. for example: ''150TB (10Gb Port)''
 * @param long_desc Long description of the bandwidth. for example: '' - 2000GB Bandwidth...''
 * @param `type` Bandwidth type. for example: ''Standard''
 * @param qty Quantity of bandwidth. for example: ''4000''
 * @param active Active status. for example: ''1''
 * @param monthly_price Monthly price. for example: ''15''
 * @param price_display Display of bandwidth price. for example: ''$0.00''
 * @param monthly_price_display Display of monthly bandwidth price. for example: ''$15.00''
 */
case class ServerOrderBandwidth (
  id: Option[String],
  price: Option[Int],
  img: Option[String],
  short_desc: Option[String],
  long_desc: Option[String],
  `type`: Option[String],
  qty: Option[String],
  active: Option[String],
  monthly_price: Option[Int],
  price_display: Option[String],
  monthly_price_display: Option[String]
)

