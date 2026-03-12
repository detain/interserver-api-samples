package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import VpsSnapshot._

case class VpsSnapshot (
  /* Snapshot name. */
  name: Option[String],
/* Disk space used by this snapshot in bytes. */
  used: Option[Integer],
/* Unix timestamp of when the snapshot was created. */
  date: Option[Integer])

object VpsSnapshot {
  import DateTimeCodecs._

  implicit val VpsSnapshotCodecJson: CodecJson[VpsSnapshot] = CodecJson.derive[VpsSnapshot]
  implicit val VpsSnapshotDecoder: EntityDecoder[VpsSnapshot] = jsonOf[VpsSnapshot]
  implicit val VpsSnapshotEncoder: EntityEncoder[VpsSnapshot] = jsonEncoderOf[VpsSnapshot]
}
