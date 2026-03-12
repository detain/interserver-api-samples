//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/server_switchport.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'server_network_info_switchports.g.dart';

/// Object containing switchport information.
///
/// Properties:
/// * [n10414] 
@BuiltValue()
abstract class ServerNetworkInfoSwitchports implements Built<ServerNetworkInfoSwitchports, ServerNetworkInfoSwitchportsBuilder> {
  @BuiltValueField(wireName: r'10414')
  ServerSwitchport get n10414;

  ServerNetworkInfoSwitchports._();

  factory ServerNetworkInfoSwitchports([void updates(ServerNetworkInfoSwitchportsBuilder b)]) = _$ServerNetworkInfoSwitchports;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ServerNetworkInfoSwitchportsBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ServerNetworkInfoSwitchports> get serializer => _$ServerNetworkInfoSwitchportsSerializer();
}

class _$ServerNetworkInfoSwitchportsSerializer implements PrimitiveSerializer<ServerNetworkInfoSwitchports> {
  @override
  final Iterable<Type> types = const [ServerNetworkInfoSwitchports, _$ServerNetworkInfoSwitchports];

  @override
  final String wireName = r'ServerNetworkInfoSwitchports';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ServerNetworkInfoSwitchports object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'10414';
    yield serializers.serialize(
      object.n10414,
      specifiedType: const FullType(ServerSwitchport),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    ServerNetworkInfoSwitchports object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ServerNetworkInfoSwitchportsBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'10414':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(ServerSwitchport),
          ) as ServerSwitchport;
          result.n10414.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  ServerNetworkInfoSwitchports deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ServerNetworkInfoSwitchportsBuilder();
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

