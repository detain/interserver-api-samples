//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/server_asset.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'server_network_info_assets.g.dart';

/// Object containing asset information.
///
/// Properties:
/// * [n3497] 
@BuiltValue()
abstract class ServerNetworkInfoAssets implements Built<ServerNetworkInfoAssets, ServerNetworkInfoAssetsBuilder> {
  @BuiltValueField(wireName: r'3497')
  ServerAsset get n3497;

  ServerNetworkInfoAssets._();

  factory ServerNetworkInfoAssets([void updates(ServerNetworkInfoAssetsBuilder b)]) = _$ServerNetworkInfoAssets;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ServerNetworkInfoAssetsBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ServerNetworkInfoAssets> get serializer => _$ServerNetworkInfoAssetsSerializer();
}

class _$ServerNetworkInfoAssetsSerializer implements PrimitiveSerializer<ServerNetworkInfoAssets> {
  @override
  final Iterable<Type> types = const [ServerNetworkInfoAssets, _$ServerNetworkInfoAssets];

  @override
  final String wireName = r'ServerNetworkInfoAssets';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ServerNetworkInfoAssets object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'3497';
    yield serializers.serialize(
      object.n3497,
      specifiedType: const FullType(ServerAsset),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    ServerNetworkInfoAssets object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ServerNetworkInfoAssetsBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'3497':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(ServerAsset),
          ) as ServerAsset;
          result.n3497.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  ServerNetworkInfoAssets deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ServerNetworkInfoAssetsBuilder();
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

