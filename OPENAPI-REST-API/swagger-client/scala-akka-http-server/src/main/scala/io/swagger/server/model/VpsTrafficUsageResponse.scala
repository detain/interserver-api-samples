package io.swagger.server.model


/**
 * = VpsTrafficUsageResponse =
 *
 * VPS Traffic Usage Section
 *
 * @param current 
 * @param peak 
 * @param average 
 */
case class VpsTrafficUsageResponse (
  current: VpsTrafficTotalsSectionResponse,
  peak: VpsTrafficTotalsSectionResponse,
  average: VpsTrafficUsageAverageResponse
)

