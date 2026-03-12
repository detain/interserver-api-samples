//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/server_network_info_assets.dart';
import 'package:openapi/src/model/server_network_info_switchports.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'server_network_info.g.dart';

/// ServerNetworkInfo
///
/// Properties:
/// * [vlans] - List of VLANs.
/// * [vlans6] - List of IPv6 VLANs.
/// * [assets] 
/// * [switchports] 
@BuiltValue()
abstract class ServerNetworkInfo implements Built<ServerNetworkInfo, ServerNetworkInfoBuilder> {
  /// List of VLANs.
  @BuiltValueField(wireName: r'vlans')
  BuiltList<String> get vlans;

  /// List of IPv6 VLANs.
  @BuiltValueField(wireName: r'vlans6')
  BuiltList<String> get vlans6;

  @BuiltValueField(wireName: r'assets')
  ServerNetworkInfoAssets get assets;

  @BuiltValueField(wireName: r'switchports')
  ServerNetworkInfoSwitchports get switchports;

  ServerNetworkInfo._();

  factory ServerNetworkInfo([void updates(ServerNetworkInfoBuilder b)]) = _$ServerNetworkInfo;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ServerNetworkInfoBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ServerNetworkInfo> get serializer => _$ServerNetworkInfoSerializer();
}

class _$ServerNetworkInfoSerializer implements PrimitiveSerializer<ServerNetworkInfo> {
  @override
  final Iterable<Type> types = const [ServerNetworkInfo, _$ServerNetworkInfo];

  @override
  final String wireName = r'ServerNetworkInfo';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ServerNetworkInfo object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'vlans';
    yield serializers.serialize(
      object.vlans,
      specifiedType: const FullType(BuiltList, [FullType(String)]),
    );
    yield r'vlans6';
    yield serializers.serialize(
      object.vlans6,
      specifiedType: const FullType(BuiltList, [FullType(String)]),
    );
    yield r'assets';
    yield serializers.serialize(
      object.assets,
      specifiedType: const FullType(ServerNetworkInfoAssets),
    );
    yield r'switchports';
    yield serializers.serialize(
      object.switchports,
      specifiedType: const FullType(ServerNetworkInfoSwitchports),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    ServerNetworkInfo object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ServerNetworkInfoBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'vlans':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(String)]),
          ) as BuiltList<String>;
          result.vlans.replace(valueDes);
          break;
        case r'vlans6':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(String)]),
          ) as BuiltList<String>;
          result.vlans6.replace(valueDes);
          break;
        case r'assets':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(ServerNetworkInfoAssets),
          ) as ServerNetworkInfoAssets;
          result.assets.replace(valueDes);
          break;
        case r'switchports':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(ServerNetworkInfoSwitchports),
          ) as ServerNetworkInfoSwitchports;
          result.switchports.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  ServerNetworkInfo deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ServerNetworkInfoBuilder();
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

