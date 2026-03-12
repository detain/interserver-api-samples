//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'config_ids.g.dart';

/// Internal configuration IDs mapped from the selected form values for a server order.
///
/// Properties:
/// * [memory] - Configuration ID for the selected memory option.
/// * [hd] - Configuration ID for the selected hard drive option.
/// * [bandwidth] - Configuration ID for the selected bandwidth option.
/// * [ips] - Configuration ID for the selected IP block option.
/// * [os] - Configuration ID for the selected operating system.
/// * [cp] - Configuration ID for the selected control panel.
/// * [raid] - Configuration ID for the selected RAID option.
@BuiltValue()
abstract class ConfigIds implements Built<ConfigIds, ConfigIdsBuilder> {
  /// Configuration ID for the selected memory option.
  @BuiltValueField(wireName: r'memory')
  int? get memory;

  /// Configuration ID for the selected hard drive option.
  @BuiltValueField(wireName: r'hd')
  int? get hd;

  /// Configuration ID for the selected bandwidth option.
  @BuiltValueField(wireName: r'bandwidth')
  int? get bandwidth;

  /// Configuration ID for the selected IP block option.
  @BuiltValueField(wireName: r'ips')
  int? get ips;

  /// Configuration ID for the selected operating system.
  @BuiltValueField(wireName: r'os')
  int? get os;

  /// Configuration ID for the selected control panel.
  @BuiltValueField(wireName: r'cp')
  int? get cp;

  /// Configuration ID for the selected RAID option.
  @BuiltValueField(wireName: r'raid')
  int? get raid;

  ConfigIds._();

  factory ConfigIds([void updates(ConfigIdsBuilder b)]) = _$ConfigIds;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ConfigIdsBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ConfigIds> get serializer => _$ConfigIdsSerializer();
}

class _$ConfigIdsSerializer implements PrimitiveSerializer<ConfigIds> {
  @override
  final Iterable<Type> types = const [ConfigIds, _$ConfigIds];

  @override
  final String wireName = r'ConfigIds';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ConfigIds object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.memory != null) {
      yield r'memory';
      yield serializers.serialize(
        object.memory,
        specifiedType: const FullType(int),
      );
    }
    if (object.hd != null) {
      yield r'hd';
      yield serializers.serialize(
        object.hd,
        specifiedType: const FullType(int),
      );
    }
    if (object.bandwidth != null) {
      yield r'bandwidth';
      yield serializers.serialize(
        object.bandwidth,
        specifiedType: const FullType(int),
      );
    }
    if (object.ips != null) {
      yield r'ips';
      yield serializers.serialize(
        object.ips,
        specifiedType: const FullType(int),
      );
    }
    if (object.os != null) {
      yield r'os';
      yield serializers.serialize(
        object.os,
        specifiedType: const FullType(int),
      );
    }
    if (object.cp != null) {
      yield r'cp';
      yield serializers.serialize(
        object.cp,
        specifiedType: const FullType(int),
      );
    }
    if (object.raid != null) {
      yield r'raid';
      yield serializers.serialize(
        object.raid,
        specifiedType: const FullType(int),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    ConfigIds object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ConfigIdsBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'memory':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.memory = valueDes;
          break;
        case r'hd':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.hd = valueDes;
          break;
        case r'bandwidth':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.bandwidth = valueDes;
          break;
        case r'ips':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.ips = valueDes;
          break;
        case r'os':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.os = valueDes;
          break;
        case r'cp':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.cp = valueDes;
          break;
        case r'raid':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.raid = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  ConfigIds deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ConfigIdsBuilder();
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

