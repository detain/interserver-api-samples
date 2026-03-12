//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/server_order_field_label.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'server_order_field_labels.g.dart';

/// Field labels for the server order.
///
/// Properties:
/// * [bandwidth] - Bandwidth field label.
/// * [ips] - IPs field label.
/// * [os] - Operating System field label.
/// * [cp] - Control Panel field label.
/// * [raid] - RAID field label.
/// * [memory] - Memory field label.
/// * [hd] - Hard Drives field label
@BuiltValue()
abstract class ServerOrderFieldLabels implements Built<ServerOrderFieldLabels, ServerOrderFieldLabelsBuilder> {
  /// Bandwidth field label.
  @BuiltValueField(wireName: r'bandwidth')
  ServerOrderFieldLabel? get bandwidth;

  /// IPs field label.
  @BuiltValueField(wireName: r'ips')
  ServerOrderFieldLabel? get ips;

  /// Operating System field label.
  @BuiltValueField(wireName: r'os')
  ServerOrderFieldLabel? get os;

  /// Control Panel field label.
  @BuiltValueField(wireName: r'cp')
  ServerOrderFieldLabel? get cp;

  /// RAID field label.
  @BuiltValueField(wireName: r'raid')
  ServerOrderFieldLabel? get raid;

  /// Memory field label.
  @BuiltValueField(wireName: r'memory')
  ServerOrderFieldLabel? get memory;

  /// Hard Drives field label
  @BuiltValueField(wireName: r'hd')
  ServerOrderFieldLabel? get hd;

  ServerOrderFieldLabels._();

  factory ServerOrderFieldLabels([void updates(ServerOrderFieldLabelsBuilder b)]) = _$ServerOrderFieldLabels;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ServerOrderFieldLabelsBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ServerOrderFieldLabels> get serializer => _$ServerOrderFieldLabelsSerializer();
}

class _$ServerOrderFieldLabelsSerializer implements PrimitiveSerializer<ServerOrderFieldLabels> {
  @override
  final Iterable<Type> types = const [ServerOrderFieldLabels, _$ServerOrderFieldLabels];

  @override
  final String wireName = r'ServerOrderFieldLabels';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ServerOrderFieldLabels object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.bandwidth != null) {
      yield r'bandwidth';
      yield serializers.serialize(
        object.bandwidth,
        specifiedType: const FullType(ServerOrderFieldLabel),
      );
    }
    if (object.ips != null) {
      yield r'ips';
      yield serializers.serialize(
        object.ips,
        specifiedType: const FullType(ServerOrderFieldLabel),
      );
    }
    if (object.os != null) {
      yield r'os';
      yield serializers.serialize(
        object.os,
        specifiedType: const FullType(ServerOrderFieldLabel),
      );
    }
    if (object.cp != null) {
      yield r'cp';
      yield serializers.serialize(
        object.cp,
        specifiedType: const FullType(ServerOrderFieldLabel),
      );
    }
    if (object.raid != null) {
      yield r'raid';
      yield serializers.serialize(
        object.raid,
        specifiedType: const FullType(ServerOrderFieldLabel),
      );
    }
    if (object.memory != null) {
      yield r'memory';
      yield serializers.serialize(
        object.memory,
        specifiedType: const FullType(ServerOrderFieldLabel),
      );
    }
    if (object.hd != null) {
      yield r'hd';
      yield serializers.serialize(
        object.hd,
        specifiedType: const FullType(ServerOrderFieldLabel),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    ServerOrderFieldLabels object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ServerOrderFieldLabelsBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'bandwidth':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(ServerOrderFieldLabel),
          ) as ServerOrderFieldLabel;
          result.bandwidth.replace(valueDes);
          break;
        case r'ips':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(ServerOrderFieldLabel),
          ) as ServerOrderFieldLabel;
          result.ips.replace(valueDes);
          break;
        case r'os':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(ServerOrderFieldLabel),
          ) as ServerOrderFieldLabel;
          result.os.replace(valueDes);
          break;
        case r'cp':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(ServerOrderFieldLabel),
          ) as ServerOrderFieldLabel;
          result.cp.replace(valueDes);
          break;
        case r'raid':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(ServerOrderFieldLabel),
          ) as ServerOrderFieldLabel;
          result.raid.replace(valueDes);
          break;
        case r'memory':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(ServerOrderFieldLabel),
          ) as ServerOrderFieldLabel;
          result.memory.replace(valueDes);
          break;
        case r'hd':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(ServerOrderFieldLabel),
          ) as ServerOrderFieldLabel;
          result.hd.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  ServerOrderFieldLabels deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ServerOrderFieldLabelsBuilder();
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

