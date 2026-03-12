//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'licenses_order_service_categories509.g.dart';

/// LicensesOrderServiceCategories509
///
/// Properties:
/// * [categoryId] - Category ID
/// * [categoryName] - Category Name
/// * [categoryTag] - Category Tag
/// * [categoryModule] - Category Module
@BuiltValue()
abstract class LicensesOrderServiceCategories509 implements Built<LicensesOrderServiceCategories509, LicensesOrderServiceCategories509Builder> {
  /// Category ID
  @BuiltValueField(wireName: r'category_id')
  String? get categoryId;

  /// Category Name
  @BuiltValueField(wireName: r'category_name')
  String? get categoryName;

  /// Category Tag
  @BuiltValueField(wireName: r'category_tag')
  String? get categoryTag;

  /// Category Module
  @BuiltValueField(wireName: r'category_module')
  String? get categoryModule;

  LicensesOrderServiceCategories509._();

  factory LicensesOrderServiceCategories509([void updates(LicensesOrderServiceCategories509Builder b)]) = _$LicensesOrderServiceCategories509;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(LicensesOrderServiceCategories509Builder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<LicensesOrderServiceCategories509> get serializer => _$LicensesOrderServiceCategories509Serializer();
}

class _$LicensesOrderServiceCategories509Serializer implements PrimitiveSerializer<LicensesOrderServiceCategories509> {
  @override
  final Iterable<Type> types = const [LicensesOrderServiceCategories509, _$LicensesOrderServiceCategories509];

  @override
  final String wireName = r'LicensesOrderServiceCategories509';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    LicensesOrderServiceCategories509 object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.categoryId != null) {
      yield r'category_id';
      yield serializers.serialize(
        object.categoryId,
        specifiedType: const FullType(String),
      );
    }
    if (object.categoryName != null) {
      yield r'category_name';
      yield serializers.serialize(
        object.categoryName,
        specifiedType: const FullType(String),
      );
    }
    if (object.categoryTag != null) {
      yield r'category_tag';
      yield serializers.serialize(
        object.categoryTag,
        specifiedType: const FullType(String),
      );
    }
    if (object.categoryModule != null) {
      yield r'category_module';
      yield serializers.serialize(
        object.categoryModule,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    LicensesOrderServiceCategories509 object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required LicensesOrderServiceCategories509Builder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'category_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
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
  LicensesOrderServiceCategories509 deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = LicensesOrderServiceCategories509Builder();
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

