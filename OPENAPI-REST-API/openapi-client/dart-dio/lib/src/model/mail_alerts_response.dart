//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/mail_alerts_response_inner.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'mail_alerts_response.g.dart';

/// Alert configuration entries for a mail service.
@BuiltValue()
abstract class MailAlertsResponse implements Built<MailAlertsResponse, MailAlertsResponseBuilder> {
  MailAlertsResponse._();

  factory MailAlertsResponse([void updates(MailAlertsResponseBuilder b)]) = _$MailAlertsResponse;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(MailAlertsResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<MailAlertsResponse> get serializer => _$MailAlertsResponseSerializer();
}

class _$MailAlertsResponseSerializer implements PrimitiveSerializer<MailAlertsResponse> {
  @override
  final Iterable<Type> types = const [MailAlertsResponse, _$MailAlertsResponse];

  @override
  final String wireName = r'MailAlertsResponse';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    MailAlertsResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
  }

  @override
  Object serialize(
    Serializers serializers,
    MailAlertsResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  @override
  MailAlertsResponse deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = MailAlertsResponseBuilder();
    final serializedList = (serialized as Iterable<Object?>).toList();
    return result.build();
  }
}

