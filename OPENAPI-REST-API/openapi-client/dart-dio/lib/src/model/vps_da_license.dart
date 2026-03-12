//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'vps_da_license.g.dart';

/// A DirectAdmin license tier option.
///
/// Properties:
/// * [name] - License tier name.
/// * [subName] - License tier sub-name.
/// * [cost] - Monthly cost in cents.
/// * [imgDisabled] - Image path for the disabled state icon.
/// * [imgActive] - Image path for the active state icon.
@BuiltValue()
abstract class VpsDALicense implements Built<VpsDALicense, VpsDALicenseBuilder> {
  /// License tier name.
  @BuiltValueField(wireName: r'name')
  String? get name;

  /// License tier sub-name.
  @BuiltValueField(wireName: r'sub_name')
  String? get subName;

  /// Monthly cost in cents.
  @BuiltValueField(wireName: r'cost')
  int? get cost;

  /// Image path for the disabled state icon.
  @BuiltValueField(wireName: r'img_disabled')
  String? get imgDisabled;

  /// Image path for the active state icon.
  @BuiltValueField(wireName: r'img_active')
  String? get imgActive;

  VpsDALicense._();

  factory VpsDALicense([void updates(VpsDALicenseBuilder b)]) = _$VpsDALicense;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(VpsDALicenseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<VpsDALicense> get serializer => _$VpsDALicenseSerializer();
}

class _$VpsDALicenseSerializer implements PrimitiveSerializer<VpsDALicense> {
  @override
  final Iterable<Type> types = const [VpsDALicense, _$VpsDALicense];

  @override
  final String wireName = r'VpsDALicense';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    VpsDALicense object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
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
    if (object.imgDisabled != null) {
      yield r'img_disabled';
      yield serializers.serialize(
        object.imgDisabled,
        specifiedType: const FullType(String),
      );
    }
    if (object.imgActive != null) {
      yield r'img_active';
      yield serializers.serialize(
        object.imgActive,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    VpsDALicense object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required VpsDALicenseBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
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
        case r'img_disabled':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.imgDisabled = valueDes;
          break;
        case r'img_active':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.imgActive = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  VpsDALicense deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = VpsDALicenseBuilder();
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

