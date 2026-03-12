//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'websites_order_packages_info.g.dart';

/// WebsitesOrderPackagesInfo
///
/// Properties:
/// * [servicesId] - The ID of the package.
/// * [servicesName] - The name of the package.
/// * [servicesCost] - The cost of the package.
/// * [servicesCategory] - The category of the package.
/// * [servicesBuyable] - Indicates if the package is buyable (1 for yes, 0 for no).
/// * [servicesType] - The type of the package.
/// * [servicesModule] - The module of the package.
/// * [servicesDescription] - Description of the package.
/// * [servicesField1] - Additional field 1 for the package.
/// * [servicesField2] - Additional field 2 for the package.
/// * [servicesHtml] - HTML content for the package.
/// * [servicesMoreinfoUrl] - URL for more information about the package.
/// * [servicesHidden] - Indicates if the package is hidden (1 for yes, 0 for no).
@BuiltValue()
abstract class WebsitesOrderPackagesInfo implements Built<WebsitesOrderPackagesInfo, WebsitesOrderPackagesInfoBuilder> {
  /// The ID of the package.
  @BuiltValueField(wireName: r'services_id')
  String get servicesId;

  /// The name of the package.
  @BuiltValueField(wireName: r'services_name')
  String get servicesName;

  /// The cost of the package.
  @BuiltValueField(wireName: r'services_cost')
  String get servicesCost;

  /// The category of the package.
  @BuiltValueField(wireName: r'services_category')
  String get servicesCategory;

  /// Indicates if the package is buyable (1 for yes, 0 for no).
  @BuiltValueField(wireName: r'services_buyable')
  String get servicesBuyable;

  /// The type of the package.
  @BuiltValueField(wireName: r'services_type')
  String get servicesType;

  /// The module of the package.
  @BuiltValueField(wireName: r'services_module')
  String get servicesModule;

  /// Description of the package.
  @BuiltValueField(wireName: r'services_description')
  String get servicesDescription;

  /// Additional field 1 for the package.
  @BuiltValueField(wireName: r'services_field1')
  String? get servicesField1;

  /// Additional field 2 for the package.
  @BuiltValueField(wireName: r'services_field2')
  String? get servicesField2;

  /// HTML content for the package.
  @BuiltValueField(wireName: r'services_html')
  String? get servicesHtml;

  /// URL for more information about the package.
  @BuiltValueField(wireName: r'services_moreinfo_url')
  String? get servicesMoreinfoUrl;

  /// Indicates if the package is hidden (1 for yes, 0 for no).
  @BuiltValueField(wireName: r'services_hidden')
  String? get servicesHidden;

  WebsitesOrderPackagesInfo._();

  factory WebsitesOrderPackagesInfo([void updates(WebsitesOrderPackagesInfoBuilder b)]) = _$WebsitesOrderPackagesInfo;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(WebsitesOrderPackagesInfoBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<WebsitesOrderPackagesInfo> get serializer => _$WebsitesOrderPackagesInfoSerializer();
}

class _$WebsitesOrderPackagesInfoSerializer implements PrimitiveSerializer<WebsitesOrderPackagesInfo> {
  @override
  final Iterable<Type> types = const [WebsitesOrderPackagesInfo, _$WebsitesOrderPackagesInfo];

  @override
  final String wireName = r'WebsitesOrderPackagesInfo';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    WebsitesOrderPackagesInfo object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'services_id';
    yield serializers.serialize(
      object.servicesId,
      specifiedType: const FullType(String),
    );
    yield r'services_name';
    yield serializers.serialize(
      object.servicesName,
      specifiedType: const FullType(String),
    );
    yield r'services_cost';
    yield serializers.serialize(
      object.servicesCost,
      specifiedType: const FullType(String),
    );
    yield r'services_category';
    yield serializers.serialize(
      object.servicesCategory,
      specifiedType: const FullType(String),
    );
    yield r'services_buyable';
    yield serializers.serialize(
      object.servicesBuyable,
      specifiedType: const FullType(String),
    );
    yield r'services_type';
    yield serializers.serialize(
      object.servicesType,
      specifiedType: const FullType(String),
    );
    yield r'services_module';
    yield serializers.serialize(
      object.servicesModule,
      specifiedType: const FullType(String),
    );
    yield r'services_description';
    yield serializers.serialize(
      object.servicesDescription,
      specifiedType: const FullType(String),
    );
    if (object.servicesField1 != null) {
      yield r'services_field1';
      yield serializers.serialize(
        object.servicesField1,
        specifiedType: const FullType(String),
      );
    }
    if (object.servicesField2 != null) {
      yield r'services_field2';
      yield serializers.serialize(
        object.servicesField2,
        specifiedType: const FullType(String),
      );
    }
    if (object.servicesHtml != null) {
      yield r'services_html';
      yield serializers.serialize(
        object.servicesHtml,
        specifiedType: const FullType(String),
      );
    }
    if (object.servicesMoreinfoUrl != null) {
      yield r'services_moreinfo_url';
      yield serializers.serialize(
        object.servicesMoreinfoUrl,
        specifiedType: const FullType(String),
      );
    }
    if (object.servicesHidden != null) {
      yield r'services_hidden';
      yield serializers.serialize(
        object.servicesHidden,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    WebsitesOrderPackagesInfo object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required WebsitesOrderPackagesInfoBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'services_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.servicesId = valueDes;
          break;
        case r'services_name':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.servicesName = valueDes;
          break;
        case r'services_cost':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.servicesCost = valueDes;
          break;
        case r'services_category':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.servicesCategory = valueDes;
          break;
        case r'services_buyable':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.servicesBuyable = valueDes;
          break;
        case r'services_type':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.servicesType = valueDes;
          break;
        case r'services_module':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.servicesModule = valueDes;
          break;
        case r'services_description':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.servicesDescription = valueDes;
          break;
        case r'services_field1':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.servicesField1 = valueDes;
          break;
        case r'services_field2':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.servicesField2 = valueDes;
          break;
        case r'services_html':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.servicesHtml = valueDes;
          break;
        case r'services_moreinfo_url':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.servicesMoreinfoUrl = valueDes;
          break;
        case r'services_hidden':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.servicesHidden = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  WebsitesOrderPackagesInfo deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = WebsitesOrderPackagesInfoBuilder();
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

