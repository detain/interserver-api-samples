//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:built_value/json_object.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'search_autocomplete_response.g.dart';

/// Autocomplete search results for the authenticated account.
@BuiltValue()
abstract class SearchAutocompleteResponse implements Built<SearchAutocompleteResponse, SearchAutocompleteResponseBuilder> {
  SearchAutocompleteResponse._();

  factory SearchAutocompleteResponse([void updates(SearchAutocompleteResponseBuilder b)]) = _$SearchAutocompleteResponse;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(SearchAutocompleteResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<SearchAutocompleteResponse> get serializer => _$SearchAutocompleteResponseSerializer();
}

class _$SearchAutocompleteResponseSerializer implements PrimitiveSerializer<SearchAutocompleteResponse> {
  @override
  final Iterable<Type> types = const [SearchAutocompleteResponse, _$SearchAutocompleteResponse];

  @override
  final String wireName = r'SearchAutocompleteResponse';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    SearchAutocompleteResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
  }

  @override
  Object serialize(
    Serializers serializers,
    SearchAutocompleteResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  @override
  SearchAutocompleteResponse deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = SearchAutocompleteResponseBuilder();
    final serializedList = (serialized as Iterable<Object?>).toList();
    return result.build();
  }
}

