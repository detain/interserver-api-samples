package io.swagger.server.model


/**
 * = ServerRow =
 *
 * A result row from the `Servers` `GET` request.
 *
 * @param server_id The id of the server. for example: ''8404''
 * @param account_lid The account lid of the server. for example: ''detain@interserver.net''
 * @param server_hostname The hostname of the server. for example: ''testsignup.is.net''
 * @param server_status The status of the server. for example: ''deleted''
 */
case class ServerRow (
  server_id: String,
  account_lid: String,
  server_hostname: String,
  server_status: String
)

