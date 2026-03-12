//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'dart:core';
import 'package:built_value/json_object.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';
import 'package:one_of/one_of.dart';

part 'asset_server_cpu_inner.g.dart';

/// AssetServerCPUInner
@BuiltValue()
abstract class AssetServerCPUInner implements Built<AssetServerCPUInner, AssetServerCPUInnerBuilder> {
  /// One Of [JsonObject], [String]
  OneOf get oneOf;

  AssetServerCPUInner._();

  factory AssetServerCPUInner([void updates(AssetServerCPUInnerBuilder b)]) = _$AssetServerCPUInner;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(AssetServerCPUInnerBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<AssetServerCPUInner> get serializer => _$AssetServerCPUInnerSerializer();
}

class _$AssetServerCPUInnerSerializer implements PrimitiveSerializer<AssetServerCPUInner> {
  @override
  final Iterable<Type> types = const [AssetServerCPUInner, _$AssetServerCPUInner];

  @override
  final String wireName = r'AssetServerCPUInner';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    AssetServerCPUInner object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
  }

  @override
  Object serialize(
    Serializers serializers,
    AssetServerCPUInner object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final oneOf = object.oneOf;
    return serializers.serialize(oneOf.value, specifiedType: FullType(oneOf.valueType))!;
  }

  @override
  AssetServerCPUInner deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = AssetServerCPUInnerBuilder();
    Object? oneOfDataSrc;
    final targetType = const FullType(OneOf, [FullType(String), FullType(JsonObject), ]);
    oneOfDataSrc = serialized;
    result.oneOf = serializers.deserialize(oneOfDataSrc, specifiedType: targetType) as OneOf;
    return result.build();
  }
}

