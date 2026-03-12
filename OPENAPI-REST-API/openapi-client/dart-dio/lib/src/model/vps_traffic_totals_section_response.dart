//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'vps_traffic_totals_section_response.g.dart';

/// VPS Traffic Totals Secttions Data
///
/// Properties:
/// * [in_] 
/// * [out_] 
@BuiltValue()
abstract class VpsTrafficTotalsSectionResponse implements Built<VpsTrafficTotalsSectionResponse, VpsTrafficTotalsSectionResponseBuilder> {
  @BuiltValueField(wireName: r'in')
  int get in_;

  @BuiltValueField(wireName: r'out')
  int get out_;

  VpsTrafficTotalsSectionResponse._();

  factory VpsTrafficTotalsSectionResponse([void updates(VpsTrafficTotalsSectionResponseBuilder b)]) = _$VpsTrafficTotalsSectionResponse;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(VpsTrafficTotalsSectionResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<VpsTrafficTotalsSectionResponse> get serializer => _$VpsTrafficTotalsSectionResponseSerializer();
}

class _$VpsTrafficTotalsSectionResponseSerializer implements PrimitiveSerializer<VpsTrafficTotalsSectionResponse> {
  @override
  final Iterable<Type> types = const [VpsTrafficTotalsSectionResponse, _$VpsTrafficTotalsSectionResponse];

  @override
  final String wireName = r'VpsTrafficTotalsSectionResponse';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    VpsTrafficTotalsSectionResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'in';
    yield serializers.serialize(
      object.in_,
      specifiedType: const FullType(int),
    );
    yield r'out';
    yield serializers.serialize(
      object.out_,
      specifiedType: const FullType(int),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    VpsTrafficTotalsSectionResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required VpsTrafficTotalsSectionResponseBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'in':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.in_ = valueDes;
          break;
        case r'out':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.out_ = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  VpsTrafficTotalsSectionResponse deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = VpsTrafficTotalsSectionResponseBuilder();
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

