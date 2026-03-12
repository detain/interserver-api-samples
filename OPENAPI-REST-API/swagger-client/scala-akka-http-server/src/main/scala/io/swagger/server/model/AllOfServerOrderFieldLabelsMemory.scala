package io.swagger.server.model


/**
 * Memory field label.
 *
 * @param name Name of the field label. for example: ''Bandwidth''
 * @param active Active status of the field label. for example: ''1''
 */
case class AllOfServerOrderFieldLabelsMemory (
  name: Option[String],
  active: Option[Int]
)

