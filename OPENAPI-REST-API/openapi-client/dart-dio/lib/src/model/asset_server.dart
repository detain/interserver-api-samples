//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/asset_server_cpu_inner.dart';
import 'package:built_collection/built_collection.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'asset_server.g.dart';

/// A pre-configured asset server available for immediate provisioning.
///
/// Properties:
/// * [id] 
/// * [region] 
/// * [price] 
/// * [CPU] 
/// * [memory] 
/// * [bandwidth] 
/// * [iPs] 
/// * [HD] 
@BuiltValue()
abstract class AssetServer implements Built<AssetServer, AssetServerBuilder> {
  @BuiltValueField(wireName: r'id')
  int? get id;

  @BuiltValueField(wireName: r'Region')
  String? get region;

  @BuiltValueField(wireName: r'price')
  String? get price;

  @BuiltValueField(wireName: r'CPU')
  BuiltList<AssetServerCPUInner>? get CPU;

  @BuiltValueField(wireName: r'Memory')
  BuiltList<AssetServerCPUInner>? get memory;

  @BuiltValueField(wireName: r'Bandwidth')
  BuiltList<AssetServerCPUInner>? get bandwidth;

  @BuiltValueField(wireName: r'IPs')
  BuiltList<AssetServerCPUInner>? get iPs;

  @BuiltValueField(wireName: r'HD')
  BuiltMap<String, String>? get HD;

  AssetServer._();

  factory AssetServer([void updates(AssetServerBuilder b)]) = _$AssetServer;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(AssetServerBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<AssetServer> get serializer => _$AssetServerSerializer();
}

class _$AssetServerSerializer implements PrimitiveSerializer<AssetServer> {
  @override
  final Iterable<Type> types = const [AssetServer, _$AssetServer];

  @override
  final String wireName = r'AssetServer';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    AssetServer object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.id != null) {
      yield r'id';
      yield serializers.serialize(
        object.id,
        specifiedType: const FullType(int),
      );
    }
    if (object.region != null) {
      yield r'Region';
      yield serializers.serialize(
        object.region,
        specifiedType: const FullType(String),
      );
    }
    if (object.price != null) {
      yield r'price';
      yield serializers.serialize(
        object.price,
        specifiedType: const FullType(String),
      );
    }
    if (object.CPU != null) {
      yield r'CPU';
      yield serializers.serialize(
        object.CPU,
        specifiedType: const FullType(BuiltList, [FullType(AssetServerCPUInner)]),
      );
    }
    if (object.memory != null) {
      yield r'Memory';
      yield serializers.serialize(
        object.memory,
        specifiedType: const FullType(BuiltList, [FullType(AssetServerCPUInner)]),
      );
    }
    if (object.bandwidth != null) {
      yield r'Bandwidth';
      yield serializers.serialize(
        object.bandwidth,
        specifiedType: const FullType(BuiltList, [FullType(AssetServerCPUInner)]),
      );
    }
    if (object.iPs != null) {
      yield r'IPs';
      yield serializers.serialize(
        object.iPs,
        specifiedType: const FullType(BuiltList, [FullType(AssetServerCPUInner)]),
      );
    }
    if (object.HD != null) {
      yield r'HD';
      yield serializers.serialize(
        object.HD,
        specifiedType: const FullType(BuiltMap, [FullType(String), FullType(String)]),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    AssetServer object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required AssetServerBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.id = valueDes;
          break;
        case r'Region':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.region = valueDes;
          break;
        case r'price':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.price = valueDes;
          break;
        case r'CPU':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(AssetServerCPUInner)]),
          ) as BuiltList<AssetServerCPUInner>;
          result.CPU.replace(valueDes);
          break;
        case r'Memory':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(AssetServerCPUInner)]),
          ) as BuiltList<AssetServerCPUInner>;
          result.memory.replace(valueDes);
          break;
        case r'Bandwidth':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(AssetServerCPUInner)]),
          ) as BuiltList<AssetServerCPUInner>;
          result.bandwidth.replace(valueDes);
          break;
        case r'IPs':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(AssetServerCPUInner)]),
          ) as BuiltList<AssetServerCPUInner>;
          result.iPs.replace(valueDes);
          break;
        case r'HD':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltMap, [FullType(String), FullType(String)]),
          ) as BuiltMap<String, String>;
          result.HD.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  AssetServer deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = AssetServerBuilder();
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

