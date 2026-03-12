//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'quickserver_order_version_centosstream8.g.dart';

/// QuickserverOrderVersionCentosstream8
///
/// Properties:
/// * [centosstream8] - Version details of CentOS Stream 8.
@BuiltValue()
abstract class QuickserverOrderVersionCentosstream8 implements Built<QuickserverOrderVersionCentosstream8, QuickserverOrderVersionCentosstream8Builder> {
  /// Version details of CentOS Stream 8.
  @BuiltValueField(wireName: r'centosstream-8')
  String? get centosstream8;

  QuickserverOrderVersionCentosstream8._();

  factory QuickserverOrderVersionCentosstream8([void updates(QuickserverOrderVersionCentosstream8Builder b)]) = _$QuickserverOrderVersionCentosstream8;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(QuickserverOrderVersionCentosstream8Builder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<QuickserverOrderVersionCentosstream8> get serializer => _$QuickserverOrderVersionCentosstream8Serializer();
}

class _$QuickserverOrderVersionCentosstream8Serializer implements PrimitiveSerializer<QuickserverOrderVersionCentosstream8> {
  @override
  final Iterable<Type> types = const [QuickserverOrderVersionCentosstream8, _$QuickserverOrderVersionCentosstream8];

  @override
  final String wireName = r'QuickserverOrderVersionCentosstream8';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    QuickserverOrderVersionCentosstream8 object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.centosstream8 != null) {
      yield r'centosstream-8';
      yield serializers.serialize(
        object.centosstream8,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    QuickserverOrderVersionCentosstream8 object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required QuickserverOrderVersionCentosstream8Builder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'centosstream-8':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.centosstream8 = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  QuickserverOrderVersionCentosstream8 deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = QuickserverOrderVersionCentosstream8Builder();
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

