package io.swagger.server.model


/**
 * = LoginServiceCounts =
 *
 * Order counts per module.
 *
 * @param vps The number of total VPS orders that have been placed in our billing system. for example: ''205172''
 * @param websites The number of total website orders that have been placed in our billing system. for example: ''205172''
 * @param servers The number of total server orders that have been placed in our billing system. for example: ''205172''
 */
case class LoginServiceCounts (
  vps: Int,
  websites: Int,
  servers: Int
)

