
package org.openapitools.client.model


case class ServerClientLink (
    _label: String,
    _link: String,
    _icon: Option[String],
    _icon_text: Option[String],
    _help_text: Option[String]
)
object ServerClientLink {
    def toStringBody(var_label: Object, var_link: Object, var_icon: Object, var_icon_text: Object, var_help_text: Object) =
        s"""
        | {
        | "label":$var_label,"link":$var_link,"icon":$var_icon,"icon_text":$var_icon_text,"help_text":$var_help_text
        | }
        """.stripMargin
}
