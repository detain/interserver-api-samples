//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/vps_traffic_data_data_section_response.dart';
import 'package:built_collection/built_collection.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'vps_traffic_data_section_response.g.dart';

/// VPS Traffic Data Section Response
///
/// Properties:
/// * [name] 
/// * [data] 
@BuiltValue()
abstract class VpsTrafficDataSectionResponse implements Built<VpsTrafficDataSectionResponse, VpsTrafficDataSectionResponseBuilder> {
  @BuiltValueField(wireName: r'name')
  String get name;

  @BuiltValueField(wireName: r'data')
  BuiltList<VPSTrafficDataDataSectionResponse> get data;

  VpsTrafficDataSectionResponse._();

  factory VpsTrafficDataSectionResponse([void updates(VpsTrafficDataSectionResponseBuilder b)]) = _$VpsTrafficDataSectionResponse;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(VpsTrafficDataSectionResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<VpsTrafficDataSectionResponse> get serializer => _$VpsTrafficDataSectionResponseSerializer();
}

class _$VpsTrafficDataSectionResponseSerializer implements PrimitiveSerializer<VpsTrafficDataSectionResponse> {
  @override
  final Iterable<Type> types = const [VpsTrafficDataSectionResponse, _$VpsTrafficDataSectionResponse];

  @override
  final String wireName = r'VpsTrafficDataSectionResponse';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    VpsTrafficDataSectionResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'name';
    yield serializers.serialize(
      object.name,
      specifiedType: const FullType(String),
    );
    yield r'data';
    yield serializers.serialize(
      object.data,
      specifiedType: const FullType(BuiltList, [FullType(VPSTrafficDataDataSectionResponse)]),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    VpsTrafficDataSectionResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required VpsTrafficDataSectionResponseBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'name':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.name = valueDes;
          break;
        case r'data':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(VPSTrafficDataDataSectionResponse)]),
          ) as BuiltList<VPSTrafficDataDataSectionResponse>;
          result.data.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  VpsTrafficDataSectionResponse deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = VpsTrafficDataSectionResponseBuilder();
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

