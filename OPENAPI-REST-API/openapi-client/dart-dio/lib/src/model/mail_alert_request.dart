//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'mail_alert_request.g.dart';

/// Payload for creating a mail alert.
///
/// Properties:
/// * [type] - Alert type identifier.
/// * [value] - Alert value or threshold.
/// * [to] - Email address to notify.
/// * [enabled] - Whether the alert is enabled.
@BuiltValue()
abstract class MailAlertRequest implements Built<MailAlertRequest, MailAlertRequestBuilder> {
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

  MailAlertRequest._();

  factory MailAlertRequest([void updates(MailAlertRequestBuilder b)]) = _$MailAlertRequest;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(MailAlertRequestBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<MailAlertRequest> get serializer => _$MailAlertRequestSerializer();
}

class _$MailAlertRequestSerializer implements PrimitiveSerializer<MailAlertRequest> {
  @override
  final Iterable<Type> types = const [MailAlertRequest, _$MailAlertRequest];

  @override
  final String wireName = r'MailAlertRequest';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    MailAlertRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
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
    MailAlertRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required MailAlertRequestBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
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
  MailAlertRequest deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = MailAlertRequestBuilder();
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

