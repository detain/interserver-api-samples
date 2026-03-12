
package org.openapitools.client.model


case class HomeDetailsModulesBackups (
    /* The icon for storages. */
    _icon: Option[String],
    /* Link to view backup. */
    _view_link: Option[String],
    /* Heading for storages. */
    _heading: Option[String],
    /* Link to order storage. */
    _buy_link: Option[String],
    /* Link to view backups list. */
    _list_link: Option[String]
)
object HomeDetailsModulesBackups {
    def toStringBody(var_icon: Object, var_view_link: Object, var_heading: Object, var_buy_link: Object, var_list_link: Object) =
        s"""
        | {
        | "icon":$var_icon,"view_link":$var_view_link,"heading":$var_heading,"buy_link":$var_buy_link,"list_link":$var_list_link
        | }
        """.stripMargin
}
