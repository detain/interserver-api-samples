package io.swagger.server.model


/**
 * A display label for a server order form field.
 *
 * @param name 
 * @param active 
 */
case class FieldLabel (
  name: Option[String],
  active: Option[Int]
)

