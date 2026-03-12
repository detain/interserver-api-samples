package io.swagger.server.model


/**
 * = ServiceType =
 *
 * A general grouping of services within a category.
 *
 * @param st_id  for example: ''600''
 * @param st_name  for example: ''Dedicated Server''
 * @param st_category  for example: ''600''
 * @param st_module  for example: ''servers''
 */
case class ServiceType (
  st_id: Int,
  st_name: String,
  st_category: Int,
  st_module: String
)

