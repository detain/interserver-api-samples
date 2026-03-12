//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/vps_snapshot.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'vps_service_extra.g.dart';

/// VpsServiceExtra
///
/// Properties:
/// * [spice] - Spice
/// * [snapshots] 
@BuiltValue()
abstract class VpsServiceExtra implements Built<VpsServiceExtra, VpsServiceExtraBuilder> {
  /// Spice
  @BuiltValueField(wireName: r'spice')
  int? get spice;

  @BuiltValueField(wireName: r'snapshots')
  BuiltList<VpsSnapshot>? get snapshots;

  VpsServiceExtra._();

  factory VpsServiceExtra([void updates(VpsServiceExtraBuilder b)]) = _$VpsServiceExtra;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(VpsServiceExtraBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<VpsServiceExtra> get serializer => _$VpsServiceExtraSerializer();
}

class _$VpsServiceExtraSerializer implements PrimitiveSerializer<VpsServiceExtra> {
  @override
  final Iterable<Type> types = const [VpsServiceExtra, _$VpsServiceExtra];

  @override
  final String wireName = r'VpsServiceExtra';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    VpsServiceExtra object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.spice != null) {
      yield r'spice';
      yield serializers.serialize(
        object.spice,
        specifiedType: const FullType(int),
      );
    }
    if (object.snapshots != null) {
      yield r'snapshots';
      yield serializers.serialize(
        object.snapshots,
        specifiedType: const FullType(BuiltList, [FullType(VpsSnapshot)]),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    VpsServiceExtra object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required VpsServiceExtraBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'spice':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.spice = valueDes;
          break;
        case r'snapshots':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(VpsSnapshot)]),
          ) as BuiltList<VpsSnapshot>;
          result.snapshots.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  VpsServiceExtra deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = VpsServiceExtraBuilder();
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

