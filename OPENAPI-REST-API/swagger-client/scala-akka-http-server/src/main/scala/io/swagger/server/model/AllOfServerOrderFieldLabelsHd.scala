package io.swagger.server.model


/**
 * Hard Drives field label
 *
 * @param name Name of the field label. for example: ''Bandwidth''
 * @param active Active status of the field label. for example: ''1''
 */
case class AllOfServerOrderFieldLabelsHd (
  name: Option[String],
  active: Option[Int]
)

