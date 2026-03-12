package io.swagger.server.model


/**
 * Payload for adding a registered nameserver (glue record).
 *
 * @param name  for example: ''ns1.host.com''
 * @param ipAddress  for example: ''1.2.3.4Get''
 */
case class DomainNameserverPostRequest (
  name: String,
  ipAddress: String
)

