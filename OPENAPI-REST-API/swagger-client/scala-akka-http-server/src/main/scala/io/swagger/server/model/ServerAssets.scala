package io.swagger.server.model


/**
 * @param title The title of the assets. for example: ''Assets''
 * @param size The size of the assets. for example: ''2''
 * @param `type` The type of the assets. for example: ''table''
 * @param header The header of the assets table.
 * @param rows The rows of the assets table.
 */
case class ServerAssets (
  title: Option[String],
  size: Option[Int],
  `type`: Option[String],
  header: Option[List[String]],
  rows: Option[List[List[String]]]
)

