//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'vps_plesk_license.g.dart';

/// VpsPleskLicense
///
/// Properties:
/// * [id] 
/// * [name] 
/// * [subName] 
/// * [cost] 
@BuiltValue()
abstract class VpsPleskLicense implements Built<VpsPleskLicense, VpsPleskLicenseBuilder> {
  @BuiltValueField(wireName: r'id')
  int? get id;

  @BuiltValueField(wireName: r'name')
  String? get name;

  @BuiltValueField(wireName: r'sub_name')
  String? get subName;

  @BuiltValueField(wireName: r'cost')
  int? get cost;

  VpsPleskLicense._();

  factory VpsPleskLicense([void updates(VpsPleskLicenseBuilder b)]) = _$VpsPleskLicense;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(VpsPleskLicenseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<VpsPleskLicense> get serializer => _$VpsPleskLicenseSerializer();
}

class _$VpsPleskLicenseSerializer implements PrimitiveSerializer<VpsPleskLicense> {
  @override
  final Iterable<Type> types = const [VpsPleskLicense, _$VpsPleskLicense];

  @override
  final String wireName = r'VpsPleskLicense';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    VpsPleskLicense object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.id != null) {
      yield r'id';
      yield serializers.serialize(
        object.id,
        specifiedType: const FullType(int),
      );
    }
    if (object.name != null) {
      yield r'name';
      yield serializers.serialize(
        object.name,
        specifiedType: const FullType(String),
      );
    }
    if (object.subName != null) {
      yield r'sub_name';
      yield serializers.serialize(
        object.subName,
        specifiedType: const FullType(String),
      );
    }
    if (object.cost != null) {
      yield r'cost';
      yield serializers.serialize(
        object.cost,
        specifiedType: const FullType(int),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    VpsPleskLicense object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required VpsPleskLicenseBuilder result,
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
        case r'name':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.name = valueDes;
          break;
        case r'sub_name':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.subName = valueDes;
          break;
        case r'cost':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.cost = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  VpsPleskLicense deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = VpsPleskLicenseBuilder();
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

