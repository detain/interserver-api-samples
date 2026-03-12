
package org.openapitools.client.model


case class VpsClientLink (
    /* Display label for the link. */
    _label: Option[String],
    /* URL or route for the action. */
    _link: Option[String],
    /* Icon class for the link. */
    _icon: Option[String],
    /* Icon text label. */
    _icon_text: Option[String],
    /* Help tooltip text for the link. */
    _help_text: Option[String]
)
object VpsClientLink {
    def toStringBody(var_label: Object, var_link: Object, var_icon: Object, var_icon_text: Object, var_help_text: Object) =
        s"""
        | {
        | "label":$var_label,"link":$var_link,"icon":$var_icon,"icon_text":$var_icon_text,"help_text":$var_help_text
        | }
        """.stripMargin
}
