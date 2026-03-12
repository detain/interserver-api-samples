package io.swagger.server.model

import java.math.BigDecimal

/**
 * @param server_id The ID of the buy-it-now server configuration to order. Use the server listing from `GET /servers/order/buy_now_server` to find valid IDs. for example: ''2343''
 * @param server_hostname The fully-qualified hostname to assign to the server. for example: ''server.int.com''
 * @param server_root_password The root or administrator password to set on the server. for example: ''uD1c!@cgD''
 */
case class Order_buy_now_server_body (
  server_id: Option[BigDecimal],
  server_hostname: Option[String],
  server_root_password: Option[String]
)

