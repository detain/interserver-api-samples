//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'service_category.g.dart';

/// A Category of Services.  This is the broadest grouping within a module.
///
/// Properties:
/// * [categoryId] 
/// * [categoryName] 
/// * [categoryTag] 
/// * [categoryModule] 
@BuiltValue()
abstract class ServiceCategory implements Built<ServiceCategory, ServiceCategoryBuilder> {
  @BuiltValueField(wireName: r'category_id')
  int get categoryId;

  @BuiltValueField(wireName: r'category_name')
  String get categoryName;

  @BuiltValueField(wireName: r'category_tag')
  String get categoryTag;

  @BuiltValueField(wireName: r'category_module')
  String get categoryModule;

  ServiceCategory._();

  factory ServiceCategory([void updates(ServiceCategoryBuilder b)]) = _$ServiceCategory;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ServiceCategoryBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ServiceCategory> get serializer => _$ServiceCategorySerializer();
}

class _$ServiceCategorySerializer implements PrimitiveSerializer<ServiceCategory> {
  @override
  final Iterable<Type> types = const [ServiceCategory, _$ServiceCategory];

  @override
  final String wireName = r'ServiceCategory';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ServiceCategory object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'category_id';
    yield serializers.serialize(
      object.categoryId,
      specifiedType: const FullType(int),
    );
    yield r'category_name';
    yield serializers.serialize(
      object.categoryName,
      specifiedType: const FullType(String),
    );
    yield r'category_tag';
    yield serializers.serialize(
      object.categoryTag,
      specifiedType: const FullType(String),
    );
    yield r'category_module';
    yield serializers.serialize(
      object.categoryModule,
      specifiedType: const FullType(String),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    ServiceCategory object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ServiceCategoryBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'category_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.categoryId = valueDes;
          break;
        case r'category_name':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.categoryName = valueDes;
          break;
        case r'category_tag':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.categoryTag = valueDes;
          break;
        case r'category_module':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.categoryModule = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  ServiceCategory deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ServiceCategoryBuilder();
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

