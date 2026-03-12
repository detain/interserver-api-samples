
package org.openapitools.client.model


case class WebsitesOrderServiceOffer (
    /* The ID of the service offer. */
    _service_offer_id: String,
    /* The ID of the associated service. */
    _service_id: String,
    /* The introductory cost of the service offer. */
    _intro_cost: String,
    /* The renewal cost of the service offer. */
    _renewal_cost: String,
    /* The introductory frequency of the service offer. */
    _intro_frequency: String,
    /* The renewal frequency of the service offer. */
    _renewal_frequency: String,
    /* Indicates if coupons are allowed (1 for yes, 0 for no). */
    _allow_coupon: String,
    /* The module of the service offer. */
    _service_module: String,
    /* The creation timestamp of the service offer. */
    _created_at: String,
    /* The update timestamp of the service offer. */
    _updated_at: Option[String],
    /* The deletion timestamp of the service offer. */
    _deleted_at: Option[String]
)
object WebsitesOrderServiceOffer {
    def toStringBody(var_service_offer_id: Object, var_service_id: Object, var_intro_cost: Object, var_renewal_cost: Object, var_intro_frequency: Object, var_renewal_frequency: Object, var_allow_coupon: Object, var_service_module: Object, var_created_at: Object, var_updated_at: Object, var_deleted_at: Object) =
        s"""
        | {
        | "service_offer_id":$var_service_offer_id,"service_id":$var_service_id,"intro_cost":$var_intro_cost,"renewal_cost":$var_renewal_cost,"intro_frequency":$var_intro_frequency,"renewal_frequency":$var_renewal_frequency,"allow_coupon":$var_allow_coupon,"service_module":$var_service_module,"created_at":$var_created_at,"updated_at":$var_updated_at,"deleted_at":$var_deleted_at
        | }
        """.stripMargin
}
