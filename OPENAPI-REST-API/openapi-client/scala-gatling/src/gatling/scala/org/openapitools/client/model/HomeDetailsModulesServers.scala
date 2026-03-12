
package org.openapitools.client.model


case class HomeDetailsModulesServers (
    /* The icon for dedicated servers. */
    _icon: Option[String],
    /* Link to view server. */
    _view_link: Option[String],
    /* Heading for dedicated servers. */
    _heading: Option[String],
    /* Link to order server. */
    _buy_link: Option[String],
    /* Link to view servers list. */
    _list_link: Option[String]
)
object HomeDetailsModulesServers {
    def toStringBody(var_icon: Object, var_view_link: Object, var_heading: Object, var_buy_link: Object, var_list_link: Object) =
        s"""
        | {
        | "icon":$var_icon,"view_link":$var_view_link,"heading":$var_heading,"buy_link":$var_buy_link,"list_link":$var_list_link
        | }
        """.stripMargin
}
