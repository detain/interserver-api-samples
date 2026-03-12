package io.swagger.server.model


/**
 * @param owner 
 * @param admin 
 * @param tech 
 */
case class DomainAllInfo_attributes_contact_set (
  owner: Option[DomainOwnerContact],
  admin: Option[DomainAdminContact],
  tech: Option[DomainTechContact]
)

