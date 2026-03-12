
package org.openapitools.client.model


case class LicenseClientLink (
    /* Link label */
    _label: String,
    /* Link URL */
    _link: String,
    /* Link icon */
    _icon: String,
    /* Help text */
    _help_text: String,
    /* Icon text */
    _icon_text: Option[String],
    /* Other attributes */
    _other_attr: Option[String]
)
object LicenseClientLink {
    def toStringBody(var_label: Object, var_link: Object, var_icon: Object, var_help_text: Object, var_icon_text: Object, var_other_attr: Object) =
        s"""
        | {
        | "label":$var_label,"link":$var_link,"icon":$var_icon,"help_text":$var_help_text,"icon_text":$var_icon_text,"other_attr":$var_other_attr
        | }
        """.stripMargin
}
