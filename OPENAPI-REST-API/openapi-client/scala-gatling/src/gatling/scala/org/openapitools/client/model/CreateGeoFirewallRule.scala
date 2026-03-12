
package org.openapitools.client.model


case class CreateGeoFirewallRule (
    /* 1 = Block,  0 = Whitelist */
    _xdp_action: Integer,
    _destination_port: Option[Integer],
    /* To get country code refer our countries api - https://my.interserver.net/apiv2/account/countries?fetch_by=numcode */
    _country_code: Option[Integer],
    /* ASN number */
    _asn: Option[Integer]
)
object CreateGeoFirewallRule {
    def toStringBody(var_xdp_action: Object, var_destination_port: Object, var_country_code: Object, var_asn: Object) =
        s"""
        | {
        | "xdp_action":$var_xdp_action,"destination_port":$var_destination_port,"country_code":$var_country_code,"asn":$var_asn
        | }
        """.stripMargin
}
