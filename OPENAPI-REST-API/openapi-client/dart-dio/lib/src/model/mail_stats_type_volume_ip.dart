//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'mail_stats_type_volume_ip.g.dart';

/// MailStatsTypeVolumeIp
///
/// Properties:
/// * [n1period1Period1Period1] 
/// * [n2period2Period2Period2] 
/// * [n3period3Period3Period3] 
/// * [n4period4Period4Period4] 
@BuiltValue()
abstract class MailStatsTypeVolumeIp implements Built<MailStatsTypeVolumeIp, MailStatsTypeVolumeIpBuilder> {
  @BuiltValueField(wireName: r'1.1.1.1')
  int? get n1period1Period1Period1;

  @BuiltValueField(wireName: r'2.2.2.2')
  int? get n2period2Period2Period2;

  @BuiltValueField(wireName: r'3.3.3.3')
  int? get n3period3Period3Period3;

  @BuiltValueField(wireName: r'4.4.4.4')
  int? get n4period4Period4Period4;

  MailStatsTypeVolumeIp._();

  factory MailStatsTypeVolumeIp([void updates(MailStatsTypeVolumeIpBuilder b)]) = _$MailStatsTypeVolumeIp;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(MailStatsTypeVolumeIpBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<MailStatsTypeVolumeIp> get serializer => _$MailStatsTypeVolumeIpSerializer();
}

class _$MailStatsTypeVolumeIpSerializer implements PrimitiveSerializer<MailStatsTypeVolumeIp> {
  @override
  final Iterable<Type> types = const [MailStatsTypeVolumeIp, _$MailStatsTypeVolumeIp];

  @override
  final String wireName = r'MailStatsTypeVolumeIp';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    MailStatsTypeVolumeIp object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.n1period1Period1Period1 != null) {
      yield r'1.1.1.1';
      yield serializers.serialize(
        object.n1period1Period1Period1,
        specifiedType: const FullType(int),
      );
    }
    if (object.n2period2Period2Period2 != null) {
      yield r'2.2.2.2';
      yield serializers.serialize(
        object.n2period2Period2Period2,
        specifiedType: const FullType(int),
      );
    }
    if (object.n3period3Period3Period3 != null) {
      yield r'3.3.3.3';
      yield serializers.serialize(
        object.n3period3Period3Period3,
        specifiedType: const FullType(int),
      );
    }
    if (object.n4period4Period4Period4 != null) {
      yield r'4.4.4.4';
      yield serializers.serialize(
        object.n4period4Period4Period4,
        specifiedType: const FullType(int),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    MailStatsTypeVolumeIp object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required MailStatsTypeVolumeIpBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'1.1.1.1':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.n1period1Period1Period1 = valueDes;
          break;
        case r'2.2.2.2':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.n2period2Period2Period2 = valueDes;
          break;
        case r'3.3.3.3':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.n3period3Period3Period3 = valueDes;
          break;
        case r'4.4.4.4':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.n4period4Period4Period4 = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  MailStatsTypeVolumeIp deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = MailStatsTypeVolumeIpBuilder();
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

