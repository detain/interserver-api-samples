
package org.openapitools.client.model


case class VpsTemplatesList (
    /* A listing of the templates. */
    _templates: List[VpsTemplateRow]
)
object VpsTemplatesList {
    def toStringBody(var_templates: Object) =
        s"""
        | {
        | "templates":$var_templates
        | }
        """.stripMargin
}
