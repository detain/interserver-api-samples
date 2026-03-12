
package org.openapitools.client.model


case class WebsitesOrderJsonServiceOffers (
    /* Array of service offers */
    _1026: List[WebsitesOrderJsonServiceOffersItem]
)
object WebsitesOrderJsonServiceOffers {
    def toStringBody(var_1026: Object) =
        s"""
        | {
        | "1026":$var_1026
        | }
        """.stripMargin
}
