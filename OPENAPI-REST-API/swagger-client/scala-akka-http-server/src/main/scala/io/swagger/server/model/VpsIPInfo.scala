package io.swagger.server.model


/**
 * IP address information table for a VPS service.
 *
 * @param title Title of the table for example: ''IP Information''
 * @param rows 
 */
case class VpsIPInfo (
  title: Option[String],
  rows: Option[List[VpsIPInfoRow]]
)

