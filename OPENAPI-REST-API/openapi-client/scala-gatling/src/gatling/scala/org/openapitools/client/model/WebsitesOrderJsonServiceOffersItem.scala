
package org.openapitools.client.model


case class WebsitesOrderJsonServiceOffersItem (
    /* Service offer ID */
    _service_offer_id: Option[String],
    /* Service ID */
    _service_id: Option[String],
    /* Introductory cost */
    _intro_cost: Option[Integer],
    /* Renewal cost */
    _renewal_cost: Option[Integer],
    /* Introductory frequency */
    _intro_frequency: Option[String],
    /* Renewal frequency */
    _renewal_frequency: Option[String],
    /* Allow coupon */
    _allow_coupon: Option[String],
    /* Service module */
    _service_module: Option[String],
    /* Creation date */
    _created_at: Option[String],
    /* Update date */
    _updated_at: Option[String],
    /* Deletion date */
    _deleted_at: Option[String],
    /* Currency symbol */
    _currencySymbol: Option[String]
)
object WebsitesOrderJsonServiceOffersItem {
    def toStringBody(var_service_offer_id: Object, var_service_id: Object, var_intro_cost: Object, var_renewal_cost: Object, var_intro_frequency: Object, var_renewal_frequency: Object, var_allow_coupon: Object, var_service_module: Object, var_created_at: Object, var_updated_at: Object, var_deleted_at: Object, var_currencySymbol: Object) =
        s"""
        | {
        | "service_offer_id":$var_service_offer_id,"service_id":$var_service_id,"intro_cost":$var_intro_cost,"renewal_cost":$var_renewal_cost,"intro_frequency":$var_intro_frequency,"renewal_frequency":$var_renewal_frequency,"allow_coupon":$var_allow_coupon,"service_module":$var_service_module,"created_at":$var_created_at,"updated_at":$var_updated_at,"deleted_at":$var_deleted_at,"currencySymbol":$var_currencySymbol
        | }
        """.stripMargin
}
