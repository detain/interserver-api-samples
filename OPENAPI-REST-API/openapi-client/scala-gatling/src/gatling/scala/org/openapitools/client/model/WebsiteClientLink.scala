
package org.openapitools.client.model


case class WebsiteClientLink (
    /* Label for the link */
    _label: Option[String],
    /* Link URL */
    _link: Option[String],
    /* Icon for the link */
    _icon: Option[String],
    /* Icon text for the link */
    _icon_text: Option[String],
    /* Help text for the link */
    _help_text: Option[String],
    /* Other attributes for the link */
    _other_attr: Option[String]
)
object WebsiteClientLink {
    def toStringBody(var_label: Object, var_link: Object, var_icon: Object, var_icon_text: Object, var_help_text: Object, var_other_attr: Object) =
        s"""
        | {
        | "label":$var_label,"link":$var_link,"icon":$var_icon,"icon_text":$var_icon_text,"help_text":$var_help_text,"other_attr":$var_other_attr
        | }
        """.stripMargin
}
