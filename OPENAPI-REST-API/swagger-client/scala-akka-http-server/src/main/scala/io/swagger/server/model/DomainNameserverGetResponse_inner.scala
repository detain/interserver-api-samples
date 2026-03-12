package io.swagger.server.model


/**
 * @param name  for example: ''ns1.domain.com''
 * @param ipaddress  for example: ''1.2.3.4''
 * @param can_delete Whether the registrar allows deletion of this nameserver entry. for example: ''1''
 */
case class DomainNameserverGetResponse_inner (
  name: String,
  ipaddress: String,
  can_delete: String
)

