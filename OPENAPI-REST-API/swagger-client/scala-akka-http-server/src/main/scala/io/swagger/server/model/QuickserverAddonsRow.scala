package io.swagger.server.model


/**
 * A single add-on item associated with a QuickServer service.
 *
 * @param desc Description for example: ''Additional IP Address''
 * @param value Value
 */
case class QuickserverAddonsRow (
  desc: Option[String],
  value: Option[String]
)

