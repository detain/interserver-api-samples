
package org.openapitools.client.model


case class TicketPostDetailsInner (
    _post_id: Option[Integer],
    _date: Option[String],
    _contents: Option[String],
    _creator: Option[String],
    _creator_email: Option[String],
    _creator_name: Option[String],
    _hasattachments: Option[Integer],
    _attachment_download: Option[String]
)
object TicketPostDetailsInner {
    def toStringBody(var_post_id: Object, var_date: Object, var_contents: Object, var_creator: Object, var_creator_email: Object, var_creator_name: Object, var_hasattachments: Object, var_attachment_download: Object) =
        s"""
        | {
        | "post_id":$var_post_id,"date":$var_date,"contents":$var_contents,"creator":$var_creator,"creator_email":$var_creator_email,"creator_name":$var_creator_name,"hasattachments":$var_hasattachments,"attachment_download":$var_attachment_download
        | }
        """.stripMargin
}
