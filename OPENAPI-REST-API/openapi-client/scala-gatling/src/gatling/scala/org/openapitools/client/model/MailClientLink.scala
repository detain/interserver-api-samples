
package org.openapitools.client.model


case class MailClientLink (
    /* The label of the client link. */
    _label: Option[String],
    /* The link URL of the client link. */
    _link: Option[String],
    /* The icon class of the client link. */
    _icon: Option[String],
    /* The text for the icon of the client link. */
    _icon_text: Option[String],
    /* Help text for the client link. */
    _help_text: Option[String],
    /* Additional attributes for the client link. */
    _other_attr: Option[String]
)
object MailClientLink {
    def toStringBody(var_label: Object, var_link: Object, var_icon: Object, var_icon_text: Object, var_help_text: Object, var_other_attr: Object) =
        s"""
        | {
        | "label":$var_label,"link":$var_link,"icon":$var_icon,"icon_text":$var_icon_text,"help_text":$var_help_text,"other_attr":$var_other_attr
        | }
        """.stripMargin
}
