
package org.openapitools.client.model


case class DomainAllInfoAttributesContactSet (
    _owner: Option[DomainOwnerContact],
    _admin: Option[DomainAdminContact],
    _tech: Option[DomainTechContact]
)
object DomainAllInfoAttributesContactSet {
    def toStringBody(var_owner: Object, var_admin: Object, var_tech: Object) =
        s"""
        | {
        | "owner":$var_owner,"admin":$var_admin,"tech":$var_tech
        | }
        """.stripMargin
}
