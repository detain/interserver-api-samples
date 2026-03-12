package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ServerSwitchport._

case class ServerSwitchport (
  /* Unique identifier for the switchport. */
  switchport_id: Integer,
/* Unique identifier for the switch associated with the switchport. */
  switch_id: String,
/* Name of the switch associated with the switchport. */
  switch: String,
/* Port name on the switch. */
  port: String,
/* Blade name associated with the port. */
  blade: String,
/* Port identifier. */
  justport: String,
/* Identifier for the graph associated with the switchport. */
  graph_id: String,
/* Unique identifier of the asset associated with the switchport. */
  asset_id: Integer,
/* List of VLANs associated with the switchport. */
  vlans: Option[List[String]],
/* List of IPv6 VLANs associated with the switchport. */
  vlans6: Option[List[String]])

object ServerSwitchport {
  import DateTimeCodecs._

  implicit val ServerSwitchportCodecJson: CodecJson[ServerSwitchport] = CodecJson.derive[ServerSwitchport]
  implicit val ServerSwitchportDecoder: EntityDecoder[ServerSwitchport] = jsonOf[ServerSwitchport]
  implicit val ServerSwitchportEncoder: EntityEncoder[ServerSwitchport] = jsonEncoderOf[ServerSwitchport]
}
