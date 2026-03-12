package io.swagger.server.model


/**
 * = TimezoneUpdate =
 *
 * The request to update the time zone of a vps.
 *
 * @param timezone The time zone for example: ''America/New_York''
 */
case class TimezoneUpdate (
  timezone: String
)

