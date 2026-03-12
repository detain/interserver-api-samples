//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:built_value/json_object.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'domain_search_response.g.dart';

/// Lookup and suggestion results returned for a domain search.
///
/// Properties:
/// * [success] - Indicates whether the registrar search succeeded.
/// * [responseText] - Human-readable status text from the registrar.
/// * [responseTime] - Response time as reported by the registrar.
/// * [lookup] - Availability lookup results for queried domains.
/// * [suggest] - Suggested alternative domains and availability data.
/// * [tlds] - TLDs evaluated during the search.
@BuiltValue()
abstract class DomainSearchResponse implements Built<DomainSearchResponse, DomainSearchResponseBuilder> {
  /// Indicates whether the registrar search succeeded.
  @BuiltValueField(wireName: r'success')
  bool? get success;

  /// Human-readable status text from the registrar.
  @BuiltValueField(wireName: r'response_text')
  String? get responseText;

  /// Response time as reported by the registrar.
  @BuiltValueField(wireName: r'response_time')
  String? get responseTime;

  /// Availability lookup results for queried domains.
  @BuiltValueField(wireName: r'lookup')
  BuiltList<JsonObject>? get lookup;

  /// Suggested alternative domains and availability data.
  @BuiltValueField(wireName: r'suggest')
  BuiltList<JsonObject>? get suggest;

  /// TLDs evaluated during the search.
  @BuiltValueField(wireName: r'tlds')
  BuiltList<String>? get tlds;

  DomainSearchResponse._();

  factory DomainSearchResponse([void updates(DomainSearchResponseBuilder b)]) = _$DomainSearchResponse;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(DomainSearchResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<DomainSearchResponse> get serializer => _$DomainSearchResponseSerializer();
}

class _$DomainSearchResponseSerializer implements PrimitiveSerializer<DomainSearchResponse> {
  @override
  final Iterable<Type> types = const [DomainSearchResponse, _$DomainSearchResponse];

  @override
  final String wireName = r'DomainSearchResponse';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    DomainSearchResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.success != null) {
      yield r'success';
      yield serializers.serialize(
        object.success,
        specifiedType: const FullType(bool),
      );
    }
    if (object.responseText != null) {
      yield r'response_text';
      yield serializers.serialize(
        object.responseText,
        specifiedType: const FullType(String),
      );
    }
    if (object.responseTime != null) {
      yield r'response_time';
      yield serializers.serialize(
        object.responseTime,
        specifiedType: const FullType(String),
      );
    }
    if (object.lookup != null) {
      yield r'lookup';
      yield serializers.serialize(
        object.lookup,
        specifiedType: const FullType(BuiltList, [FullType(JsonObject)]),
      );
    }
    if (object.suggest != null) {
      yield r'suggest';
      yield serializers.serialize(
        object.suggest,
        specifiedType: const FullType(BuiltList, [FullType(JsonObject)]),
      );
    }
    if (object.tlds != null) {
      yield r'tlds';
      yield serializers.serialize(
        object.tlds,
        specifiedType: const FullType(BuiltList, [FullType(String)]),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    DomainSearchResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required DomainSearchResponseBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'success':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(bool),
          ) as bool;
          result.success = valueDes;
          break;
        case r'response_text':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.responseText = valueDes;
          break;
        case r'response_time':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.responseTime = valueDes;
          break;
        case r'lookup':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(JsonObject)]),
          ) as BuiltList<JsonObject>;
          result.lookup.replace(valueDes);
          break;
        case r'suggest':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(JsonObject)]),
          ) as BuiltList<JsonObject>;
          result.suggest.replace(valueDes);
          break;
        case r'tlds':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(String)]),
          ) as BuiltList<String>;
          result.tlds.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  DomainSearchResponse deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = DomainSearchResponseBuilder();
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

