
package org.openapitools.client.model


case class GetScrubIpDetails200ResponseClientLinksInner (
    _label: Option[String],
    _link: Option[String],
    _icon: Option[String],
    _icon_text: Option[String],
    _help_text: Option[String],
    _other_attr: Option[String]
)
object GetScrubIpDetails200ResponseClientLinksInner {
    def toStringBody(var_label: Object, var_link: Object, var_icon: Object, var_icon_text: Object, var_help_text: Object, var_other_attr: Object) =
        s"""
        | {
        | "label":$var_label,"link":$var_link,"icon":$var_icon,"icon_text":$var_icon_text,"help_text":$var_help_text,"other_attr":$var_other_attr
        | }
        """.stripMargin
}
