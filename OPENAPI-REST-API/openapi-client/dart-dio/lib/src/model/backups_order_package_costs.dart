//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'backups_order_package_costs.g.dart';

/// BackupsOrderPackageCosts
///
/// Properties:
/// * [n11006] - The cost associated with package 11006.
@BuiltValue()
abstract class BackupsOrderPackageCosts implements Built<BackupsOrderPackageCosts, BackupsOrderPackageCostsBuilder> {
  /// The cost associated with package 11006.
  @BuiltValueField(wireName: r'11006')
  int get n11006;

  BackupsOrderPackageCosts._();

  factory BackupsOrderPackageCosts([void updates(BackupsOrderPackageCostsBuilder b)]) = _$BackupsOrderPackageCosts;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(BackupsOrderPackageCostsBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<BackupsOrderPackageCosts> get serializer => _$BackupsOrderPackageCostsSerializer();
}

class _$BackupsOrderPackageCostsSerializer implements PrimitiveSerializer<BackupsOrderPackageCosts> {
  @override
  final Iterable<Type> types = const [BackupsOrderPackageCosts, _$BackupsOrderPackageCosts];

  @override
  final String wireName = r'BackupsOrderPackageCosts';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    BackupsOrderPackageCosts object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'11006';
    yield serializers.serialize(
      object.n11006,
      specifiedType: const FullType(int),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    BackupsOrderPackageCosts object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required BackupsOrderPackageCostsBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'11006':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.n11006 = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  BackupsOrderPackageCosts deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = BackupsOrderPackageCostsBuilder();
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

