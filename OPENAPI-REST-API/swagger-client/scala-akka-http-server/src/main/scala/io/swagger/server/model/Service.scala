package io.swagger.server.model

import java.math.BigDecimal

/**
 * = Service =
 *
 * An individual package tied to one of our services.
 *
 * @param services_id  for example: ''31''
 * @param services_name  for example: ''OpenVZ VPS Slice''
 * @param services_cost  for example: ''6.0''
 * @param services_currency  for example: ''USD''
 * @param services_category  for example: ''1''
 * @param services_buyable  for example: ''true''
 * @param services_type  for example: ''6''
 * @param services_field1  for example: ''slice''
 * @param services_field2 
 * @param services_module  for example: ''vps''
 */
case class Service (
  services_id: Int,
  services_name: String,
  services_cost: BigDecimal,
  services_currency: String,
  services_category: Int,
  services_buyable: Boolean,
  services_type: Int,
  services_field1: String,
  services_field2: String,
  services_module: String
)

