//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/mail_stats_type_volume_to.dart';
import 'package:openapi/src/model/mail_stats_type_volume_ip.dart';
import 'package:openapi/src/model/mail_stats_type_volume_from.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'mail_stats_type_volume.g.dart';

/// MailStatsTypeVolume
///
/// Properties:
/// * [to] 
/// * [from] 
/// * [ip] 
@BuiltValue()
abstract class MailStatsTypeVolume implements Built<MailStatsTypeVolume, MailStatsTypeVolumeBuilder> {
  @BuiltValueField(wireName: r'to')
  MailStatsTypeVolumeTo? get to;

  @BuiltValueField(wireName: r'from')
  MailStatsTypeVolumeFrom? get from;

  @BuiltValueField(wireName: r'ip')
  MailStatsTypeVolumeIp? get ip;

  MailStatsTypeVolume._();

  factory MailStatsTypeVolume([void updates(MailStatsTypeVolumeBuilder b)]) = _$MailStatsTypeVolume;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(MailStatsTypeVolumeBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<MailStatsTypeVolume> get serializer => _$MailStatsTypeVolumeSerializer();
}

class _$MailStatsTypeVolumeSerializer implements PrimitiveSerializer<MailStatsTypeVolume> {
  @override
  final Iterable<Type> types = const [MailStatsTypeVolume, _$MailStatsTypeVolume];

  @override
  final String wireName = r'MailStatsTypeVolume';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    MailStatsTypeVolume object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.to != null) {
      yield r'to';
      yield serializers.serialize(
        object.to,
        specifiedType: const FullType(MailStatsTypeVolumeTo),
      );
    }
    if (object.from != null) {
      yield r'from';
      yield serializers.serialize(
        object.from,
        specifiedType: const FullType(MailStatsTypeVolumeFrom),
      );
    }
    if (object.ip != null) {
      yield r'ip';
      yield serializers.serialize(
        object.ip,
        specifiedType: const FullType(MailStatsTypeVolumeIp),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    MailStatsTypeVolume object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required MailStatsTypeVolumeBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'to':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(MailStatsTypeVolumeTo),
          ) as MailStatsTypeVolumeTo;
          result.to.replace(valueDes);
          break;
        case r'from':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(MailStatsTypeVolumeFrom),
          ) as MailStatsTypeVolumeFrom;
          result.from.replace(valueDes);
          break;
        case r'ip':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(MailStatsTypeVolumeIp),
          ) as MailStatsTypeVolumeIp;
          result.ip.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  MailStatsTypeVolume deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = MailStatsTypeVolumeBuilder();
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

