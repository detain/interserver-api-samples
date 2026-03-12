package io.swagger.server.model


/**
 * Available QuickServer options and OS templates for ordering a new QuickServer.
 *
 * @param qs_id Quickserver ID. for example: ''221''
 * @param server_details 
 * @param templates 
 * @param version 
 * @param distro_sel 
 */
case class QuickserverOrder (
  qs_id: Option[String],
  server_details: Option[QuickserverOrder_server_details],
  templates: Option[QuickserverOrder_templates],
  version: Option[QuickserverOrder_version],
  distro_sel: Option[QuickserverOrder_distro_sel]
)

