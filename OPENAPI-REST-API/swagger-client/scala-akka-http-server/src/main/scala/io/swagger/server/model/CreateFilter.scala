package io.swagger.server.model


/**
 * = Create Filter =
 *
 * Create firewall rule for your ip
 *
 * @param filter_type  for example: ''cs2_udp''
 * @param port  for example: ''8080''
 */
case class CreateFilter (
  filter_type: String,
  port: Int
)

