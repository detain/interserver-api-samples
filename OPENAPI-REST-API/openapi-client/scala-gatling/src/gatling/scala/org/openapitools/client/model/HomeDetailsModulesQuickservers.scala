
package org.openapitools.client.model


case class HomeDetailsModulesQuickservers (
    /* The icon for quick servers. */
    _icon: Option[String],
    /* Link to view quick servers. */
    _view_link: Option[String],
    /* Heading for quick servers. */
    _heading: Option[String],
    /* Link to order quick server. */
    _buy_link: Option[String],
    /* Link to view quick servers list. */
    _list_link: Option[String]
)
object HomeDetailsModulesQuickservers {
    def toStringBody(var_icon: Object, var_view_link: Object, var_heading: Object, var_buy_link: Object, var_list_link: Object) =
        s"""
        | {
        | "icon":$var_icon,"view_link":$var_view_link,"heading":$var_heading,"buy_link":$var_buy_link,"list_link":$var_list_link
        | }
        """.stripMargin
}
