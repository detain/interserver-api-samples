package io.swagger.server.model


/**
 * = DnsNewDomain =
 *
 * The request for a new domain to be managed by the dns servers.
 *
 * @param domain The domain name. for example: ''mydomain.com''
 * @param ip IP Address to point the domain to. for example: ''1.2.3.4''
 */
case class DnsNewDomain (
  domain: String,
  ip: String
)

