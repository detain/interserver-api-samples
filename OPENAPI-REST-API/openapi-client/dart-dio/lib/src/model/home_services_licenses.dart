//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/home_services_licenses_links.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'home_services_licenses.g.dart';

/// HomeServicesLicenses
///
/// Properties:
/// * [links] 
/// * [count] - Number of licenses.
@BuiltValue()
abstract class HomeServicesLicenses implements Built<HomeServicesLicenses, HomeServicesLicensesBuilder> {
  @BuiltValueField(wireName: r'links')
  HomeServicesLicensesLinks? get links;

  /// Number of licenses.
  @BuiltValueField(wireName: r'count')
  int? get count;

  HomeServicesLicenses._();

  factory HomeServicesLicenses([void updates(HomeServicesLicensesBuilder b)]) = _$HomeServicesLicenses;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(HomeServicesLicensesBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<HomeServicesLicenses> get serializer => _$HomeServicesLicensesSerializer();
}

class _$HomeServicesLicensesSerializer implements PrimitiveSerializer<HomeServicesLicenses> {
  @override
  final Iterable<Type> types = const [HomeServicesLicenses, _$HomeServicesLicenses];

  @override
  final String wireName = r'HomeServicesLicenses';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    HomeServicesLicenses object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.links != null) {
      yield r'links';
      yield serializers.serialize(
        object.links,
        specifiedType: const FullType(HomeServicesLicensesLinks),
      );
    }
    if (object.count != null) {
      yield r'count';
      yield serializers.serialize(
        object.count,
        specifiedType: const FullType(int),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    HomeServicesLicenses object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required HomeServicesLicensesBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'links':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(HomeServicesLicensesLinks),
          ) as HomeServicesLicensesLinks;
          result.links.replace(valueDes);
          break;
        case r'count':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.count = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  HomeServicesLicenses deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = HomeServicesLicensesBuilder();
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

