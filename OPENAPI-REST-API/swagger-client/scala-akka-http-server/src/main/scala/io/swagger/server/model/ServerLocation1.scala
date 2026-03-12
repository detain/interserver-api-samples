package io.swagger.server.model


/**
 * @param location_id 
 * @param location_name 
 * @param location_description 
 * @param location_lat 
 * @param location_long 
 * @param location_ipmi_group 
 */
case class ServerLocation1 (
  location_id: Int,
  location_name: String,
  location_description: Option[String],
  location_lat: String,
  location_long: String,
  location_ipmi_group: Option[Int]
)

