//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'get_scrub_ip_details200_response_extra_info_tables_scrub_ips_rows_inner.g.dart';

/// GetScrubIpDetails200ResponseExtraInfoTablesScrubIpsRowsInner
///
/// Properties:
/// * [desc] 
/// * [value] 
@BuiltValue()
abstract class GetScrubIpDetails200ResponseExtraInfoTablesScrubIpsRowsInner implements Built<GetScrubIpDetails200ResponseExtraInfoTablesScrubIpsRowsInner, GetScrubIpDetails200ResponseExtraInfoTablesScrubIpsRowsInnerBuilder> {
  @BuiltValueField(wireName: r'desc')
  String? get desc;

  @BuiltValueField(wireName: r'value')
  String? get value;

  GetScrubIpDetails200ResponseExtraInfoTablesScrubIpsRowsInner._();

  factory GetScrubIpDetails200ResponseExtraInfoTablesScrubIpsRowsInner([void updates(GetScrubIpDetails200ResponseExtraInfoTablesScrubIpsRowsInnerBuilder b)]) = _$GetScrubIpDetails200ResponseExtraInfoTablesScrubIpsRowsInner;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(GetScrubIpDetails200ResponseExtraInfoTablesScrubIpsRowsInnerBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<GetScrubIpDetails200ResponseExtraInfoTablesScrubIpsRowsInner> get serializer => _$GetScrubIpDetails200ResponseExtraInfoTablesScrubIpsRowsInnerSerializer();
}

class _$GetScrubIpDetails200ResponseExtraInfoTablesScrubIpsRowsInnerSerializer implements PrimitiveSerializer<GetScrubIpDetails200ResponseExtraInfoTablesScrubIpsRowsInner> {
  @override
  final Iterable<Type> types = const [GetScrubIpDetails200ResponseExtraInfoTablesScrubIpsRowsInner, _$GetScrubIpDetails200ResponseExtraInfoTablesScrubIpsRowsInner];

  @override
  final String wireName = r'GetScrubIpDetails200ResponseExtraInfoTablesScrubIpsRowsInner';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    GetScrubIpDetails200ResponseExtraInfoTablesScrubIpsRowsInner object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.desc != null) {
      yield r'desc';
      yield serializers.serialize(
        object.desc,
        specifiedType: const FullType(String),
      );
    }
    if (object.value != null) {
      yield r'value';
      yield serializers.serialize(
        object.value,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    GetScrubIpDetails200ResponseExtraInfoTablesScrubIpsRowsInner object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required GetScrubIpDetails200ResponseExtraInfoTablesScrubIpsRowsInnerBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'desc':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.desc = valueDes;
          break;
        case r'value':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.value = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  GetScrubIpDetails200ResponseExtraInfoTablesScrubIpsRowsInner deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = GetScrubIpDetails200ResponseExtraInfoTablesScrubIpsRowsInnerBuilder();
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

