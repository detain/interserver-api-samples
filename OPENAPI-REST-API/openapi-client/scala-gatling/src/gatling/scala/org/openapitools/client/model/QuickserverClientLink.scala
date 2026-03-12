
package org.openapitools.client.model


case class QuickserverClientLink (
    /* Link label */
    _label: Option[String],
    /* Link */
    _link: Option[String],
    /* Icon class */
    _icon: Option[String],
    /* Icon text */
    _icon_text: Option[String],
    /* Help text */
    _help_text: Option[String],
    /* Other attribute */
    _other_attr: Option[String]
)
object QuickserverClientLink {
    def toStringBody(var_label: Object, var_link: Object, var_icon: Object, var_icon_text: Object, var_help_text: Object, var_other_attr: Object) =
        s"""
        | {
        | "label":$var_label,"link":$var_link,"icon":$var_icon,"icon_text":$var_icon_text,"help_text":$var_help_text,"other_attr":$var_other_attr
        | }
        """.stripMargin
}
