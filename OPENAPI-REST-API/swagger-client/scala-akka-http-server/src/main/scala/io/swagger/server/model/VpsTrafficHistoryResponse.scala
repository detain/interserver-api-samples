package io.swagger.server.model


/**
 * = VpsTrafficHistoryResponse =
 *
 * VPS Traffic Data History Section
 *
 * @param hour 
 * @param day 
 */
case class VpsTrafficHistoryResponse (
  hour: VpsTrafficHistorySectionResponse,
  day: VpsTrafficHistorySectionResponse
)

