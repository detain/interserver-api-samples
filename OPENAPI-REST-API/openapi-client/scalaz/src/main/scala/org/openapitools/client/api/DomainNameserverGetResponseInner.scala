package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import DomainNameserverGetResponseInner._

case class DomainNameserverGetResponseInner (
  name: String,
ipaddress: String,
/* Whether the registrar allows deletion of this nameserver entry. */
  can_delete: CanDelete)

object DomainNameserverGetResponseInner {
  import DateTimeCodecs._
  sealed trait CanDelete
  case object `0` extends CanDelete
  case object `1` extends CanDelete

  object CanDelete {
    def toCanDelete(s: String): Option[CanDelete] = s match {
      case "`0`" => Some(`0`)
      case "`1`" => Some(`1`)
      case _ => None
    }

    def fromCanDelete(x: CanDelete): String = x match {
      case `0` => "`0`"
      case `1` => "`1`"
    }
  }

  implicit val CanDeleteEnumEncoder: EncodeJson[CanDelete] =
    EncodeJson[CanDelete](is => StringEncodeJson(CanDelete.fromCanDelete(is)))

  implicit val CanDeleteEnumDecoder: DecodeJson[CanDelete] =
    DecodeJson.optionDecoder[CanDelete](n => n.string.flatMap(jStr => CanDelete.toCanDelete(jStr)), "CanDelete failed to de-serialize")

  implicit val DomainNameserverGetResponseInnerCodecJson: CodecJson[DomainNameserverGetResponseInner] = CodecJson.derive[DomainNameserverGetResponseInner]
  implicit val DomainNameserverGetResponseInnerDecoder: EntityDecoder[DomainNameserverGetResponseInner] = jsonOf[DomainNameserverGetResponseInner]
  implicit val DomainNameserverGetResponseInnerEncoder: EntityEncoder[DomainNameserverGetResponseInner] = jsonEncoderOf[DomainNameserverGetResponseInner]
}
