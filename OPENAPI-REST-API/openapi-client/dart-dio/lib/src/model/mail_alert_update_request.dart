//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'mail_alert_update_request.g.dart';

/// Payload for updating an existing mail alert.
///
/// Properties:
/// * [alertId] - Alert ID to update.
/// * [type] - Alert type identifier.
/// * [value] - Alert value or threshold.
/// * [to] - Email address to notify.
/// * [enabled] - Whether the alert is enabled.
@BuiltValue()
abstract class MailAlertUpdateRequest implements Built<MailAlertUpdateRequest, MailAlertUpdateRequestBuilder> {
  /// Alert ID to update.
  @BuiltValueField(wireName: r'alert_id')
  int? get alertId;

  /// Alert type identifier.
  @BuiltValueField(wireName: r'type')
  String? get type;

  /// Alert value or threshold.
  @BuiltValueField(wireName: r'value')
  String? get value;

  /// Email address to notify.
  @BuiltValueField(wireName: r'to')
  String? get to;

  /// Whether the alert is enabled.
  @BuiltValueField(wireName: r'enabled')
  String? get enabled;

  MailAlertUpdateRequest._();

  factory MailAlertUpdateRequest([void updates(MailAlertUpdateRequestBuilder b)]) = _$MailAlertUpdateRequest;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(MailAlertUpdateRequestBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<MailAlertUpdateRequest> get serializer => _$MailAlertUpdateRequestSerializer();
}

class _$MailAlertUpdateRequestSerializer implements PrimitiveSerializer<MailAlertUpdateRequest> {
  @override
  final Iterable<Type> types = const [MailAlertUpdateRequest, _$MailAlertUpdateRequest];

  @override
  final String wireName = r'MailAlertUpdateRequest';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    MailAlertUpdateRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.alertId != null) {
      yield r'alert_id';
      yield serializers.serialize(
        object.alertId,
        specifiedType: const FullType(int),
      );
    }
    if (object.type != null) {
      yield r'type';
      yield serializers.serialize(
        object.type,
        specifiedType: const FullType(String),
      );
    }
    if (object.value != null) {
      yield r'value';
      yield serializers.serialize(
        object.value,
        specifiedType: const FullType(String),
      );
    }
    if (object.to != null) {
      yield r'to';
      yield serializers.serialize(
        object.to,
        specifiedType: const FullType(String),
      );
    }
    if (object.enabled != null) {
      yield r'enabled';
      yield serializers.serialize(
        object.enabled,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    MailAlertUpdateRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required MailAlertUpdateRequestBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'alert_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.alertId = valueDes;
          break;
        case r'type':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.type = valueDes;
          break;
        case r'value':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.value = valueDes;
          break;
        case r'to':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.to = valueDes;
          break;
        case r'enabled':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.enabled = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  MailAlertUpdateRequest deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = MailAlertUpdateRequestBuilder();
    final serializedList = (serialized as Iterable<Object?>).toList();
    final unhandled = <Object?>[];
    _deserializeProperties(
      serializers,
      serialized,
      specifiedType: specifiedType,
      serializedList: serializedList,
      unhandled: unhandled,
      result: result,
    );
    return result.build();
  }
}

