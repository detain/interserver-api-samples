package io.swagger.server.model


/**
 * = IpLimitRange =
 *
 * The lower and upper bounds of an ip range.
 *
 * @param start The begining (or first) IP address in the range. for example: ''1.2.3.0''
 * @param end The ending (or last) IP address in the range. for example: ''1.2.3.255''
 */
case class IpLimitRange (
  start: String,
  end: String
)

