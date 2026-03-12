//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/get_scrub_ip_details200_response_extra_info_tables_scrub_ips_rows_inner.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'get_scrub_ip_details200_response_extra_info_tables_scrub_ips.g.dart';

/// GetScrubIpDetails200ResponseExtraInfoTablesScrubIps
///
/// Properties:
/// * [title] 
/// * [rows] 
@BuiltValue()
abstract class GetScrubIpDetails200ResponseExtraInfoTablesScrubIps implements Built<GetScrubIpDetails200ResponseExtraInfoTablesScrubIps, GetScrubIpDetails200ResponseExtraInfoTablesScrubIpsBuilder> {
  @BuiltValueField(wireName: r'title')
  String? get title;

  @BuiltValueField(wireName: r'rows')
  BuiltList<GetScrubIpDetails200ResponseExtraInfoTablesScrubIpsRowsInner>? get rows;

  GetScrubIpDetails200ResponseExtraInfoTablesScrubIps._();

  factory GetScrubIpDetails200ResponseExtraInfoTablesScrubIps([void updates(GetScrubIpDetails200ResponseExtraInfoTablesScrubIpsBuilder b)]) = _$GetScrubIpDetails200ResponseExtraInfoTablesScrubIps;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(GetScrubIpDetails200ResponseExtraInfoTablesScrubIpsBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<GetScrubIpDetails200ResponseExtraInfoTablesScrubIps> get serializer => _$GetScrubIpDetails200ResponseExtraInfoTablesScrubIpsSerializer();
}

class _$GetScrubIpDetails200ResponseExtraInfoTablesScrubIpsSerializer implements PrimitiveSerializer<GetScrubIpDetails200ResponseExtraInfoTablesScrubIps> {
  @override
  final Iterable<Type> types = const [GetScrubIpDetails200ResponseExtraInfoTablesScrubIps, _$GetScrubIpDetails200ResponseExtraInfoTablesScrubIps];

  @override
  final String wireName = r'GetScrubIpDetails200ResponseExtraInfoTablesScrubIps';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    GetScrubIpDetails200ResponseExtraInfoTablesScrubIps object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.title != null) {
      yield r'title';
      yield serializers.serialize(
        object.title,
        specifiedType: const FullType(String),
      );
    }
    if (object.rows != null) {
      yield r'rows';
      yield serializers.serialize(
        object.rows,
        specifiedType: const FullType(BuiltList, [FullType(GetScrubIpDetails200ResponseExtraInfoTablesScrubIpsRowsInner)]),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    GetScrubIpDetails200ResponseExtraInfoTablesScrubIps object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required GetScrubIpDetails200ResponseExtraInfoTablesScrubIpsBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'title':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.title = valueDes;
          break;
        case r'rows':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(GetScrubIpDetails200ResponseExtraInfoTablesScrubIpsRowsInner)]),
          ) as BuiltList<GetScrubIpDetails200ResponseExtraInfoTablesScrubIpsRowsInner>;
          result.rows.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  GetScrubIpDetails200ResponseExtraInfoTablesScrubIps deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = GetScrubIpDetails200ResponseExtraInfoTablesScrubIpsBuilder();
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

