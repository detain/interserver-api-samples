//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'server_order_form_values.g.dart';

/// Form values for the server order.
///
/// Properties:
/// * [memory] - Memory value for the server order.
/// * [bandwidth] - Bandwidth value for the server order.
/// * [ips] - IPs value for the server order.
/// * [os] - Operating System value for the server order.
/// * [cp] - Control Panel value for the server order.
/// * [raid] - RAID value for the server order.
/// * [hd] - Hard Drives value for the server order.
@BuiltValue()
abstract class ServerOrderFormValues implements Built<ServerOrderFormValues, ServerOrderFormValuesBuilder> {
  /// Memory value for the server order.
  @BuiltValueField(wireName: r'memory')
  int? get memory;

  /// Bandwidth value for the server order.
  @BuiltValueField(wireName: r'bandwidth')
  String? get bandwidth;

  /// IPs value for the server order.
  @BuiltValueField(wireName: r'ips')
  String? get ips;

  /// Operating System value for the server order.
  @BuiltValueField(wireName: r'os')
  String? get os;

  /// Control Panel value for the server order.
  @BuiltValueField(wireName: r'cp')
  int? get cp;

  /// RAID value for the server order.
  @BuiltValueField(wireName: r'raid')
  String? get raid;

  /// Hard Drives value for the server order.
  @BuiltValueField(wireName: r'hd')
  String? get hd;

  ServerOrderFormValues._();

  factory ServerOrderFormValues([void updates(ServerOrderFormValuesBuilder b)]) = _$ServerOrderFormValues;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ServerOrderFormValuesBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ServerOrderFormValues> get serializer => _$ServerOrderFormValuesSerializer();
}

class _$ServerOrderFormValuesSerializer implements PrimitiveSerializer<ServerOrderFormValues> {
  @override
  final Iterable<Type> types = const [ServerOrderFormValues, _$ServerOrderFormValues];

  @override
  final String wireName = r'ServerOrderFormValues';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ServerOrderFormValues object, {
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
        specifiedType: const FullType(String),
      );
    }
    if (object.ips != null) {
      yield r'ips';
      yield serializers.serialize(
        object.ips,
        specifiedType: const FullType(String),
      );
    }
    if (object.os != null) {
      yield r'os';
      yield serializers.serialize(
        object.os,
        specifiedType: const FullType(String),
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
        specifiedType: const FullType(String),
      );
    }
    if (object.hd != null) {
      yield r'hd';
      yield serializers.serialize(
        object.hd,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    ServerOrderFormValues object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ServerOrderFormValuesBuilder result,
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
            specifiedType: const FullType(String),
          ) as String;
          result.bandwidth = valueDes;
          break;
        case r'ips':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ips = valueDes;
          break;
        case r'os':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
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
            specifiedType: const FullType(String),
          ) as String;
          result.raid = valueDes;
          break;
        case r'hd':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.hd = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  ServerOrderFormValues deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ServerOrderFormValuesBuilder();
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

