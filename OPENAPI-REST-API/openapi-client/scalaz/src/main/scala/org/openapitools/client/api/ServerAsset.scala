package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ServerAsset._

case class ServerAsset (
  /* Unique identifier for the asset. */
  id: Integer,
/* Order identifier for the asset. */
  order_id: String,
/* Hostname associated with the asset. */
  hostname: String,
/* Status of the asset. */
  status: String,
/* Primary IPv4 address of the asset. */
  primary_ipv4: String,
/* Primary IPv6 address of the asset. */
  primary_ipv6: String,
/* Datacenter identifier for the asset. */
  datacenter: String,
/* Type identifier for the asset. */
  type_id: String,
/* Asset tag associated with the asset. */
  asset_tag: String,
/* Rack identifier for the asset. */
  rack: String,
/* Row identifier for the asset. */
  row: String,
/* Column identifier for the asset. */
  col: String,
/* Starting unit identifier for the asset. */
  unit_start: String,
/* Ending unit identifier for the asset. */
  unit_end: String,
/* Subunit identifier for the asset. */
  unit_sub: String,
/* IPMI MAC address associated with the asset. */
  ipmi_mac: String,
/* IPMI IP address associated with the asset. */
  ipmi_ip: String,
/* IPMI working status associated with the asset. */
  ipmi_working: String,
/* Company associated with the asset. */
  company: String,
/* Comments associated with the asset. */
  comments: String,
/* Make of the asset. */
  make: String,
/* Model of the asset. */
  model: String,
/* Description of the asset. */
  description: String,
/* Customer identifier for the asset. */
  customer_id: String,
/* External identifier for the asset. */
  external_id: String,
/* Billing status of the asset. */
  billing_status: String,
/* Overdue status of the asset. */
  overdue: String,
/* Asset identifier for the asset. */
  asset_id: String,
/* Name of the asset. */
  asset_name: String,
/* Rack identifier for the asset. */
  rack_id: String,
/* Rack name associated with the asset. */
  rack_name: String,
/* Location of the rack associated with the asset. */
  rack_location: String,
/* Size of the rack associated with the asset. */
  rack_size: String,
/* X-coordinate of the asset within the rack. */
  rack_x: String,
/* Y-coordinate of the asset within the rack. */
  rack_y: String,
/* List of switchports associated with the asset. */
  switchports: List[Integer],
/* List of VLANs associated with the asset. */
  vlans: List[String],
/* List of IPv6 VLANs associated with the asset. */
  vlans6: List[String],
lease: ServerLease,
/* MAC address associated with the asset. */
  mac: Option[AnyType],
/* IPMI admin username associated with the asset. */
  ipmi_admin_username: Option[AnyType],
/* IPMI admin password associated with the asset. */
  ipmi_admin_password: Option[AnyType],
/* IPMI client username associated with the asset. */
  ipmi_client_username: Option[AnyType],
/* IPMI client password associated with the asset. */
  ipmi_client_password: Option[AnyType],
/* IPMI update status associated with the asset. */
  ipmi_updated: Option[AnyType],
/* Timestamp of asset creation. */
  create_timestamp: Option[AnyType],
/* Timestamp of asset update. */
  update_timestamp: Option[AnyType],
/* Comment associated with the asset. */
  comment: Option[AnyType])

object ServerAsset {
  import DateTimeCodecs._

  implicit val ServerAssetCodecJson: CodecJson[ServerAsset] = CodecJson.derive[ServerAsset]
  implicit val ServerAssetDecoder: EntityDecoder[ServerAsset] = jsonOf[ServerAsset]
  implicit val ServerAssetEncoder: EntityEncoder[ServerAsset] = jsonEncoderOf[ServerAsset]
}
