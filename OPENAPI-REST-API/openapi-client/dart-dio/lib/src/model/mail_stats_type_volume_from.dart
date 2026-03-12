//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'mail_stats_type_volume_from.g.dart';

/// MailStatsTypeVolumeFrom
///
/// Properties:
/// * [billingAtSomedomainPeriodCom] 
/// * [salesAtSomedomainPeriodCom] 
@BuiltValue()
abstract class MailStatsTypeVolumeFrom implements Built<MailStatsTypeVolumeFrom, MailStatsTypeVolumeFromBuilder> {
  @BuiltValueField(wireName: r'billing@somedomain.com')
  int? get billingAtSomedomainPeriodCom;

  @BuiltValueField(wireName: r'sales@somedomain.com')
  int? get salesAtSomedomainPeriodCom;

  MailStatsTypeVolumeFrom._();

  factory MailStatsTypeVolumeFrom([void updates(MailStatsTypeVolumeFromBuilder b)]) = _$MailStatsTypeVolumeFrom;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(MailStatsTypeVolumeFromBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<MailStatsTypeVolumeFrom> get serializer => _$MailStatsTypeVolumeFromSerializer();
}

class _$MailStatsTypeVolumeFromSerializer implements PrimitiveSerializer<MailStatsTypeVolumeFrom> {
  @override
  final Iterable<Type> types = const [MailStatsTypeVolumeFrom, _$MailStatsTypeVolumeFrom];

  @override
  final String wireName = r'MailStatsTypeVolumeFrom';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    MailStatsTypeVolumeFrom object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.billingAtSomedomainPeriodCom != null) {
      yield r'billing@somedomain.com';
      yield serializers.serialize(
        object.billingAtSomedomainPeriodCom,
        specifiedType: const FullType(int),
      );
    }
    if (object.salesAtSomedomainPeriodCom != null) {
      yield r'sales@somedomain.com';
      yield serializers.serialize(
        object.salesAtSomedomainPeriodCom,
        specifiedType: const FullType(int),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    MailStatsTypeVolumeFrom object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required MailStatsTypeVolumeFromBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'billing@somedomain.com':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.billingAtSomedomainPeriodCom = valueDes;
          break;
        case r'sales@somedomain.com':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.salesAtSomedomainPeriodCom = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  MailStatsTypeVolumeFrom deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = MailStatsTypeVolumeFromBuilder();
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

