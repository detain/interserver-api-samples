package io.swagger.server.model


/**
 * A buy-it-now dedicated server listing from the marketplace, with hardware specs and pricing.
 *
 * @param server_id Unique server ID. Use this as `server_id` in `POST /servers/order/buy_now_server`. for example: ''11432''
 * @param cpu 
 * @param memory  for example: ''64GB''
 * @param disk 
 * @param bandwidth  for example: ''1Gbps Unmetered''
 * @param ips  for example: ''1 Vlan Ip (/30)''
 * @param location  for example: ''NYC Region''
 * @param price  for example: ''64''
 */
case class BuyItNowRow (
  server_id: Option[String],
  cpu: Option[List[OneOfBuyItNowRowCpuItems]],
  memory: Option[String],
  disk: Option[Map[String, String]],
  bandwidth: Option[String],
  ips: Option[String],
  location: Option[String],
  price: Option[Int]
)

