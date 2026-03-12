package io.swagger.server.model


/**
 * = VpsTrafficTotalsResposne =
 *
 * VPS Traffic Totals Section
 *
 * @param day 
 * @param month 
 * @param year 
 * @param all 
 */
case class VpsTrafficTotalsResposne (
  day: VpsTrafficTotalsSectionResponse,
  month: VpsTrafficTotalsSectionResponse,
  year: VpsTrafficTotalsSectionResponse,
  all: VpsTrafficTotalsSectionResponse
)

