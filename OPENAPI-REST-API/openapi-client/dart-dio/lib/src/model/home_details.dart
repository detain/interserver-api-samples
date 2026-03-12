//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/home_details_modules.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'home_details.g.dart';

/// Users details.
///
/// Properties:
/// * [modules] 
@BuiltValue()
abstract class HomeDetails implements Built<HomeDetails, HomeDetailsBuilder> {
  @BuiltValueField(wireName: r'modules')
  HomeDetailsModules? get modules;

  HomeDetails._();

  factory HomeDetails([void updates(HomeDetailsBuilder b)]) = _$HomeDetails;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(HomeDetailsBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<HomeDetails> get serializer => _$HomeDetailsSerializer();
}

class _$HomeDetailsSerializer implements PrimitiveSerializer<HomeDetails> {
  @override
  final Iterable<Type> types = const [HomeDetails, _$HomeDetails];

  @override
  final String wireName = r'HomeDetails';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    HomeDetails object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.modules != null) {
      yield r'modules';
      yield serializers.serialize(
        object.modules,
        specifiedType: const FullType(HomeDetailsModules),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    HomeDetails object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required HomeDetailsBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'modules':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(HomeDetailsModules),
          ) as HomeDetailsModules;
          result.modules.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  HomeDetails deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = HomeDetailsBuilder();
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

