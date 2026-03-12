
package org.openapitools.client.model


case class VpsTemplateRow (
    _template_id: Option[String],
    _template_type: Option[String],
    _template_os: Option[String],
    _template_version: Option[String],
    _template_bits: Option[String],
    _template_file: Option[String],
    _template_available: Option[String],
    _template_name: Option[String],
    _template_dir: Option[String]
)
object VpsTemplateRow {
    def toStringBody(var_template_id: Object, var_template_type: Object, var_template_os: Object, var_template_version: Object, var_template_bits: Object, var_template_file: Object, var_template_available: Object, var_template_name: Object, var_template_dir: Object) =
        s"""
        | {
        | "template_id":$var_template_id,"template_type":$var_template_type,"template_os":$var_template_os,"template_version":$var_template_version,"template_bits":$var_template_bits,"template_file":$var_template_file,"template_available":$var_template_available,"template_name":$var_template_name,"template_dir":$var_template_dir
        | }
        """.stripMargin
}
