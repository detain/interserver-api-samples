package io.swagger.server.model


/**
 * OS Names
 *
 * @param opensuse  for example: ''OpenSUSE''
 * @param ubuntu  for example: ''Ubuntu''
 */
case class VpsOrder_osNames (
  opensuse: Option[String],
  ubuntu: Option[String]
)

