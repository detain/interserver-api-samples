//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'mail_alerts_response_inner.g.dart';

/// MailAlertsResponseInner
///
/// Properties:
/// * [alertId] 
/// * [alertType] 
/// * [alertValue] 
/// * [alertTo] 
/// * [alertEnabled] 
@BuiltValue()
abstract class MailAlertsResponseInner implements Built<MailAlertsResponseInner, MailAlertsResponseInnerBuilder> {
  @BuiltValueField(wireName: r'alert_id')
  int? get alertId;

  @BuiltValueField(wireName: r'alert_type')
  String? get alertType;

  @BuiltValueField(wireName: r'alert_value')
  String? get alertValue;

  @BuiltValueField(wireName: r'alert_to')
  String? get alertTo;

  @BuiltValueField(wireName: r'alert_enabled')
  String? get alertEnabled;

  MailAlertsResponseInner._();

  factory MailAlertsResponseInner([void updates(MailAlertsResponseInnerBuilder b)]) = _$MailAlertsResponseInner;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(MailAlertsResponseInnerBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<MailAlertsResponseInner> get serializer => _$MailAlertsResponseInnerSerializer();
}

class _$MailAlertsResponseInnerSerializer implements PrimitiveSerializer<MailAlertsResponseInner> {
  @override
  final Iterable<Type> types = const [MailAlertsResponseInner, _$MailAlertsResponseInner];

  @override
  final String wireName = r'MailAlertsResponseInner';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    MailAlertsResponseInner object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.alertId != null) {
      yield r'alert_id';
      yield serializers.serialize(
        object.alertId,
        specifiedType: const FullType(int),
      );
    }
    if (object.alertType != null) {
      yield r'alert_type';
      yield serializers.serialize(
        object.alertType,
        specifiedType: const FullType(String),
      );
    }
    if (object.alertValue != null) {
      yield r'alert_value';
      yield serializers.serialize(
        object.alertValue,
        specifiedType: const FullType(String),
      );
    }
    if (object.alertTo != null) {
      yield r'alert_to';
      yield serializers.serialize(
        object.alertTo,
        specifiedType: const FullType(String),
      );
    }
    if (object.alertEnabled != null) {
      yield r'alert_enabled';
      yield serializers.serialize(
        object.alertEnabled,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    MailAlertsResponseInner object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required MailAlertsResponseInnerBuilder result,
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
        case r'alert_type':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.alertType = valueDes;
          break;
        case r'alert_value':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.alertValue = valueDes;
          break;
        case r'alert_to':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.alertTo = valueDes;
          break;
        case r'alert_enabled':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.alertEnabled = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  MailAlertsResponseInner deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = MailAlertsResponseInnerBuilder();
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

