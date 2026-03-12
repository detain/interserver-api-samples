package io.swagger.server.model


/**
 * IP address information table for a QuickServer service.
 *
 * @param title Table title for example: ''IP Information''
 * @param rows 
 */
case class QuickserverIpInfo (
  title: Option[String],
  rows: Option[List[QuickserverIpTableRow]]
)

