//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/quickserver_order_version_centosstream8.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'quickserver_order_version.g.dart';

/// Version details.
///
/// Properties:
/// * [centosstream8] 
@BuiltValue()
abstract class QuickserverOrderVersion implements Built<QuickserverOrderVersion, QuickserverOrderVersionBuilder> {
  @BuiltValueField(wireName: r'centosstream-8')
  QuickserverOrderVersionCentosstream8? get centosstream8;

  QuickserverOrderVersion._();

  factory QuickserverOrderVersion([void updates(QuickserverOrderVersionBuilder b)]) = _$QuickserverOrderVersion;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(QuickserverOrderVersionBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<QuickserverOrderVersion> get serializer => _$QuickserverOrderVersionSerializer();
}

class _$QuickserverOrderVersionSerializer implements PrimitiveSerializer<QuickserverOrderVersion> {
  @override
  final Iterable<Type> types = const [QuickserverOrderVersion, _$QuickserverOrderVersion];

  @override
  final String wireName = r'QuickserverOrderVersion';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    QuickserverOrderVersion object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.centosstream8 != null) {
      yield r'centosstream-8';
      yield serializers.serialize(
        object.centosstream8,
        specifiedType: const FullType(QuickserverOrderVersionCentosstream8),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    QuickserverOrderVersion object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required QuickserverOrderVersionBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'centosstream-8':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(QuickserverOrderVersionCentosstream8),
          ) as QuickserverOrderVersionCentosstream8;
          result.centosstream8.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  QuickserverOrderVersion deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = QuickserverOrderVersionBuilder();
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

