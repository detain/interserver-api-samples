package io.swagger.server.model


/**
 * @param title Title of the table
 * @param rows 
 */
case class WebsiteTable (
  title: Option[String],
  rows: Option[List[WebsiteTableRow]]
)

