package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ServerLease._

case class ServerLease (
  /* MAC address associated with the lease. */
  mac: String,
/* Indicates if the lease is authenticated. */
  authenticated: Boolean,
/* Group identifier for the lease. */
  group: String)

object ServerLease {
  import DateTimeCodecs._

  implicit val ServerLeaseCodecJson: CodecJson[ServerLease] = CodecJson.derive[ServerLease]
  implicit val ServerLeaseDecoder: EntityDecoder[ServerLease] = jsonOf[ServerLease]
  implicit val ServerLeaseEncoder: EntityEncoder[ServerLease] = jsonEncoderOf[ServerLease]
}
