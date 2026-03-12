
package org.openapitools.client.model


case class DomainRow (
    /* The ID number of the domain in our billing system. */
    _domain_id: Option[String],
    /* The hostname of the domain. */
    _domain_hostname: Option[String],
    /* The expiration date of the domain. */
    _domain_expire_date: Option[String],
    /* The cost of the domain. */
    _cost: Option[String],
    /* The billing / registration status of the domain. */
    _domain_status: Option[String]
)
object DomainRow {
    def toStringBody(var_domain_id: Object, var_domain_hostname: Object, var_domain_expire_date: Object, var_cost: Object, var_domain_status: Object) =
        s"""
        | {
        | "domain_id":$var_domain_id,"domain_hostname":$var_domain_hostname,"domain_expire_date":$var_domain_expire_date,"cost":$var_cost,"domain_status":$var_domain_status
        | }
        """.stripMargin
}
