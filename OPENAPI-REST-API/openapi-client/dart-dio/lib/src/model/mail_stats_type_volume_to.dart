//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'mail_stats_type_volume_to.g.dart';

/// MailStatsTypeVolumeTo
///
/// Properties:
/// * [clientAtDomainPeriodCom] 
/// * [userAtSitePeriodNet] 
/// * [salesAtCompanyPeriodCom] 
/// * [clientAtAnothersitePeriodCom] 
@BuiltValue()
abstract class MailStatsTypeVolumeTo implements Built<MailStatsTypeVolumeTo, MailStatsTypeVolumeToBuilder> {
  @BuiltValueField(wireName: r'client@domain.com')
  int? get clientAtDomainPeriodCom;

  @BuiltValueField(wireName: r'user@site.net')
  int? get userAtSitePeriodNet;

  @BuiltValueField(wireName: r'sales@company.com')
  int? get salesAtCompanyPeriodCom;

  @BuiltValueField(wireName: r'client@anothersite.com')
  int? get clientAtAnothersitePeriodCom;

  MailStatsTypeVolumeTo._();

  factory MailStatsTypeVolumeTo([void updates(MailStatsTypeVolumeToBuilder b)]) = _$MailStatsTypeVolumeTo;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(MailStatsTypeVolumeToBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<MailStatsTypeVolumeTo> get serializer => _$MailStatsTypeVolumeToSerializer();
}

class _$MailStatsTypeVolumeToSerializer implements PrimitiveSerializer<MailStatsTypeVolumeTo> {
  @override
  final Iterable<Type> types = const [MailStatsTypeVolumeTo, _$MailStatsTypeVolumeTo];

  @override
  final String wireName = r'MailStatsTypeVolumeTo';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    MailStatsTypeVolumeTo object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.clientAtDomainPeriodCom != null) {
      yield r'client@domain.com';
      yield serializers.serialize(
        object.clientAtDomainPeriodCom,
        specifiedType: const FullType(int),
      );
    }
    if (object.userAtSitePeriodNet != null) {
      yield r'user@site.net';
      yield serializers.serialize(
        object.userAtSitePeriodNet,
        specifiedType: const FullType(int),
      );
    }
    if (object.salesAtCompanyPeriodCom != null) {
      yield r'sales@company.com';
      yield serializers.serialize(
        object.salesAtCompanyPeriodCom,
        specifiedType: const FullType(int),
      );
    }
    if (object.clientAtAnothersitePeriodCom != null) {
      yield r'client@anothersite.com';
      yield serializers.serialize(
        object.clientAtAnothersitePeriodCom,
        specifiedType: const FullType(int),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    MailStatsTypeVolumeTo object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required MailStatsTypeVolumeToBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'client@domain.com':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.clientAtDomainPeriodCom = valueDes;
          break;
        case r'user@site.net':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.userAtSitePeriodNet = valueDes;
          break;
        case r'sales@company.com':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.salesAtCompanyPeriodCom = valueDes;
          break;
        case r'client@anothersite.com':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.clientAtAnothersitePeriodCom = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  MailStatsTypeVolumeTo deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = MailStatsTypeVolumeToBuilder();
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

