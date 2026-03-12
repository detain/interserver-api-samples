
package org.openapitools.client.model


case class HomeDetailsModulesWebhosting (
    /* The icon for web hosting. */
    _icon: Option[String],
    /* Link to view website. */
    _view_link: Option[String],
    /* Heading for web hosting. */
    _heading: Option[String],
    /* Link to order website. */
    _buy_link: Option[String],
    /* Link to view websites list. */
    _list_link: Option[String]
)
object HomeDetailsModulesWebhosting {
    def toStringBody(var_icon: Object, var_view_link: Object, var_heading: Object, var_buy_link: Object, var_list_link: Object) =
        s"""
        | {
        | "icon":$var_icon,"view_link":$var_view_link,"heading":$var_heading,"buy_link":$var_buy_link,"list_link":$var_list_link
        | }
        """.stripMargin
}
