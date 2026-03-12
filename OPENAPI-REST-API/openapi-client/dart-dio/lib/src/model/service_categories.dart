//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/service_category.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'service_categories.g.dart';

/// The listing of the categories for the services.
@BuiltValue()
abstract class ServiceCategories implements Built<ServiceCategories, ServiceCategoriesBuilder> {
  ServiceCategories._();

  factory ServiceCategories([void updates(ServiceCategoriesBuilder b)]) = _$ServiceCategories;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ServiceCategoriesBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ServiceCategories> get serializer => _$ServiceCategoriesSerializer();
}

class _$ServiceCategoriesSerializer implements PrimitiveSerializer<ServiceCategories> {
  @override
  final Iterable<Type> types = const [ServiceCategories, _$ServiceCategories];

  @override
  final String wireName = r'ServiceCategories';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ServiceCategories object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
  }

  @override
  Object serialize(
    Serializers serializers,
    ServiceCategories object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  @override
  ServiceCategories deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ServiceCategoriesBuilder();
    final serializedList = (serialized as Iterable<Object?>).toList();
    return result.build();
  }
}

