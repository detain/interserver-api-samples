package io.swagger.server.model


/**
 * @param mac MAC address associated with the lease. for example: ''0c:c4:7a:af:35:00''
 * @param authenticated Indicates if the lease is authenticated. for example: ''false''
 * @param group Group identifier for the lease. for example: ''1''
 */
case class ServerLease (
  mac: String,
  authenticated: Boolean,
  group: String
)

