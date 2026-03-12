package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ServerOrderFieldLabel._

case class ServerOrderFieldLabel (
  /* Name of the field label. */
  name: Option[String],
/* Active status of the field label. */
  active: Option[Integer])

object ServerOrderFieldLabel {
  import DateTimeCodecs._

  implicit val ServerOrderFieldLabelCodecJson: CodecJson[ServerOrderFieldLabel] = CodecJson.derive[ServerOrderFieldLabel]
  implicit val ServerOrderFieldLabelDecoder: EntityDecoder[ServerOrderFieldLabel] = jsonOf[ServerOrderFieldLabel]
  implicit val ServerOrderFieldLabelEncoder: EntityEncoder[ServerOrderFieldLabel] = jsonEncoderOf[ServerOrderFieldLabel]
}
