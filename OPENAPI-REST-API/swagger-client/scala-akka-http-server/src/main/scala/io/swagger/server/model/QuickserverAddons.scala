package io.swagger.server.model


/**
 * @param title Table title for example: ''Addons''
 * @param rows 
 */
case class QuickserverAddons (
  title: Option[String],
  rows: Option[List[QuickserverAddonsRow]]
)

