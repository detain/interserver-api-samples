//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'server_lease.g.dart';

/// ServerLease
///
/// Properties:
/// * [mac] - MAC address associated with the lease.
/// * [authenticated] - Indicates if the lease is authenticated.
/// * [group] - Group identifier for the lease.
@BuiltValue()
abstract class ServerLease implements Built<ServerLease, ServerLeaseBuilder> {
  /// MAC address associated with the lease.
  @BuiltValueField(wireName: r'mac')
  String get mac;

  /// Indicates if the lease is authenticated.
  @BuiltValueField(wireName: r'authenticated')
  bool get authenticated;

  /// Group identifier for the lease.
  @BuiltValueField(wireName: r'group')
  String get group;

  ServerLease._();

  factory ServerLease([void updates(ServerLeaseBuilder b)]) = _$ServerLease;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ServerLeaseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ServerLease> get serializer => _$ServerLeaseSerializer();
}

class _$ServerLeaseSerializer implements PrimitiveSerializer<ServerLease> {
  @override
  final Iterable<Type> types = const [ServerLease, _$ServerLease];

  @override
  final String wireName = r'ServerLease';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ServerLease object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'mac';
    yield serializers.serialize(
      object.mac,
      specifiedType: const FullType(String),
    );
    yield r'authenticated';
    yield serializers.serialize(
      object.authenticated,
      specifiedType: const FullType(bool),
    );
    yield r'group';
    yield serializers.serialize(
      object.group,
      specifiedType: const FullType(String),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    ServerLease object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ServerLeaseBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'mac':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.mac = valueDes;
          break;
        case r'authenticated':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(bool),
          ) as bool;
          result.authenticated = valueDes;
          break;
        case r'group':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.group = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  ServerLease deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ServerLeaseBuilder();
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

