//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'form_values.g.dart';

/// Currently selected configuration option IDs for a server order form.
///
/// Properties:
/// * [memory] - Selected memory option ID.
/// * [bandwidth] - Selected bandwidth option ID.
/// * [ips] - Selected IP block option ID.
/// * [os] - Selected operating system option ID.
/// * [cp] - Selected control panel option ID.
/// * [raid] - Selected RAID option ID.
/// * [hd] - Selected hard drive option ID.
/// * [region] - Selected datacenter region ID.
@BuiltValue()
abstract class FormValues implements Built<FormValues, FormValuesBuilder> {
  /// Selected memory option ID.
  @BuiltValueField(wireName: r'memory')
  int? get memory;

  /// Selected bandwidth option ID.
  @BuiltValueField(wireName: r'bandwidth')
  int? get bandwidth;

  /// Selected IP block option ID.
  @BuiltValueField(wireName: r'ips')
  int? get ips;

  /// Selected operating system option ID.
  @BuiltValueField(wireName: r'os')
  int? get os;

  /// Selected control panel option ID.
  @BuiltValueField(wireName: r'cp')
  int? get cp;

  /// Selected RAID option ID.
  @BuiltValueField(wireName: r'raid')
  int? get raid;

  /// Selected hard drive option ID.
  @BuiltValueField(wireName: r'hd')
  int? get hd;

  /// Selected datacenter region ID.
  @BuiltValueField(wireName: r'region')
  int? get region;

  FormValues._();

  factory FormValues([void updates(FormValuesBuilder b)]) = _$FormValues;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(FormValuesBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<FormValues> get serializer => _$FormValuesSerializer();
}

class _$FormValuesSerializer implements PrimitiveSerializer<FormValues> {
  @override
  final Iterable<Type> types = const [FormValues, _$FormValues];

  @override
  final String wireName = r'FormValues';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    FormValues object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.memory != null) {
      yield r'memory';
      yield serializers.serialize(
        object.memory,
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
    if (object.hd != null) {
      yield r'hd';
      yield serializers.serialize(
        object.hd,
        specifiedType: const FullType(int),
      );
    }
    if (object.region != null) {
      yield r'region';
      yield serializers.serialize(
        object.region,
        specifiedType: const FullType(int),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    FormValues object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required FormValuesBuilder result,
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
        case r'hd':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.hd = valueDes;
          break;
        case r'region':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.region = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  FormValues deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = FormValuesBuilder();
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

