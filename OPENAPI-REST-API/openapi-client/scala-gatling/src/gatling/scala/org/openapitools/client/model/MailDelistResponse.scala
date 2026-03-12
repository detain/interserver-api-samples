
package org.openapitools.client.model


case class MailDelistResponse (
    /* Mail service ID. */
    _id: Option[Integer],
    /* Local blocklist entries. */
    _local: Option[List[Any]],
    /* MailBaby trap block entries. */
    _mbtrap: Option[List[Any]],
    /* Subject-based block entries. */
    _subject: Option[List[Any]],
    /* Manually blocked entries. */
    _manual: Option[List[Any]]
)
object MailDelistResponse {
    def toStringBody(var_id: Object, var_local: Object, var_mbtrap: Object, var_subject: Object, var_manual: Object) =
        s"""
        | {
        | "id":$var_id,"local":$var_local,"mbtrap":$var_mbtrap,"subject":$var_subject,"manual":$var_manual
        | }
        """.stripMargin
}
