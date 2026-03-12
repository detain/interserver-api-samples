
package org.openapitools.client.model


case class HomeDetailsModulesDomains (
    /* The icon for domains. */
    _icon: Option[String],
    /* Link to view domain. */
    _view_link: Option[String],
    /* Heading for domains. */
    _heading: Option[String],
    /* Link to order domain. */
    _buy_link: Option[String],
    /* Link to view domains list. */
    _list_link: Option[String]
)
object HomeDetailsModulesDomains {
    def toStringBody(var_icon: Object, var_view_link: Object, var_heading: Object, var_buy_link: Object, var_list_link: Object) =
        s"""
        | {
        | "icon":$var_icon,"view_link":$var_view_link,"heading":$var_heading,"buy_link":$var_buy_link,"list_link":$var_list_link
        | }
        """.stripMargin
}
