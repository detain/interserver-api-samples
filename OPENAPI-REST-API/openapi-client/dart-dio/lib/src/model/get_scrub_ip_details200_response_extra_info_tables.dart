//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/get_scrub_ip_details200_response_extra_info_tables_scrub_ips.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'get_scrub_ip_details200_response_extra_info_tables.g.dart';

/// GetScrubIpDetails200ResponseExtraInfoTables
///
/// Properties:
/// * [scrubIps] 
@BuiltValue()
abstract class GetScrubIpDetails200ResponseExtraInfoTables implements Built<GetScrubIpDetails200ResponseExtraInfoTables, GetScrubIpDetails200ResponseExtraInfoTablesBuilder> {
  @BuiltValueField(wireName: r'scrub_ips')
  GetScrubIpDetails200ResponseExtraInfoTablesScrubIps? get scrubIps;

  GetScrubIpDetails200ResponseExtraInfoTables._();

  factory GetScrubIpDetails200ResponseExtraInfoTables([void updates(GetScrubIpDetails200ResponseExtraInfoTablesBuilder b)]) = _$GetScrubIpDetails200ResponseExtraInfoTables;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(GetScrubIpDetails200ResponseExtraInfoTablesBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<GetScrubIpDetails200ResponseExtraInfoTables> get serializer => _$GetScrubIpDetails200ResponseExtraInfoTablesSerializer();
}

class _$GetScrubIpDetails200ResponseExtraInfoTablesSerializer implements PrimitiveSerializer<GetScrubIpDetails200ResponseExtraInfoTables> {
  @override
  final Iterable<Type> types = const [GetScrubIpDetails200ResponseExtraInfoTables, _$GetScrubIpDetails200ResponseExtraInfoTables];

  @override
  final String wireName = r'GetScrubIpDetails200ResponseExtraInfoTables';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    GetScrubIpDetails200ResponseExtraInfoTables object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.scrubIps != null) {
      yield r'scrub_ips';
      yield serializers.serialize(
        object.scrubIps,
        specifiedType: const FullType(GetScrubIpDetails200ResponseExtraInfoTablesScrubIps),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    GetScrubIpDetails200ResponseExtraInfoTables object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required GetScrubIpDetails200ResponseExtraInfoTablesBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'scrub_ips':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(GetScrubIpDetails200ResponseExtraInfoTablesScrubIps),
          ) as GetScrubIpDetails200ResponseExtraInfoTablesScrubIps;
          result.scrubIps.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  GetScrubIpDetails200ResponseExtraInfoTables deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = GetScrubIpDetails200ResponseExtraInfoTablesBuilder();
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

