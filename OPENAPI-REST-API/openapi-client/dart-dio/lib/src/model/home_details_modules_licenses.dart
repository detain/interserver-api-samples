//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'home_details_modules_licenses.g.dart';

/// Dashboard module configuration for software license services.
///
/// Properties:
/// * [icon] - The icon for licenses.
/// * [viewLink] - Link to view license.
/// * [heading] - Heading for licenses.
/// * [buyLink] - Link to order license.
/// * [listLink] - Link to view licenses list.
@BuiltValue()
abstract class HomeDetailsModulesLicenses implements Built<HomeDetailsModulesLicenses, HomeDetailsModulesLicensesBuilder> {
  /// The icon for licenses.
  @BuiltValueField(wireName: r'icon')
  String? get icon;

  /// Link to view license.
  @BuiltValueField(wireName: r'view_link')
  String? get viewLink;

  /// Heading for licenses.
  @BuiltValueField(wireName: r'heading')
  String? get heading;

  /// Link to order license.
  @BuiltValueField(wireName: r'buy_link')
  String? get buyLink;

  /// Link to view licenses list.
  @BuiltValueField(wireName: r'list_link')
  String? get listLink;

  HomeDetailsModulesLicenses._();

  factory HomeDetailsModulesLicenses([void updates(HomeDetailsModulesLicensesBuilder b)]) = _$HomeDetailsModulesLicenses;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(HomeDetailsModulesLicensesBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<HomeDetailsModulesLicenses> get serializer => _$HomeDetailsModulesLicensesSerializer();
}

class _$HomeDetailsModulesLicensesSerializer implements PrimitiveSerializer<HomeDetailsModulesLicenses> {
  @override
  final Iterable<Type> types = const [HomeDetailsModulesLicenses, _$HomeDetailsModulesLicenses];

  @override
  final String wireName = r'HomeDetailsModulesLicenses';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    HomeDetailsModulesLicenses object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.icon != null) {
      yield r'icon';
      yield serializers.serialize(
        object.icon,
        specifiedType: const FullType(String),
      );
    }
    if (object.viewLink != null) {
      yield r'view_link';
      yield serializers.serialize(
        object.viewLink,
        specifiedType: const FullType(String),
      );
    }
    if (object.heading != null) {
      yield r'heading';
      yield serializers.serialize(
        object.heading,
        specifiedType: const FullType(String),
      );
    }
    if (object.buyLink != null) {
      yield r'buy_link';
      yield serializers.serialize(
        object.buyLink,
        specifiedType: const FullType(String),
      );
    }
    if (object.listLink != null) {
      yield r'list_link';
      yield serializers.serialize(
        object.listLink,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    HomeDetailsModulesLicenses object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required HomeDetailsModulesLicensesBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'icon':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.icon = valueDes;
          break;
        case r'view_link':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.viewLink = valueDes;
          break;
        case r'heading':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.heading = valueDes;
          break;
        case r'buy_link':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.buyLink = valueDes;
          break;
        case r'list_link':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.listLink = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  HomeDetailsModulesLicenses deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = HomeDetailsModulesLicensesBuilder();
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

