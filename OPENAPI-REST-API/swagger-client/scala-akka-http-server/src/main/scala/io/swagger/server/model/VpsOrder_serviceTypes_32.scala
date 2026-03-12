package io.swagger.server.model


/**
 * @param services_id  for example: ''32''
 * @param services_name  for example: ''KVM Windows VPS Slice''
 * @param services_cost  for example: ''10.00''
 * @param services_category  for example: ''2''
 * @param services_buyable  for example: ''1''
 * @param services_type  for example: ''1''
 * @param services_field1  for example: ''slice''
 * @param services_field2 
 * @param services_module  for example: ''vps''
 */
case class VpsOrder_serviceTypes_32 (
  services_id: Option[String],
  services_name: Option[String],
  services_cost: Option[String],
  services_category: Option[String],
  services_buyable: Option[String],
  services_type: Option[String],
  services_field1: Option[String],
  services_field2: Option[String],
  services_module: Option[String]
)

