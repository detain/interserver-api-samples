//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'home_services_licenses_links.g.dart';

/// Map of license service IDs to their IP addresses for the account dashboard.
///
/// Properties:
/// * [n386522] - Link to a license.
@BuiltValue()
abstract class HomeServicesLicensesLinks implements Built<HomeServicesLicensesLinks, HomeServicesLicensesLinksBuilder> {
  /// Link to a license.
  @BuiltValueField(wireName: r'386522')
  String? get n386522;

  HomeServicesLicensesLinks._();

  factory HomeServicesLicensesLinks([void updates(HomeServicesLicensesLinksBuilder b)]) = _$HomeServicesLicensesLinks;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(HomeServicesLicensesLinksBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<HomeServicesLicensesLinks> get serializer => _$HomeServicesLicensesLinksSerializer();
}

class _$HomeServicesLicensesLinksSerializer implements PrimitiveSerializer<HomeServicesLicensesLinks> {
  @override
  final Iterable<Type> types = const [HomeServicesLicensesLinks, _$HomeServicesLicensesLinks];

  @override
  final String wireName = r'HomeServicesLicensesLinks';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    HomeServicesLicensesLinks object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.n386522 != null) {
      yield r'386522';
      yield serializers.serialize(
        object.n386522,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    HomeServicesLicensesLinks object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required HomeServicesLicensesLinksBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'386522':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.n386522 = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  HomeServicesLicensesLinks deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = HomeServicesLicensesLinksBuilder();
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

