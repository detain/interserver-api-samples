//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'region.g.dart';

/// A datacenter region where a server can be provisioned.
///
/// Properties:
/// * [regionId] 
/// * [regionName] 
@BuiltValue()
abstract class Region implements Built<Region, RegionBuilder> {
  @BuiltValueField(wireName: r'region_id')
  int? get regionId;

  @BuiltValueField(wireName: r'region_name')
  String? get regionName;

  Region._();

  factory Region([void updates(RegionBuilder b)]) = _$Region;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(RegionBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<Region> get serializer => _$RegionSerializer();
}

class _$RegionSerializer implements PrimitiveSerializer<Region> {
  @override
  final Iterable<Type> types = const [Region, _$Region];

  @override
  final String wireName = r'Region';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    Region object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.regionId != null) {
      yield r'region_id';
      yield serializers.serialize(
        object.regionId,
        specifiedType: const FullType(int),
      );
    }
    if (object.regionName != null) {
      yield r'region_name';
      yield serializers.serialize(
        object.regionName,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    Region object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required RegionBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'region_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.regionId = valueDes;
          break;
        case r'region_name':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.regionName = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  Region deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = RegionBuilder();
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

