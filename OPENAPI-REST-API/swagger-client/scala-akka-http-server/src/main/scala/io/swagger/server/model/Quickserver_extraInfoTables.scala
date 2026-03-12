package io.swagger.server.model


/**
 * @param ip_info 
 * @param addons 
 */
case class Quickserver_extraInfoTables (
  ip_info: Option[QuickserverIpInfo],
  addons: Option[QuickserverAddons]
)

