package io.swagger.server.model


/**
 * A listing of the OS Templates available for use.
 *
 * @param templates A listing of the templates.
 */
case class VpsTemplatesList (
  templates: List[VpsTemplateRow]
)

