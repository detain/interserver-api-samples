package io.swagger.server.model


/**
 * = ServiceCategory =
 *
 * A Category of Services.  This is the broadest grouping within a module.
 *
 * @param category_id  for example: ''1''
 * @param category_name  for example: ''OpenVZ Virtual Servers''
 * @param category_tag  for example: ''openvz''
 * @param category_module  for example: ''vps''
 */
case class ServiceCategory (
  category_id: Int,
  category_name: String,
  category_tag: String,
  category_module: String
)

