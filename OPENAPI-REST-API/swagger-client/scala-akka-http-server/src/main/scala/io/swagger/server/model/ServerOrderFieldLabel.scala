package io.swagger.server.model


/**
 * A display label for a field in the server order form.
 *
 * @param name Name of the field label. for example: ''Bandwidth''
 * @param active Active status of the field label. for example: ''1''
 */
case class ServerOrderFieldLabel (
  name: Option[String],
  active: Option[Int]
)

